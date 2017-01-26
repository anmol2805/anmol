#include <iostream.h>
#include <conio.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <dos.h>
#include <fstream.h>
#include <graphics.h>
#include <string.h>
class bank { private :
		float ac;char na[20],par[10],add[70];float bal;float cr,db;
	     public :
		int acc(int);
		show(int);
		print(int);
		int credit();
		int debit();
		int send(int x)
		 { if(ac==x)
		   return 1;
		   else
		   return 0;
		 }
		int rt()
		 { return bal;}

		int ret()
		 {
		  return ac;
		 }


	      };
bank::acc(int y)
	{ char a;
		   ac=y;
		   for(int i =3 ;i<=77;i++)
		   { gotoxy(i,8);cout<<"Í";
		     gotoxy(i,10);cout<<"Í";
		     gotoxy(i,12);cout<<"Í";
		     gotoxy(i,14);cout<<"Í";
		     gotoxy(i,16);cout<<"Í";
		     gotoxy(i,18);cout<<"Í";
		   }
		   gotoxy(5,9);cout<<"Your Account no. is:º ";cout<<ac;
		   gotoxy(5,11);cout<<"Enter your Name:º ";gets(na);
		   gotoxy(5,13);cout<<"Enter Your Address:º ";gets(add);
		   gotoxy(5,15);cout<<"Enter Opening Balance:º Rs";cin>>bal;
		   gotoxy(5,17);cout<<"Enter The Mode of Transaction (c/q) Type 'c' for cash, 'q' for cheque:º ";cin>>a;
		   switch(a)
		     { case 'c':
				 strcpy(par,"cash");
				 break;
		       case 'q':
				 strcpy(par,"cheque");
				 break;
		     }
		   cr=0;db=0;
		   return 0;
	}
bank::show(int row)
	{  gotoxy(20,11);cout<<"AC NO.";
	   gotoxy(40,11);cout<<"NAME.";
	   gotoxy(60,11);cout<<"BALANCE.";
	   for(int i=20;i<=75;i++)
	   {textcolor(LIGHTMAGENTA);
	    gotoxy(i,10);cprintf("*");
	    gotoxy(i,12);cprintf("*");
	   }
	   textcolor(WHITE);
	   gotoxy(20,row);cout<<ac;
	   gotoxy(40,row);cout<<na;
	   gotoxy(60,row);cout<<"Rs "<<bal<<" only";
	   for(int j=20;j<=75;j++)
	   {textcolor(LIGHTMAGENTA); gotoxy(j,18);cprintf("*");}
	   for(int k=13;k<=17;k++)
	   { textcolor(BLUE);
	     gotoxy(25,k);cprintf("#");
	     gotoxy(55,k);cprintf("#");
	   }
	     textcolor(WHITE);
	   return 0;
	}
bank::print(int row)
		{
		   gotoxy(22,10);cout<<"NAME:";
		   gotoxy(10,11);cout<<"ADDRESS:";
		   gotoxy(12,13);cout<<"PARTICULARS";
		   gotoxy(30,13);cout<<"CREDIT";
		   gotoxy(40,13);cout<<"DEBIT";
		   gotoxy(50,13);cout<<"BALANCE";
		   for(int i=10;i<=75;i++)
		   {textcolor(LIGHTMAGENTA);
		    gotoxy(i,12);cprintf("*");
		    gotoxy(i,14);cprintf("*");
		   }
		   textcolor(WHITE);
		   gotoxy(27,10);cout<<na;
		   gotoxy(18,11);cout<<add;
		   gotoxy(12,row);cout<<"by "<<par;
		   gotoxy(30,row);cout<<cr;
		   gotoxy(40,row);cout<<db;
		   gotoxy(50,row);cout<<"Rs "<<bal<<" only";
		   for(int k=12;k<=row;k++)
		   { textcolor(BLUE);
		     gotoxy(25,k);cprintf("#");
		     gotoxy(38,k);cprintf("#");
		     gotoxy(48,k);cprintf("#");

		   }
		     textcolor(WHITE);
		   return 0;
		}
bank::credit()
	{ char a;
	  for(int i =3 ;i<=77;i++)
	   {
	     gotoxy(i,10);cout<<"Í";
	     gotoxy(i,12);cout<<"Í";
	     gotoxy(i,15);cout<<"Í";
	   }
	  gotoxy(15,11);cout<<"Enter the amount to be credited:º ";cin>>cr;
	  gotoxy(10,13);cout<<"Enter the mode of crediting:(c/q/f): ";
	  gotoxy(5,14);cout<<"Type 'c' for cash, 'q' for cheque, 'f' for funds:º ";cin>>a;
	   switch(a)
		     { case 'c':
				 strcpy(par,"cash");
				 break;
		       case 'q':
				 strcpy(par,"cheque");
				 break;
		       case 'f':
				 strcpy(par,"funds");
				 break;

		     }
		  bal=bal+cr;db=0;
		  return 0;
	}
bank::debit()
		{ char a;
		  for(int i =3 ;i<=77;i++)
		   {
		     gotoxy(i,10);cout<<"Í";
		     gotoxy(i,12);cout<<"Í";
		     gotoxy(i,15);cout<<"Í";

		   }
		  gotoxy(15,11);cout<<"Enter the amount to be debited:º ";cin>>db;
		  if(db>bal)
		  {gotoxy(15,13);
		   cout<<"transaction not possible";
		   cr=0;
		  }
		  else
		  { bal=bal-db;cr=0;
		    gotoxy(10,13);cout<<"Enter the mode of debiting:(c/q/a/f): ";
		    gotoxy(5,14);cout<<"Type 'c' for cash, 'q' for cheque, 'a' for atm/online, 'f' for funds:º ";cin>>a;
		    switch(a)
		     { case 'c':
				 strcpy(par,"cash");
				 break;
		       case 'q':
				 strcpy(par,"cheque");
				 break;
		       case 'a':
				 strcpy(par,"atm/online");
				 break;
		       case 'f':
				 strcpy(par,"funds");
				 break;

		     }
		   }

		  return 0;
		}
void main()
{ clrscr();
  textmode(C80);
  bank o;fstream b,y,z;int acno,q=15;char ch1;
  int gd=9,gm=2;
  initgraph(&gd,&gm,"");

  int xmax, ymax;

  setcolor(WHITE);
  rectangle(10,10,630,470);
  floodfill(20,20,getmaxcolor());
  setcolor(2);
  rectangle(10,10,630,470);
  rectangle(11,11,630,470);
  rectangle(12,12,628,468);rectangle(13,13,629,469);rectangle(14,14,627,467);
  int poly1[10];
  poly1[0]=220;poly1[1]=80;poly1[2]=420;poly1[3]=80;poly1[4]=420;
  poly1[5]=160;poly1[6]=220;poly1[7]=160;poly1[8]=poly1[0];poly1[9]=poly1[1];
  setfillstyle(6,2);fillpoly(5,poly1);
  rectangle(240,160,250,200);rectangle(240,230,250,280);rectangle(240,310,250,340);
  rectangle(400,160,390,200);rectangle(400,230,390,280);rectangle(400,310,390,340);
  rectangle(230,200,410,230);rectangle(230,280,410,310);
  int poly[8];
  poly[0]=390;poly[1]=230;poly[2]=280;poly[3]=280;
  poly[4]=250;poly[5]=280;poly[6]=360;poly[7]=230;
  fillpoly(4,poly);setcolor(2);settextstyle(7,0,1);
  outtextxy(233,205,"ARBOR SCIENTIAE");outtextxy(255,285,"ARBOR VITAE");
  setcolor(4);
  settextstyle(2,0,7);
  outtextxy(150,355,"ARBOR SCIENTIAE - ARBOR VITAE");
  outtextxy(130,385,"(TREE OF KNOWLEDGE - TREE OF LIFE)");
  settextstyle(4,0,2);
  outtextxy(40,35,"CHRIST CHURCH BOYS' SENIOR SECONDARY SCHOOL");
  getch();
  cleardevice();

  setbkcolor(BLACK);
  sound(20);
  for(int i=200;i>=10;i--)
  {
  setcolor(WHITE);
  settextstyle(4,0,4);
  outtextxy(125,i,"CHRIST CHURCH BOYS'");
  delay(1);
  setcolor(BLACK);
  settextstyle(4,0,4);
  outtextxy(125,i,"CHRIST CHURCH BOYS'");
  }

  setcolor(WHITE);
  settextstyle(4,0,4);
  outtextxy(125,10,"CHRIST CHURCH BOYS'");

  for(int a=200;a>=60;a--)
  {
  setcolor(WHITE);
  settextstyle(4,0,4);
  outtextxy(70,a,"SENIOR SECONDARY SCHOOL");
  delay(1);
  setcolor(BLACK);
  settextstyle(4,0,4);
  outtextxy(70,a,"SENIOR SECONDARY SCHOOL");
  }
  setcolor(WHITE);
  settextstyle(4,0,4);
  outtextxy(70,60,"SENIOR SECONDARY SCHOOL");
  setcolor(RED);
  settextstyle(1,0,3);
  outtextxy(200,125,"COMPUTER PROJECT");
  outtextxy(100,160,"BY -");

  for(int r=1;r<=400;r++)
  {
  setcolor(BLUE);
  settextstyle(1,0,3);
  outtextxy(r,185,"ANMOL SAXENA");
  outtextxy(r,215,"CLASS XII b");
  outtextxy(r,245,"ROLL NO. 3");
  delay(2);
  setcolor(BLACK);
  settextstyle(1,0,3);
  outtextxy(r,185,"ANMOL SAXENA");
  outtextxy(r,215,"CLASS XII b");
  outtextxy(r,245,"ROLL NO. 3");
  }

  setcolor(BLUE);
  settextstyle(1,0,3);
  outtextxy(400,185,"ANMOL SAXENA");
  outtextxy(400,215,"CLASS XII b");
  outtextxy(400,245,"ROLL NO. 3");
  for(int p=1;p<=100;p++)
  {
  setcolor(YELLOW);
  settextstyle(1,0,3);
  outtextxy(p,185,"ABHISHEK JAIN");
  outtextxy(p,215,"CLASS XII b");
  outtextxy(p,245,"ROLL NO. 2");
  delay(2);
  setcolor(BLACK);
  settextstyle(1,0,3);
  outtextxy(p,185,"ABHISHEK JAIN");
  outtextxy(p,215,"CLASS XII b");
  outtextxy(p,245,"ROLL NO. 2");


  }

  setcolor(YELLOW);
  settextstyle(1,0,3);
  outtextxy(100,185,"ABHISHEK JAIN");
  outtextxy(100,215,"CLASS XII b");
  outtextxy(100,245,"ROLL NO. 2");
  delay(1100);
  //settextstyle(1,0,3);
  //setbkcolor(6);
      delay(1100);
      nosound();

  for(int qq=1;qq<=175;qq++)
  {
  setcolor(RED);
  settextstyle(1,0,3);
  outtextxy(qq,400,"UNDER :- ");
  delay(5);
  setcolor(BLACK);
  settextstyle(1,0,3);
  outtextxy(qq,400,"UNDER :- ");
  }

  setcolor(RED);
  settextstyle(1,0,3);
  outtextxy(175,400,"UNDER :- ");
  for(int s=600;s>=300;s--)
  {
  setcolor(RED);
  settextstyle(1,0,3);
  outtextxy(s,400,"MR.A.Y.MUJUMDAR");
  delay(5);
  setcolor(BLACK);
  settextstyle(1,0,3);
  outtextxy(s,400,"MR.A.Y.MUJUMDAR");
  }
  setcolor(RED);
  settextstyle(1,0,3);
  outtextxy(300,400,"MR.A.Y.MUJUMDAR");
  setcolor(WHITE);
  settextstyle(14,0,2);
  outtextxy(200,450,"Press ENTER to Continue...");
  getch();
  cleardevice();
  nosound();
  setcolor(WHITE);
  settextstyle(3,0,4);
  outtextxy(200,30,"ACKNOWLEDGEMENT");
  settextstyle(14,0,4);
  outtextxy(30,90,"First we would like to thank our teacher MR.A.Y.MUJUMDAR for giving us an");
  delay(75);
  outtextxy(30,110,"oppurtunity to do such an interesting project and giving us the trust");
  delay(75);
  outtextxy(30,130,"to manage the project by ourselves.During the project we had to change");
  delay(75);
  outtextxy(30,150,"our time planningas we encountered some problems which eventually led us");
  delay(75);
  outtextxy(30,170,"to its solution.Ofcourse this meant a lot of hardwork but we learnt a lot");
  delay(75);
  outtextxy(30,190,"from it.During this project we enhanced our computer knowledge as we ");
  delay(75);
  outtextxy(30,210,"developed an entire concept.Finally,we would also like to thanks our ");
  delay(75);
  outtextxy(30,230,"friends who shared their knowledge and helped us a bit.");
  setcolor(WHITE);
  settextstyle(14,0,2);
  outtextxy(200,450,"Press ENTER to Continue...");
  getch();
  cleardevice();
  nosound();
  setcolor(WHITE);
  settextstyle(3,0,4);
  outtextxy(200,30,"PREFACE");
  settextstyle(14,0,4);
  outtextxy(30,90,"This is the project report on BANKING SYSTEM for our board exams 2015");
  delay(75);
  outtextxy(30,110,"It includes some contribution of Filing System as well as Graphics ");
  delay(75);
  outtextxy(30,130,"taught by our mentors.This system helps us in Creation of Account,  ");
  delay(75);
  outtextxy(30,150,"as well as one can Read Account information of particular person,");
  delay(75);
  outtextxy(30,170,"one's account can be credited as well as debited as per user's choice");
  delay(75);
  outtextxy(30,190,"It also consists of the most important feature of a bank i.e. the PASSBOOK");
  delay(75);
  outtextxy(30,210,"A customer can read as well as get his/her passbook updated. ");
  delay(75);
  outtextxy(30,230,"Hope this project report live upto your expectations.");
  setcolor(WHITE);
  settextstyle(14,0,2);
  outtextxy(200,450,"Press ENTER to Continue...");
  getch();
  cleardevice();
  nosound();
  setbkcolor(BLACK);
  for(int ii=-10;ii<=70;ii++)
  {
   sound(20);
   setcolor(ii);
   settextstyle(4,0,5);
   outtextxy(i,200,"Project C++ (2014-2015)");
   delay(50);
   setcolor(1);
   settextstyle(4,0,5);
   outtextxy(i,200,"Project C++ (2014-2015)");
   nosound();
  }
  cleardevice();
	for(int iii=190;iii<=518;iii++)
	{
	setcolor(7);
	rectangle(190,206,iii+1,234);
	delay(20);
	setcolor(iii);
	settextstyle(8,0,5);
	outtextxy(260,60,"Loading...");
	delay(20);
	sound(iii);
	delay(20);
	nosound();
	}

  cleardevice();
  textmode(C80);textcolor(WHITE);
do
{
 clrscr();
 char item[6][20] = {  {"CREATE YOUR ACCOUNT"},
		       {"ACCOUNT INFO"},
		       {"CREDIT"},
		       {"DEBIT"},
		       {"PASSBOOK"},
		       {"EXIT THE PROGRAM"},

		    };
   gotoxy(1,1);cout<<"É";   // 201
   gotoxy(1,25);cout<<"È";   //200
   gotoxy(79,1);cout<<"»";   // 187
   gotoxy(79,25);cout<<"¼";   // 188
   for(int i =2 ;i<=78;i++)
   { gotoxy(i,1);cout<<"Í";   //205
     gotoxy(i,25);cout<<"Í";
   }
   for(i =2 ;i<=24;i++)
   { gotoxy(1,i);cout<<"º";   //186
     gotoxy(79,i);cout<<"º";  // 186
   }
   // left block
   gotoxy(25,12);cout<<"É";   // 201
   gotoxy(25,24);cout<<"È";   //200
   gotoxy(57,12);cout<<"»";   // 187
   gotoxy(57,24);cout<<"¼";   // 188
   for(i =26 ;i<=56;i++)
   { gotoxy(i,12);cout<<"Í";   //205
     gotoxy(i,24);cout<<"Í";
   }
   for(i =13 ;i<=23;i++)
   { gotoxy(25,i);cout<<"º";   //186
     gotoxy(57,i);cout<<"º";  // 186
   }
   textcolor(GREEN+BLINK);
   gotoxy(35,4);cprintf("èèèèèèèèèèèèèèèèèè");
   textcolor(YELLOW);
   gotoxy(35,5);cprintf("CHRIST CHURCH BANK");
   textcolor(CYAN+BLINK);
   gotoxy(35,6);cprintf("çççççççççççççççççç");
   textcolor(RED+BLINK);
   gotoxy(33,5);cprintf("ë");
   textcolor(RED+BLINK);
   gotoxy(54,5);cprintf("ë");
   textmode(C80);
   textcolor(WHITE);
   int r = 15;
		 for(i=0; i<=5; i++)
		{  gotoxy(27,r);cout<<r-14<<"-> ";
		   gotoxy(32,r);
		   cprintf(item[i]);
		   r =r +1;
		}
		r=15;gotoxy(32,r);
		textbackground(4);cprintf(item[0]);
		char ch;
		do
		{
		 ch = getch();

		 switch(ch)
		 {  case 72 :if(r<=15)                    //56
			     { gotoxy(32,15);
			       textbackground(0);
			       cprintf(item[0]);


			       r=20;gotoxy(32,r);
			       textbackground(4);
			       cprintf(item[5]);



			     }
			    else
			     {  gotoxy(32,r);
				textbackground(0);
				cprintf(item[r-15]);


				r=r-1;gotoxy(32,r);
				textbackground(4);
				cprintf(item[r-15]);

			      }
			     break;
		   case 80 :if(r>=20)                //50
			    { gotoxy(32,20);
			      textbackground(0);
			      cprintf(item[5]);

			      r=15;gotoxy(32,r);
			      textbackground(4);
			      cprintf(item[0]);


			    }
			    else
			    {  gotoxy(32,r);
			       textbackground(0);
			       cprintf(item[r-15]);

			       r=r+1;gotoxy(32,r);
			       textbackground(4);
			       cprintf(item[r-15]);


			    }
			    break;
		}
		}while(ch !=13);
		textbackground(0);textcolor(7);
		r=r-14;

		 switch(r)
		 { case 1 :  clrscr();
			     gotoxy(1,1);cout<<"É";   // 201
			     gotoxy(1,25);cout<<"È";   //200
			     gotoxy(79,1);cout<<"»";   // 187
			     gotoxy(79,25);cout<<"¼";   // 188
				for(int i =2 ;i<=78;i++)
				{ gotoxy(i,1);cout<<"Í";   //205
				  gotoxy(i,25);cout<<"Í";
				}
				for(i =2 ;i<=24;i++)
				{ gotoxy(1,i);cout<<"º";   //186
				  gotoxy(79,i);cout<<"º";  // 186
				}
			      textcolor(GREEN+BLINK);
			      gotoxy(35,4);cprintf("èèèèèèèèèèèèèèèèèè");
			      textcolor(YELLOW);
			      gotoxy(35,5);cprintf("CHRIST CHURCH BANK");
			      textcolor(CYAN+BLINK);
			      gotoxy(35,6);cprintf("çççççççççççççççççç");
			      textcolor(RED+BLINK);
			      gotoxy(33,5);cprintf("ë");
			      textcolor(RED+BLINK);
			      gotoxy(54,5);cprintf("ë");
			      textmode(C80);
			      textcolor(WHITE);
			      char ch2[3];
			      y.open("bank.dat",ios::in);
			      y.read((char*)&o,sizeof(o));
			      if(!y)
			       {textcolor(LIGHTMAGENTA);
				gotoxy(5,7);cprintf("Congratulations! You Are The First Person to Join our Bank\n");
				textcolor(WHITE);
				y.close();
				acno=101;
				y.open("bank.dat",ios::out);
				itoa(acno,ch2,10);
				strcat(ch2,".dat");
				b.open(ch2,ios::out);
				o.acc(acno);
				y.write((char*)&o,sizeof(o));
				b.write((char*)&o,sizeof(o));
				y.close();
				b.close();
			       }
			      else
			       {
				 while(!y.eof())
				    { y.read((char*)&o,sizeof(o));  }
				 y.close();
				 int x=o.ret();
				 x=x+1;
				 y.open("bank.dat",ios::app);
				 itoa(x,ch2,10);
				 strcat(ch2,".dat");
				 b.open(ch2,ios::app);
				 o.acc(x);
				 y.write((char*)&o,sizeof(o));
				 b.write((char*)&o,sizeof(o));
				 y.close();
				 b.close();
			       }

			     break;
		   case 2 :  clrscr();
			     gotoxy(1,1);cout<<"É";   // 201
			     gotoxy(1,25);cout<<"È";   //200
			     gotoxy(79,1);cout<<"»";   // 187
			     gotoxy(79,25);cout<<"¼";   // 188
				for(int j =2 ;j<=78;j++)
				{ gotoxy(j,1);cout<<"Í";   //205
				  gotoxy(j,25);cout<<"Í";
				}
				for(j =2 ;j<=24;j++)
				{ gotoxy(1,j);cout<<"º";   //186
				  gotoxy(79,j);cout<<"º";  // 186
				}
			      textcolor(GREEN+BLINK);
			      gotoxy(35,4);cprintf("èèèèèèèèèèèèèèèèèè");
			      textcolor(YELLOW);
			      gotoxy(35,5);cprintf("CHRIST CHURCH BANK");
			      textcolor(CYAN+BLINK);
			      gotoxy(35,6);cprintf("çççççççççççççççççç");
			      textcolor(RED+BLINK);
			      gotoxy(33,5);cprintf("ë");
			      textcolor(RED+BLINK);
			      gotoxy(54,5);cprintf("ë");
			      textmode(C80);
			      textcolor(MAGENTA+BLINK);

			     gotoxy(20,7);cprintf("ACCOUNT INFO");
			     textcolor(WHITE);
			     int n;q=15;
			     y.open("bank.dat",ios::in);
			     gotoxy(20,9);cout<<"Enter Your Account No.";cin>>n;
			     y.read((char*)&o,sizeof(o));
			     while(!y.eof())
			     {int x=o.send(n);
			      if(x==1)
			       {o.show(q);getchar();break;}

				y.read((char*)&o,sizeof(o));
			     }
			     y.close();
			     break;
		   case 3 :  clrscr();
			     gotoxy(1,1);cout<<"É";   // 201
			     gotoxy(1,25);cout<<"È";   //200
			     gotoxy(79,1);cout<<"»";   // 187
			     gotoxy(79,25);cout<<"¼";   // 188
				for(int k =2 ;k<=78;k++)
				{ gotoxy(k,1);cout<<"Í";   //205
				  gotoxy(k,25);cout<<"Í";
				}
				for(k =2 ;k<=24;k++)
				{ gotoxy(1,k);cout<<"º";   //186
				  gotoxy(79,k);cout<<"º";  // 186
				}
			     textcolor(GREEN+BLINK);
			      gotoxy(35,4);cprintf("èèèèèèèèèèèèèèèèèè");
			      textcolor(YELLOW);
			      gotoxy(35,5);cprintf("CHRIST CHURCH BANK");
			      textcolor(CYAN+BLINK);
			      gotoxy(35,6);cprintf("çççççççççççççççççç");
			      textcolor(RED+BLINK);
			      gotoxy(33,5);cprintf("ë");
			      textcolor(RED+BLINK);
			      gotoxy(54,5);cprintf("ë");
			      textmode(C80);
			      textcolor(GREEN+BLINK);
			     gotoxy(20,7);cprintf("CREDITTING");
			     textcolor(WHITE);
			     y.open("bank.dat",ios::in);
			     z.open("pssbk.dat",ios::out);
			     gotoxy(20,9);cout<<"Enter Your Account No.";cin>>n;
			     itoa(n,ch2,10);
			     strcat(ch2,".dat");
			     b.open(ch2,ios::app);
			     y.read((char*)&o,sizeof(o));
			     while(!y.eof())
			     {int x=o.send(n);
			      if(x==1)
			      { o.credit();
				z.write((char*)&o,sizeof(o));
				b.write((char*)&o,sizeof(o));
			      }

			       y.read((char*)&o,sizeof(o));
			     }
			      z.close();
			      y.close();
			      b.close();
			      remove("bank.dat");
			      rename("pssbk.dat","bank.dat");
			      break;
		   case 4 :  clrscr();
			     gotoxy(1,1);cout<<"É";   // 201
			     gotoxy(1,25);cout<<"È";   //200
			     gotoxy(79,1);cout<<"»";   // 187
			     gotoxy(79,25);cout<<"¼";   // 188
				for(int l =2 ;l<=78;l++)
				{ gotoxy(l,1);cout<<"Í";   //205
				  gotoxy(l,25);cout<<"Í";
				}
				for(l =2 ;l<=24;l++)
				{ gotoxy(1,l);cout<<"º";   				  gotoxy(79,l);cout<<"º";  // 186
				}
			     textcolor(GREEN+BLINK);
			      gotoxy(35,4);cprintf("èèèèèèèèèèèèèèèèèè");
			      textcolor(YELLOW);
			      gotoxy(35,5);cprintf("CHRIST CHURCH BANK");
			      textcolor(CYAN+BLINK);
			      gotoxy(35,6);cprintf("çççççççççççççççççç");
			      textcolor(RED+BLINK);
			      gotoxy(33,5);cprintf("ë");
			      textcolor(RED+BLINK);
			      gotoxy(54,5);cprintf("ë");
			      textmode(C80);
			      textcolor(RED+BLINK);


			     gotoxy(20,7);cprintf("DEBITTING");
			     textcolor(WHITE);
			     y.open("bank.dat",ios::in);
			     z.open("pssbk.dat",ios::out);
			     gotoxy(20,9);cout<<"Enter Your Account No.";cin>>n;
			     itoa(n,ch2,10);
			     strcat(ch2,".dat");
			     b.open(ch2,ios::app);
			     y.read((char*)&o,sizeof(o));
			     while(!y.eof())
			     {int x=o.send(n);
			      if(x==1)
			      { o.debit();
				z.write((char*)&o,sizeof(o));
				b.write((char*)&o,sizeof(o));
			      }
				y.read((char*)&o,sizeof(o));
			     }
			      z.close();
			      y.close();
			      b.close();
			      remove("bank.dat");
			      rename("pssbk.dat","bank.dat");
			      break;
		   case 5 :  clrscr();
			     gotoxy(1,1);cout<<"É";   // 201
			     gotoxy(1,25);cout<<"È";   //200
			     gotoxy(79,1);cout<<"»";   // 187
			     gotoxy(79,25);cout<<"¼";   // 188
				for(int m =2 ;m<=78;m++)
				{ gotoxy(m,1);cout<<"Í";   //205
				  gotoxy(m,25);cout<<"Í";
				}
				for(m =2 ;m<=24;m++)
				{ gotoxy(1,m);cout<<"º";   //186
				  gotoxy(79,m);cout<<"º";  // 186
				}
   // left block
			     textcolor(GREEN+BLINK);
			      gotoxy(35,4);cprintf("èèèèèèèèèèèèèèèèèè");
			      textcolor(YELLOW);
			      gotoxy(35,5);cprintf("CHRIST CHURCH BANK");
			      textcolor(CYAN+BLINK);
			      gotoxy(35,6);cprintf("çççççççççççççççççç");
			      textcolor(RED+BLINK);
			      gotoxy(33,5);cprintf("ë");
			      textcolor(RED+BLINK);
			      gotoxy(54,5);cprintf("ë");
			      textmode(C80);
			      textcolor(LIGHTBLUE+BLINK);

			     gotoxy(20,7);cprintf("PASSBOOK ENTERIES");
			     textcolor(RED);
			     gotoxy(20,8);cprintf("*****************");
			     textcolor(WHITE);
			     int s=15;
			     y.open("bank.dat",ios::in);
			     gotoxy(20,9);cout<<"Enter Your Account No.";cin>>n;
			     itoa(n,ch2,10);
			     strcat(ch2,".dat");
			     b.open(ch2,ios::in);
			     y.read((char*)&o,sizeof(o));
			     while(!y.eof())
			     {int x=o.send(n);
			      if(x==1)
			      {
				b.read((char*)&o,sizeof(o));
				while(!b.eof())
				 {  o.print(s);
				    b.read((char*)&o,sizeof(o));
				    s++;
				 }
			      }

			       y.read((char*)&o,sizeof(o));
			     }
			     y.close();
			     b.close();

			     break;
		   case 6 : clrscr();
			    textmode(C40);
			    textcolor(BROWN);
			    gotoxy(6,12);
			    cprintf("THANK YOU FOR USING THE PROGRAM");
			    getchar();
			    exit(0);

	       } textcolor(BROWN);gotoxy(20,24);cprintf("any more options please(y/n)");cin>>ch1;


 }while(ch1!='n');
}