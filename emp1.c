#include <stdio.h>
#include <windows.h>
#include <string.h>

COORD coord = {0,0};

void gotoxy(int x,int y){
    coord.X = x; coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

box(int x1,int y1,int x2,int y2)
{
   int i;
   for(i=x1;i<=x2;i++)
     {
      gotoxy(i,y1);
      printf("%c",205);
      gotoxy(i,y2);
      printf("%c",205);
     }
   for(i=y1;i<=y2;i++)
     {
      gotoxy(x1,i);
      printf("%c",186);
      gotoxy(x2,i);
      printf("%c",186);
     }
      gotoxy(x1,y1);
      printf("%c",201);
      gotoxy(x1,y2);
      printf("%c",200);
      gotoxy(x2,y1);
      printf("%c",187);
      gotoxy(x2,y2);
      printf("%c",188);
}

int main(){
    FILE *fp, *ft;
    char a, c;

    struct emp
    {
        char name[40];
        int age;
        float bs;
    };

    struct emp e;
    char empname[40];
    long int recsize;
    fp = fopen("EMP.DAT","rb+");
    if(fp == NULL){
        fp = fopen("EMP.DAT","wb+");
        if(fp == NULL){
            printf("Cannot open file");
            exit(1);
        }
    }
    recsize = sizeof(e);
    while(1){
        system("cls");
        box(20,5,80,25);
        gotoxy(30,10);
        printf("1. Add Employee Record");
        gotoxy(30,12);
        printf("2. List of Employees");
        gotoxy(30,14);
        printf("3. Modify a particular Employee's Record");
        gotoxy(30,16);
        printf("4. Delete Employee's Data");
        gotoxy(30,18);
        printf("5. Exit the Program");
        gotoxy(30,20);
        printf("Please Enter Your Choice: ");
        fflush(stdin);
        c  = getche();
        switch(c){
            case '1':
                system("cls");
                fseek(fp,0,SEEK_END);
                a = 'y';
                while(a == 'y'){
                    system("cls");
                    box(20,5,80,25);
                    gotoxy(30,10);
                    printf("Enter Employee's name: ");
                    scanf("%s",e.name);
                    gotoxy(30,12);
                    printf("Enter Employee's age: ");
                    scanf("%d", &e.age);
                    gotoxy(30,14);
                    printf("Enter basic salary of the Employee: ");
                    scanf("%f", &e.bs);
                    fwrite(&e,recsize,1,fp);
                    gotoxy(30,18);
                    printf("Do you want to add another record(y/n) ");
                    fflush(stdin);
                    a = getche();
                    system("cls");
                }
                break;
            case '2':
                system("cls");
                rewind(fp);
                while(fread(&e,recsize,1,fp)==1){
                    box(20,5,80,25);
                    gotoxy(30,10);
                    printf("%s",e.name);
                    gotoxy(30,12);
                    printf("%d",e.age);
                    gotoxy(30,14);
                    printf("%.2f",e.bs);
                }
                getch();
                break;

            case '3':
                system("cls");
                a = 'y';
                while(a == 'y'){
                    system("cls");
                    box(20,5,80,25);
                    gotoxy(30,10);
                    printf("Enter the employee name to modify: ");
                    scanf("%s", empname);
                    rewind(fp);
                    while(fread(&e,recsize,1,fp)==1){
                        if(strcmp(e.name,empname) == 0){
                            box(20,5,80,25);
                            gotoxy(30,13);
                            printf("Enter new name: ");
                            scanf("%s",e.name);
                            gotoxy(30,15);
                            printf("Enter new age: ");
                            scanf("%d", &e.age);
                            gotoxy(30,17);
                            printf("Enter new basic salary: ");
                            scanf("%f", &e.bs);
                            fseek(fp,-recsize,SEEK_CUR);
                            fwrite(&e,recsize,1,fp);
                            break;
                        }
                    }
                    gotoxy(30,20);
                    printf("Do you want to modify another record(y/n)");
                    fflush(stdin);
                    a = getche();
                }
                break;
            case '4':
                system("cls");
                a = 'y';
                while(a == 'y'){
                    box(20,5,80,25);
                    gotoxy(30,10);
                    printf("Enter name of employee to delete: ");
                    scanf("%s",empname);
                    ft = fopen("Temp.dat","wb");
                    rewind(fp);
                    while(fread(&e,recsize,1,fp) == 1){
                        if(strcmp(e.name,empname) != 0){
                            fwrite(&e,recsize,1,ft);
                        }
                    }
                    fclose(fp);
                    fclose(ft);
                    remove("EMP.DAT");
                    rename("Temp.dat","EMP.DAT");
                    fp = fopen("EMP.DAT", "rb+");
                    gotoxy(30,15);
                    printf("Delete a record(y/n)");
                    fflush(stdin);
                    a = getche();
                }
                break;
            case '5':
                fclose(fp);
                system("cls");
                exit(0);
        }
    }
    return 0;
}
