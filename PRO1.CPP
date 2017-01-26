#include <conio.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <process.h>
#include <string.h>
#include <fstream.h>
#include <dos.h>
#include <graphics.h>

void kites();

struct stomed{char named[3][30];char expd[3][20],bacno[3][20];float rate[3],mrp[3];int quan1[3];
	     };

stomed ttt[26]={{{"Abacavir sulphate ", "Abacavirtab ","Abacavirtonic"}, {"2010", "2012","2011"} ,{"1", "2","3"} ,{100,105,75},{30,100,80},{105,30,200} },
	      {{"Basiliximab","Basilixitab ","Basilitonic"} ,{"2010","2010","2010"} ,{"1","2","3"} ,{11,13,12},{10,10,15},{105,30,200} },
	      {{"Capozide","Capozitab","Capoztonic"} ,{"2010","2010","2010"} ,{"1","2","3"}  ,{12,13,12},{50,10,10},{105,30,50} },
	      {{"Deltacortril ","Deltacortab","Deltacortonic"} ,{"2010","2010","2010"} ,{"1","2","3"} ,{13,16,34},{60,100,40},{105,30,96} },
	      {{"Emend","Emend tab","Emendtonic"} ,{"2010","2010","2011"} ,{"1","2","3"} ,{104,127,195},{53,100,200},{105,30,300} },
	      {{"Fabrazyme","Fabraztab","Fabtonic"} ,{"2010" ,"2010","2020"} ,{"1","2","3"} ,{125,127,340},{46,100,400},{105,30,200} },
	      {{"Ganirelix ","Ganiretab","Ganiretonic"} ,{"2010" ,"2010","2030"} ,{"1","2","3"} ,{16,17,80},{49,100,90},{105,30,30} },
	      {{"Humulin S","Humulintab","Humilintonic"} ,{"2010","2010","2010"}  ,{"1" ,"2","3"} ,{14,17,20},{100,10,50},{30,40,50} },
	      {{"Indomax","Indomaxtab","Indomaxtonic"} ,{"2010","2010","2011"}  ,{"1" ,"2","3"} ,{18,17,90},{200,100,100},{105,30,60} },
	      {{"Janerin","Janerintab","Janerintonic"} ,{"2010","2010","2010"}  ,{"1","2","3"} ,{159,167,180},{70,100,90},{105,30,500} },
	      {{"Kbacavirsulphate ", "Kbacavirtab ","Kbacavirtonic"}, {"2010", "2012","2011"} ,{"1", "2","3"} ,{100,105,75},{30,100,80},{105,30,200} },
	      {{"Lasiliximab","Lasilixitab ","Lasilitonic"} ,{"2010","2010","2010"} ,{"1","2","3"} ,{11,13,12},{10,10,15},{105,30,200} },
	      {{"Mapozide","Mapozitab","Mapoztonic"} ,{"2010","2010","2010"} ,{"1","2","3"}  ,{12,13,12},{50,10,10},{105,30,50} },
	      {{"Neltacortril ","Neltacortab","Neltacortonic"} ,{"2010","2010","2010"} ,{"1","2","3"} ,{13,16,34},{60,100,40},{105,30,96} },
	      {{"Omend","Omendtab","Omendtonic"} ,{"2010","2010","2011"} ,{"1","2","3"} ,{104,127,195},{53,100,200},{105,30,300} },
	      {{"Pabrazyme","Pabraztab","Pabtonic"} ,{"2010" ,"2010","2020"} ,{"1","2","3"} ,{125,127,340},{46,100,400},{105,30,200} },
	      {{"Qanirelix ","Qaniretab","Qaniretonic"} ,{"2010" ,"2010","2030"} ,{"1","2","3"} ,{16,17,80},{49,100,90},{105,30,30} },
	      {{"Rumulin S","Rumulintab","Rumilintonic"} ,{"2010","2010","2010"}  ,{"1" ,"2","3"} ,{14,17,20},{100,10,50},{30,40,50} },
	      {{"Sndomax","Sndomaxtab","Sndomaxtonic"} ,{"2010","2010","2011"}  ,{"1" ,"2","3"} ,{18,17,90},{200,100,100},{105,30,60} },
	      {{"Tanerin","Tanerintab","Tanerintonic"} ,{"2010","2010","2010"}  ,{"1","2","3"} ,{159,167,180},{70,100,90},{105,30,500} },
	      {{"Ueltacortril ","Ueltacortab","Ueltacortonic"} ,{"2010","2010","2010"} ,{"1","2","3"} ,{13,16,34},{60,100,40},{105,30,96} },
	      {{"Vmend","Vmendtab","Vmendtonic"} ,{"2010","2010","2011"} ,{"1","2","3"} ,{104,127,195},{53,100,200},{105,30,300} },
	      {{"Wabrazyme","Wabraztab","Wabtonic"} ,{"2010" ,"2010","2020"} ,{"1","2","3"} ,{125,127,340},{46,100,400},{105,30,200} },
	      {{"Xanirelix ","Xaniretab","Xaniretonic"} ,{"2010" ,"2010","2030"} ,{"1","2","3"} ,{16,17,80},{49,100,90},{105,30,30} },
	      {{"Yumulin S","Yumulintab","Yumilintonic"} ,{"2010","2010","2010"}  ,{"1" ,"2","3"} ,{14,17,20},{100,10,50},{30,40,50} },
	      {{"Zndomax","Zndomaxtab","Zndomaxtonic"} ,{"2010","2010","2011"}  ,{"1" ,"2","3"} ,{18,17,90},{200,100,100},{105,30,60} },

	      };

void introwrite();

enum {STOCK=1,SALE,DISPLAY,TAX,EXIT};
int i=0,x=0,y=0,z,t,I=-252,ch;
char msge[5][15]={{"1. STOCK ENTRY"},{"2. SALE"},
    {"3. DISPLAY"},{"4. TAX"},{"5. EXIT"}};



void logo()
{
setcolor(RED);


rectangle(550,20,560,70);
setfillstyle(SOLID_FILL,RED);
floodfill(555,25,RED);

setcolor(RED);
rectangle(520,40,590,50);
setfillstyle(SOLID_FILL,RED);
floodfill(525,45,RED);

setcolor(RED);
setfillstyle(SOLID_FILL,RED);
floodfill(585,45,RED);
setcolor(5);
circle(555,46,20);

}



void introwrite()
{
logo();
settextstyle(4, HORIZ_DIR, 4);
setcolor(9);
outtextxy(130, 60, "CHIRST CHURCH BOYS");
settextstyle(8, HORIZ_DIR, 3);
setcolor(11);
outtextxy(230,140, "MEDICAL STORE");
settextstyle(3, HORIZ_DIR, 5);
setcolor(5);
outtextxy(190, 96, "INTRODUCTION");
settextstyle(2, HORIZ_DIR, 5);
setcolor(7);
outtextxy(100, 200, "This project is based on medical store.");
outtextxy(100, 220, "The project aims at helping shopkeeper and costomer");
outtextxy(100, 240, "The project helps the shopkeeper in maintaining the");
getch();
setcolor(0);
outtextxy(100, 200, "This project is based on medical store.");
outtextxy(100, 220, "The project aims at helping shopkeeper and costomer");
outtextxy(100, 240, "The project helps the shopkeeper in maintaining the");
setcolor(7);
outtextxy(100, 200, "record of medicines there rate,quantity,expiry date");
outtextxy(100, 220, "etc.It also helps in making the bill for costomer and");
outtextxy(100, 240, "keeping its record.");
getch();
setcolor(0);
outtextxy(100, 200, "record of medicines there rate,quantity,expiry date");
outtextxy(100, 220, "etc.It also helps in making the bill for costomer and");
outtextxy(100, 240, "keeping its record.");
setcolor(5);
outtextxy(100, 200, "We hope that it will fulfill the need of cUSstomer and");
outtextxy(100, 220, "shopkeeper.");
outtextxy(100, 240, "-----------------------------------------------------");
getch();
setcolor(0);
outtextxy(100, 200, "We hope that it will fulfill the need of costomer and");
outtextxy(100, 220, "shopkeeper.");
outtextxy(100, 240, "-----------------------------------------------------");
setcolor(6);

outtextxy(100, 220, "Thank you Thank you Thank you");
outtextxy(100, 240, "*********************************");
getch();
setcolor(0);

outtextxy(100, 220, "Thank you Thank you Thank you");
outtextxy(100, 240, "*********************************");

}

float sum=0,prof=0,gd1=0,amt2;
 char msget[30][35]={  {" Helps in"},
		      {"entering & viewing "},
		      {"the existing stock in"},
		      {"the shop."},
		      {"                   "},
		      {"Helps to make "},
		      {"the bill of constumer"},
		      {"                          "},
		      {"                            "},
		      {"                             "},
		      {"This keeps the record of bill" },
		      {"being made"},
		      {"                      "},
		      {"                      "},
		      {"                       "},
		      {"Using the total profit &"},
		      {"expenditure from the case "},
		      {"'SALE' it calculates the yearly"},
		      {" income tax of the shop."},
		      {"               "},
		      {"EXITS THE PROGRAM"},
		    };
class ps
{              public:
	       int quan,quan2;
	       float mrp,amt,rate;
	       char dat[10],nam[30],dna[20],exp[20],batch[20];
public:
	int page4();
	int ack(int,int);
	void writex(int,int),rubx(int,int),page3(),/*page2(),*/page1(),rub(),initia(int,int,int);void WAVE();
	void /*make(int,int,int),*/outline(int),/*slogo()*/outline2(int);
	char acc();
	int dat2;
	void show(int),show2(int);int check(char []),check2(int);
	float gd,vat,show3(int,float),amtd,pr(int,float);
	void box(int,int,int,int),linex(int,int,int);
	void RUBY(int,int,int,int),liney(int,int,int),cancel(),pr2(int),dum();
	void head(),CASE1();
}o;


 ps::ack(int i,int j)
 {
  strcpy(nam,ttt[i].named[j]);
	    mrp=ttt[i].mrp[j];
	    rate=ttt[i].rate[j];
	   strcpy(exp,ttt[i].expd[j]);
	   strcpy(batch,ttt[i].bacno[j]);
	   quan=ttt[i].quan1[j];
    return 0;
 }
 void kites()
	    {


	    int i,j;
	    char ch,msg[20];
	    fstream f;
	    for(i=0;i<=26;i=i+1)
	    {
	    for(j=0;j<=2;j=j+1)
	    {
	    o.ack(i,j);
	    ch=ttt[i].named[0][0];
	    sprintf(msg,"%c.dat",ch);
	    f.open(msg,ios::app);
	    f.write((char*)&o,sizeof(o));
	    f.close();
	    }
	    }
	    }
void main()
{

   kites();
   int x1=0,y1=0,row,gd=9,m=2,OUT=100,CH;char msg[20],ch1,*l="                                                                      ";;
   fstream g,f,bi;int b,n;
   struct COUNTRY country_info;float pend[10];
   country(0,&country_info);
   initgraph(&gd,&m,"");
   o.WAVE();cleardevice();
   o.page1();getch();cleardevice();
   introwrite();/*o.slogo();*/getch();cleardevice();
   o.page3();
   do
   {    initgraph(&gd,&m,"");y=o.page4();closegraph();
	switch(y-2)
	{    case STOCK:
		do
		{	clrscr();//_setcursortype(_NOCURSOR);
			textcolor(10);o.box(1,1,79,25);
			o.linex(1,79,5);o.linex(1,79,22);
			textcolor(14);gotoxy(20,3);
			cprintf("CASE 1: STOCK ENTRY ");
			textcolor(12);gotoxy(10,7);
			cprintf("1: ENTER DATA");gotoxy(10,10);
			cprintf("2: VIEW DATA");gotoxy(10,13);
			cprintf("3: EXIT");
			textcolor(15);gotoxy(5,24);
			cprintf(":ENTER YOUR CHOICE (1..3) ?");
			cin>>x1;
			switch(x1)
			{
			case 1:
			       do
			       {     ch1=o.acc();
				     sprintf(msg,"%c.dat",ch1);
				     f.open(msg,ios::app);
				     f.write((char*)&o,sizeof(o));
				     textcolor(14);gotoxy(15,23);
				     cprintf("ANY MORE RECORDS TO BE ENTERED (Y/N) :");cin>>ch1;
				     f.close();
			       }while(ch1=='y'||ch1=='Y');
			break;
			case 2:
				     clrscr();row=8;textcolor(10);
				     o.box(1,1,79,25);o.linex(1,79,5);
				     o.linex(1,79,7);o.linex(1,79,22);
				     gotoxy(35,2);textcolor(4);
				     cprintf("DEPARTMENTAL STORE");textcolor(10);
				     gotoxy(4,6);cprintf("MEDICINE");
				     gotoxy(25,6);cprintf("RATE");
				     gotoxy(35,6);cprintf("MRP.");
				     gotoxy(45,6);cprintf("QUANTITY");
				     gotoxy(60,6);cprintf("BATCH");
				     gotoxy(69,6);cprintf("EXPIRY DT.");
				     textcolor(12);gotoxy(10,23);
				     cprintf("ENTER THE ALPHABET :");cin>>ch1;
				     ch1=toupper(ch1);sprintf(msg,"%c.dat",ch1);
				     gotoxy(10,3);textcolor(14);
				     cprintf("DATA FILE :  %s",msg);
				     f.open(msg,ios :: in);textcolor(13);
				     f.read((char *)&o,sizeof(o));
				     while(!f.eof())
				     {     o.show(row);row=row+2;
					   f.read((char *)&o,sizeof(o));
				     }
				     f.close();
				     getch();
			break;
			case 3:y1=4;
			break;
			}      //SWITCH OVER
		  }while(y1==0);//DO-WHILE LOOP  OF CASE 1 :OVER
	   break;
	   case SALE:
		char kaka;
	   do
	   {	clrscr();textcolor(10);o.box(1,1,79,25);
		o.linex(1,79,5);o.linex(1,79,22);
		textcolor(14);gotoxy(20,3);_setcursortype(_SOLIDCURSOR);
		cprintf("CASE 2: SALE");
		textcolor(12);gotoxy(10,7);
		cprintf("1: ENTER DATA");gotoxy(10,10);
		cprintf("2: EXIT");
		textcolor(15);gotoxy(5,24);
		cprintf(":ENTER YOUR CHOICE (1..2) ?");
		cin>>n;
		switch(n)
		{
		case 1:
			clrscr();
			_setcursortype(_NORMALCURSOR);textcolor(14);
			o.box(1,1,79,25);
			o.linex(1,79,5);o.linex(1,79,7);
			o.linex(1,79,23);o.liney(40,5,23);
			gotoxy(40,7);cprintf("Î");
			gotoxy(35,2);textcolor(10);
			textbackground(4);cprintf("MEDICAL STORE");
			textbackground(0);textcolor(15);
			gotoxy(2,6);cprintf("SR.");
			gotoxy(6,6);cprintf("PARTICULARS");
			gotoxy(18,6);cprintf("QUAN.");
			gotoxy(25,6);cprintf("MRP");
			gotoxy(31,6);cprintf("AMT.");
			gotoxy(50,6);cprintf("NAME");
			gotoxy(43,6);cprintf("Sr.");
			gotoxy(62,6);cprintf("QUAN.");
			gotoxy(72,6);cprintf("MRP");
			textcolor(10);int s=0;
			do
			{       s=s+1;
				gotoxy(3,s+7);cprintf("%i.",s);
				gotoxy(5,24);cout<<l;
				gotoxy(10,24);cprintf("ENTER THE ALPHABET : ");
				ch1=getche();ch1=toupper(ch1);
				sprintf(msg,"%c.dat",ch1);
				o.RUBY(42,8,78,22);
				row=8;
				f.open(msg,ios::in);
				f.read((char*)&o,sizeof(o));
				while(!f.eof())
				{       o.show2(row);
					gotoxy(45,row);cprintf("%i.",(row-7));
					row=row+1;
				     f.read((char*)&o,sizeof(o));
				}
				f.close();
				gotoxy(5,24);cout<<l;
				gotoxy(10,24);cprintf("ENTER THE SR. NO. :");cin>>n;
				f.open(msg,ios::in|ios::app|ios::binary);
				b=(n-1)*sizeof(o);
				f.seekp(b,ios::beg);
				f.read((char*)&o,sizeof(o));
				sum=o.show3(s+7,sum);
				f.write((char*)&o,sizeof(o));
				f.close();
				g.open("dum.dat",ios::out);
				f.open(msg,ios::in);row=0;
				f.read((char*)&o,sizeof(o));
				while(!f.eof())
				{    if(row==(n-1));
				     else
				     {	     g.write((char*)&o,sizeof(o));
				   }
				     f.read((char*)&o,sizeof(o));
				     row=row+1;
				}
				f.close();
				g.close();
				remove(msg);
				rename("dum.dat",msg);
				gotoxy(5,24);cout<<l;

				gotoxy(10,24);cprintf("ANY MORE MEDICINES :");cin>>kaka;
				if(kaka=='n'||kaka=='N')
				{  o.dum();
				   textcolor(14);o.linex(1,40,17);
				   gotoxy(5,18);textcolor(10);cprintf("TOTAL :");
				   gotoxy(30,18);textcolor(15);cprintf("%.2f",sum);
				   gotoxy(5,19);textcolor(10);
				   cprintf("VAT (VALUE ADDED TAX) :");
				   o.vat=sum/25;
				   gotoxy(30,19);textcolor(15);cprintf("%.2f",o.vat);
				   gotoxy(5,21);textcolor(10);cprintf("GRAND TOTAL :");
				   o.gd=o.vat+sum;
				   gotoxy(30,21);textcolor(15);cprintf("%.2f",o.gd);
				   gotoxy(5,24);cout<<l;
				   gotoxy(10,24);
				   cprintf("DO YOU WANT TO PURCHASE THESE MEDICINES :");
				   cin>>ch1;

				   if(ch1=='Y'||ch1=='y')
				   {    bi.open("BILL.dat",ios::out);
					bi.write((char *)&o,sizeof(o));
					bi.close();

					getch();
					   }
					}
					}while(kaka=='Y'||kaka=='y');
					break;
		case 2:
		   break;
		  }
	      }while(n==1);
   break;
   case DISPLAY:

	o.head();
			gotoxy(2,6);cprintf("SR.NO.");
			gotoxy(17,6);cprintf("DOCTOR'S NAME");
			gotoxy(37,6);cprintf("DATE");
			gotoxy(50,6);cprintf("TOTAL +");
			gotoxy(68,6);cprintf("= GR.TOTAL");
			gotoxy(60,6);cprintf("TAX");
			bi.open("BILL.dat",ios::in);row=8;
			bi.read((char*)&o,sizeof(o));
			textcolor(13);
			while(!bi.eof())
			{       gd1=o.pr(row,gd1);row=row+2;
				bi.read((char*)&o,sizeof(o));
			}
			textcolor(14);
			gotoxy(10,23);cprintf("THE TOTAL SALE : %.2f",gd1);
			gotoxy(10,24);
			cprintf("THE TOTAL PROFIT : %.2f",::prof);
			getch();
			bi.close();

 break;
   case TAX:
	   char mth[15],yy[10],msg1[10];
	   o.head();_setcursortype(_SOLIDCURSOR);
	   gotoxy(5,23);cprintf("ENTER THE EXPIRY DATE :");
	   gotoxy(5,24);cprintf(" MONTH ::");
	   gotoxy(30,24);cprintf("YEAR ::              {for example:may  2010}");
	   gotoxy(15,24);gets(mth);gotoxy(38,24);cin>>yy;
	   sprintf(msg1,"%s-%c%c",mth,yy[2],yy[3]);
	   for(ch1='A';ch1<='C';ch1++)
	   {    sprintf(msg,"%c.dat",ch1);
		g.open("dum.dat",ios::out);
		f.open(msg,ios::in);row=8;
		f.read((char*)&o,sizeof(o));
		do
		{       t=o.check(msg1);
			if(t==0)
			{	g.write((char*)&o,sizeof(o));}
			else
			{	o.show(row++);textcolor(13);
				o.box(10,15,65,18);
				o.RUBY(11,16,64,17);
				textcolor(15);gotoxy(16,16);textcolor(10);
				cprintf("ARE YOU REALLY SURE TO DELETE THIS RECORD ?" );
				cin>>ch1;
				if(ch1=='n'||ch1=='N')
				{     g.write((char*)&o,sizeof(o));}

			}
			f.read((char*)&o,sizeof(o));
		}while(!f.eof());
		f.close();
		g.close();
		remove(msg);
		rename("dum.dat",msg);
	   }
   break;
   case EXIT: OUT=10;
   break;
   }  //main switch
}while(OUT!=10); //main do while
}//void main
void ps::head()
{        		clrscr();o.box(1,1,79,25);
			o.linex(1,79,21);o.linex(1,79,5);
			gotoxy(35,2);textbackground(4);
			textcolor(10);cprintf("MEDICAL STORE");
			 textbackground(0);
}
void ps::dum()
{       gotoxy(10,3);textcolor(12);cprintf("Dr.Name : ");
	gets(dna);dna[0]=toupper(dna[0]);
	gotoxy(20,3);cprintf("%s",dna);
	gotoxy(10,4);textcolor(12);cprintf("Date : ");
	gets(dat);gotoxy(17,4);cprintf("%s",dat);
}
float ps::pr(int y,float gd1)
{      gotoxy(35,y);cprintf("%s",dat);
       gotoxy(20,y);cprintf("%s",dna);
       gotoxy(5,y);cprintf("%i.",(y/2)-3);
       gotoxy(70,y);cprintf("%.2f",gd);
       gotoxy(50,y);cprintf("%.2f",gd-vat);
       gotoxy(60,y);cprintf("%.2f",vat);
       ::prof=(gd-vat)/10+::prof;
       gd1=gd1+gd;
       return gd1;
}
void ps::pr2(int y)
{      gotoxy(40,y);cprintf("%i",dat2);
       gotoxy(5,y);cprintf("%i.",(y/2)-3);
       gotoxy(70,y);cprintf("%.2f",amtd);
}
int ps::check(char msg[])
{    if(strcmpi(msg,exp)==0) return 1;
     else return 0;
}
int ps::check2(int mat)
{    if(dat2==mat) return 1;
     else return 0;
}
void ps::cancel()
{       textcolor(4);
	gotoxy(3,12);cprintf("C      A      N      C      E      L");
	textcolor(14);
	linex(1,40,10);linex(1,40,14);
}
void ps::RUBY(int x1,int y1,int x2,int y2)
{ int i,j;
  for(i=x1;i<=x2;i++)
  {    for(j=y1;j<=y2;j++)
	   { gotoxy(i,j);cout<<" ";
	    }
  }
}
void ps::linex(int x1,int x2,int y)
{      	for(int i=x1;i<=x2;++i)
	{   gotoxy(i,y);cprintf("Í");delay(2);
	}
	gotoxy(x1,y);cprintf("Ì");
	gotoxy(x2,y);cprintf("¹");
}
void ps::liney(int x,int y1,int y2)
{
	for(int y=y1;y<=y2;++y)
	{    gotoxy(x,y);cprintf("º");delay(2);
	}
	gotoxy(x,y1);cprintf("Ë");
	gotoxy(x,y2);cprintf("Ê");
}
void ps::box(int x1,int y1,int x2,int y2)
{	for(int i=x1;i<=x2;++i)
	{    gotoxy(i,y1);cprintf("Í");
	     gotoxy(i,y2);cprintf("Í");delay(2);
	}
	for(int y=y1;y<=y2;++y)
	{    gotoxy(x1,y);cprintf("º");
	     gotoxy(x2,y);cprintf("º");delay(2);
	}
	gotoxy(x1,y1);cprintf("É");
	gotoxy(x2,y1);cprintf("»");
	gotoxy(x2,y2);cprintf("¼");
	gotoxy(x1,y2);cprintf("È");
}
char ps::acc()
{	clrscr();head();textcolor(12);
	gotoxy(10,10);cprintf("ENTER THE NAME OF THE MEDICINE : ");gets(nam);
	gotoxy(10,12);cprintf("ENTER THE RATE : ");cin>>rate;
	gotoxy(10,14);cprintf("ENTER THE QUNATITY : ");cin>>quan;
	gotoxy(10,16);cprintf("ENTER THE BATCH NO. : ");gets(batch);
	gotoxy(10,18);cprintf("ENTER THE EXPIRY DATE : ");gets(exp);
	mrp=rate+rate/10;
	return nam[0];
}
void ps::show(int y)
{	gotoxy(4,y);cprintf("%s",nam);
	gotoxy(25,y);cprintf("%.2f",rate);
	gotoxy(35,y);cprintf("%.2f",mrp);
	gotoxy(45,y);cprintf("%i",quan);
	gotoxy(60,y);cprintf("%s",batch);
	gotoxy(70,y);cprintf("%s",exp);
}
void ps::show2(int y)
{	gotoxy(48,y);cprintf("%s",nam);
	gotoxy(72,y);cprintf("%.2f",mrp);
	gotoxy(62,y);cprintf("%i",quan);
}
float ps::show3(int y,float sum)
{   	gotoxy(4,y);cprintf("%s",nam);
	gotoxy(25,y);cprintf("%.2f",mrp);
	gotoxy(18,y);cin>>quan2;
	amt=quan2*mrp;
	gotoxy(31,y);cprintf("%.2f",amt);
	sum=sum+amt;
	quan=quan-quan2;
	return sum;
}
void ps::WAVE()
{  int i,j,r; char msg[6][10]={{"CHRIST"},{"CHURCH"},{"MEDICAL"},{"STORE"},{" "},{"+"}};
   int k=-1;
     settextstyle(7,0,20);
   for(i=20;i<=630;++i)
{    r=50;
     y=r*tan(2*(i+45)*3.14/180)+250;
     if((i%90)==0)k=k+1;
     setcolor(10+k);
     outtextxy(y,150,msg[k]);
     delay(7);
     setcolor(0);
     outtextxy(y,150,msg[k]);
   }
}
void ps::outline2(int x)
{	setcolor(x);
	setfillstyle(1,x);
	rectangle(1,1,635,480);
	floodfill(2,2,x);
	setcolor(0);
	setfillstyle(1,0);
	rectangle(6,6,628,472);
	floodfill(7,7,0);
	setcolor(x);
	line(5,95,628,95);
}
void ps::initia(int x,int y,int z)
{  setcolor(57);outtextxy(x,y,msge[0]);
   setcolor(63);outtextxy(x,y+80,msge[2]);
   setcolor(62);outtextxy(x,y+160,msge[4]);
   setcolor(60);outtextxy(z,y+40,msge[1]);
   setcolor(59);outtextxy(z,y+120,msge[3]);
   setcolor(58);outtextxy(z,y+200,msge[5]);
}
int ps::page4()
{   t=180;y=1;
    outline2(13);
    setcolor(10);settextstyle(4,0,5);
    outtextxy(150,20,"MEDICAL STORE");
   logo();
    setcolor(13);line(2,430,637,430);
    settextstyle(7,0,3);setcolor(9);

    do
    {   setcolor(14);settextstyle(1,0,4);initia(100,180,400);
	delay(100);
	setcolor(4);setfillstyle(1,4);
	y=(t-60)/40;
	if((y%2)==0)
	{        rectangle(380,t,580,t+40);floodfill(381,t+1,4);
		 setcolor(14);settextstyle(7,0,4);
		 outtextxy(400,t,msge[y-3]);
	}
	else
	{        rectangle(80,t,400,t+40);floodfill(81,t+1,4);
		 setcolor(14);settextstyle(7,0,4);
		 outtextxy(100,t,msge[y-3]);
	}
	nosound();ch=getch();
	setfillstyle(1,0);setcolor(0);
	if((y%2)==0)
	    { rectangle(380,t,580,t+40);floodfill(381,t+1,0);}
	else
	    { rectangle(80,t,400,t+40);floodfill(81,t+1,0); }
	if(ch==50||ch==80||ch==75)
	{  t=t+40 ;
	   if(t>350)t=180;
	}
	if(ch==56||ch==72||ch==77)
	{  t=t-40;
	   if(t<180)t=350;
	}
    }while(ch!=13);
    return y;
}
void ps::page3()
{   t=200; outline2(14);char chi;
	   setcolor(10);line(1,160,630,160);line(310,160,310,475);
	   setcolor(4);settextstyle(5,0,5);
	   outtextxy(150,100,"CHRIST CHURCH");
	   setcolor(10);settextstyle(4,0,6);
	   outtextxy(90,30,"MEDICAL STORE");
	   logo();int k=0;
      do
      {       settextstyle (7,0,2);setcolor(12);
	      for(int i=0;i<=10;++i)  outtextxy(40,190+40*i,msge[i]);
	      writex(k,60);
	      chi=getch();
	      rubx(k,60);
	   if(chi==50||chi==80||chi==75)
	    {  k=k+1 ;
	      if(k>4)k=0;
	   }
	   if(chi==56||chi==72||chi==77)
	   {  k=k-1;
	      if(k<0)k=4;
	   }
    }while(chi!=13);
 }
void ps::writex(int k,int y)
{	setcolor(14);setfillstyle(1,14);int t=200+k*40;
	rectangle(y-40,t-25,y+200,t+25);
	floodfill(y-10,t+10,14);
	setcolor(1);settextstyle(7,0,3);
	outtextxy(y-40,t-10,msge[k]);
	if(y==60)
	{
	setcolor(8);settextstyle(7,0,2);
	int u=k*5;
	for(int j=180;u<=(k*5)+4;j=j+40,u=u+1) outtextxy(315,j,msget[u]);
	}
}
void ps::rubx(int k,int y)
{	setcolor(0);setfillstyle(1,0);int t=200+k*40;
	rectangle(y-40,t-25,y+200,t+25);
	floodfill(y-10,t+10,0);
	setcolor(4);settextstyle(7,0,2);
	outtextxy(y-20,t-10,msge[k]);
	if(y==60)
	{
	setcolor(0);int u=k*5;
	for(int j=180;u<=(k*5)+4;j=j+40,u=u+1) outtextxy(315,j,msget[u]);
	}
}
void ps::page1()
{ outline(9);setcolor(9);line(2,425,635,425);
  settextstyle(7,0,4);setcolor(GREEN);
  outtextxy(150,10,"CHRIST CHURCH BOYS' ");
  outtextxy(100,50,"SENIOR SECONDARY SCHOOL");
  setcolor(WHITE);
  outtextxy(200,100,"MEDICAL STORE");

  settextstyle(8,0,4);setcolor(15);
  outtextxy(350,240,"PRESENTED BY:-");
  outtextxy(30,200,"CREDITS :-");
  settextstyle(7,0,2);setcolor(10);
  outtextxy(50,435,"PRESS ANY KEY TO CONTINUE");
  settextstyle(6,0,3);
  setcolor(4);outtextxy(50,250,"Mr.A.Y.Majumdar");

  setcolor(11);settextstyle(6,0,3);outtextxy(380,280,"ANMOL SAXENA");

     logo();
     logo();
}
void ps::outline(int x)
{	setcolor(x);
	setfillstyle(1,x);
	rectangle(0,0,640,100);
	floodfill(2,2,x);
	rectangle(0,180,640,480);
	floodfill(2,182,x);
	line(1,430,650,430);
	setfillstyle(1,BLACK);
	setcolor(BLACK);
	rectangle(6,185,633,470);
	floodfill(7,189,BLACK);
}
