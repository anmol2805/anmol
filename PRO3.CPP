
#include <graphics.h>
#include <iostream.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <dos.h>
#include <conio.h>
int tot;
char moo[2];
    void main()
	{
	  int gd=9,gm=1;
		void intro();
	   void preface();
	   void mainmenu();
	   initgraph(&gd, &gm, "");
     intro();
	   preface();
    
	  mainmenu();



	closegraph();
     }

     void intro()

    {
	 int r,c,gd=9,gm=2;
       initgraph(&gd, &gm, "");
	   settextstyle(4,0,2);

       setcolor(YELLOW);
      outtextxy(280,225,"WELCOME");
	 delay(3000);
       cleardevice();


       settextstyle(4,0,2);
       setbkcolor(YELLOW);
	for (c=0;c<=30;c++)
 {     setcolor(RED);
      outtextxy(c,30,"CHRIST CHURCH BOYS' SENIOR SECONDARY SCHOOL");
	 delay(2);

       setcolor(BLACK);
	outtextxy(c,30,"CHRIST CHURCH BOYS' SENIOR SECONDARY SCHOOL");
       }
	 setcolor(RED);
      outtextxy(c,30,"CHRIST CHURCH BOYS' SENIOR SECONDARY SCHOOL");

	for (c=0;c<=180;c++)
	{   settextstyle(7,0,2);
       setcolor(5);
	 outtextxy(c,100,"CCB PRESENTS ");
	  outtextxy(c-30,140,"A PROJECT REPORT ON");
	 setcolor(YELLOW);
	 outtextxy(c,100,"CCB PRESENTS ");
      outtextxy(c-30,140,"A PROJECT REPORT ON");
      }
      setcolor(5);
       outtextxy(c,100,"CCB PRESENTS ");
      outtextxy(c-30,140,"A PROJECT REPORT ON");
	for (c=640;c>50;c--)
   {	     settextstyle(8,0,2);
       setcolor(GREEN);
      outtextxy(c,180,"PERFORMANCE   OF  THE  INDIAN  BATSMEN");
	outtextxy(c+85,220,"IN THE LAST 20 MATCHES");
		 setcolor(YELLOW);
       outtextxy(c,180,"PERFORMANCE   OF  THE  INDIAN  BATSMEN");
	outtextxy(c+85,220,"IN THE LAST 20 MATCHES");
		}
		  setcolor(GREEN);
		outtextxy(c,180,"! PERFORMANCE   OF  THE  INDIAN  BATSMEN");
	outtextxy(c+85,220,"IN THE LAST 20 MATCHES !");
	for (c=110;c<450;c++ )
	     {	outtextxy(c,223,"_");
		outtextxy(c,225,"_");
	}
	for (c=40;c<590;c++ )
	     {	outtextxy(c,183,"_");
		outtextxy(c,185,"_");
	}
		for (c=640;c>400;c--)
   {	 settextstyle(7,0,1);
       setcolor(BLUE);
	outtextxy(c,350,"SUBMITTED BY:-");
	outtextxy(c,400," ANMOL SAXENA");

		 setcolor(YELLOW);
	outtextxy(c,350,"SUBMITTED BY:-");
	outtextxy(c,400," ANMOL SAXENA");


       }
       setcolor(BLUE);
	outtextxy(400,350,"SUBMITTED BY:-");
	outtextxy(400,400," ANMOL SAXENA");

      delay(2000);
       closegraph();
       }
       void preface()
	{  int ch,gd=9,gm=2;

		  initgraph(&gd, &gm, "");
	setbkcolor(1);

	for(int c=0;c<=49;c++)
     {	settextstyle(7,0,4);
	setcolor(12),
	   outtextxy(230,c,"PREFACE");
	   delay(50);
	   setcolor(1),
	   outtextxy(230,c,"PREFACE");
	}
	 setcolor(RED);
 setfillstyle(1, RED);
   circle(550,95, 40);
 floodfill(525, 95,RED);
floodfill(555, 105,RED);
     setcolor(YELLOW);
    arc(563, 111, 69,191 , 45);
     arc(565, 115, 69, 191,45);
	setcolor(11),
	   outtextxy(230,50,"PREFACE");
	settextstyle(7,0,1);
		setcolor(12),
	   outtextxy(30,200,"INDIA'S performance in the last few world cups has not");
	 outtextxy(30,230, " been so good therefore we are presenting this report ");
	 outtextxy(30,260,"with the hope that it will help BCCI to select the team ");
	 outtextxy(30,290,"for 2011 WORLDCUP. We hope that this project report will ");
	 outtextxy(30,320,"live upto your expectations.");
	for( c=10;c<620;c++)
	{ outtextxy(c,5,"_");
	 outtextxy(c,434,"_");
	 outtextxy(c,437,"_");
	  outtextxy(c,8,"_");
	 }
	   delay(5000);
	 closegraph();
	 }
	 void mainmenu()
	{     int  choic,choice,zero,zer[11],cent[11],cen,cho,choi,value,s,subav[11],c,d,r,subss[11],ss[11],av[11],subno[11][20],no[11][20],col,row,gd=9,gm=2,i,ch;
	   float y,x,aver,sum;
       char a,an,answer,answ,answe,ans='y',ze[2],su[2],ce[2],de[2],sub[2],total[2],ave[2],subruns[2],br[11][20],dr[11][20],cr[11][20],sno[2],sn[2],runs[2],names[2],ar[11][20]={"S.TENDULKAR","V.SEHWAG","Y.SINGH","M.S.DHONI","S.RAINA","G.GAMBHIR","R.DRAVID","S.GANGULY","Y.PATHAN","V.KOHLI","PARTHIV"};

		  initgraph(&gd, &gm, "");


	cleardevice();
 setbkcolor(8);

	for( c=0;c<=49;c++)
     {	settextstyle(7,0,4);
	setcolor(10),
	   outtextxy(230,c,"MAIN MENU");
	   delay(3);
	   setcolor(8),
	   outtextxy(230,c,"MAIN MENU");
	}
	   setcolor(10),
	   outtextxy(230,50,"MAIN MENU");
		settextstyle(7,0,1);
		setcolor(3);
	   for( s=0;s<11;s++)
    {
    for( d=0;d<20;d++)
   if((s+d)%9==0) no[s][d]=random(3); else  no[s][d]=random(199);
   }
    for( s=0;s<11;s++)
    {    strcpy(br[s],ar[s]);
     strcpy(cr[s],ar[s]);
    for( d=0;d<20;d++)
    subno[s][d]=no[s][d];
    }
	  for( s=0;s<11;s++)
    {
     sum=0;
     for( d=0;d<20;d++)
     sum=sum+no[s][d];
	 ss[s]=sum;
	 subss[s]=sum;
	 aver=(sum/20);
       av[s]=aver;
      subav[s]=aver;
	}

	outtextxy(50,100,"Press any of the following to get:- ");

	for( c=0,i=200;c<49,i>70;c++,i--)
       {	settextstyle(7,0,1);
		setcolor(12),

	   outtextxy(c,150,"1. Scoresheet Of All The Players. ");
	 outtextxy(i,200, "2. Entire  Scoresheet Of A Particular Player. ");
	 outtextxy(c,250,"3. Informations Regarding Average Score.");
	 outtextxy(i,300,"4. Scorecard Of Any Of The 20 Matches Played.");
	 outtextxy(c,350,"5.  Various Other Interesting Results.");
	 outtextxy(i,400,"6. To Quit.");

	   setcolor(8),
	   outtextxy(c,150,"1. Scoresheet Of All The Players. ");
	 outtextxy(i,200, "2. Entire  Scoresheet Of A Particular Player. ");
	 outtextxy(c,250,"3. Informations Regarding Average Score.");
	 outtextxy(i,300,"4. Scorecard Of Any Of The 20 Matches Played.");
	 outtextxy(c,350,"5.  Various Other Interesting Results.");
	 outtextxy(i,400,"6. To Quit.");

   }
	closegraph();
 ans='y';
	for(;ans=='y';)
    {
		  initgraph(&gd, &gm, "");
	  cleardevice();
	setbkcolor(8);
	settextstyle(7,0,4);


     setcolor(10),
	   outtextxy(230,50,"MAIN MENU");
		settextstyle(7,0,1);
		setcolor(3),

	outtextxy(50,100,"Press any of the following to get:- ");

		setcolor(12),
	   outtextxy(49,150,"1. Scoresheet Of All The Players. ");
	 outtextxy(70,200, "2. Entire  Scoresheet Of A Particular Player. ");
	 outtextxy(49,250,"3. Informations Regarding Average Score.");
	 outtextxy(70,300,"4. Scorecard Of Any Of The 20 Matches Played.");
	 outtextxy(49,350,"5.  Various Other Interesting Results.");
	 outtextxy(70,400,"6. To Quit.");
 setcolor(11);
	 outtextxy(400,425,"YOUR CHOICE PLEASE.");


	for( c=10;c<620;c++)
	{ outtextxy(c,5,"_");
	 outtextxy(c,434,"_");
	 outtextxy(c,437,"_");
	  outtextxy(c,8,"_");
	 }
		 cin>>ch;
	 closegraph();

	 switch(ch)
		{
	 case 1:
       {
	   initgraph(&gd, &gm, "");

   setcolor(BLUE);
    rectangle(3,3,630,463);
   rectangle(5,5,628,460);
   line(29,5,29,460);
   for(int co=147 ;co<628;co=co+48)
  line(co,5,co,460);

     for(int ro=5;ro<460;ro=ro+38)
    line(5,ro,628,ro);
     setcolor(RED);
    outtextxy(220,467,"Press any key to continue....");

   for( s=0;s<11;s++)
    {  setcolor(GREEN);
    sprintf(sno,"%d",s+1);
	outtextxy(50,s*38+60,ar[s]) ;
	outtextxy(10,s*38+60,sno) ;
    for( d=0;d<10;d++)
  {  setcolor(RED);
   sprintf(runs,"%d",no[s][d]);
   outtextxy(48*d+158,s*38+60,runs);

    }
    }
    setcolor(GREEN);

     for( d=0;d<10;d++)
    {  sprintf(sn,"%d",d+1);
    outtextxy(d*48+168,18,sn);

    }

      outtextxy(10,11,"S.");
	 outtextxy(9,24,"NO");

	settextstyle(1,0,1);
	  outtextxy(45,11,"PLAYERS");
	   getch();
  cleardevice();
    setcolor(RED);
    settextstyle(0,0,0);
       for( s=0;s<11;s++)
    {  setcolor(GREEN);
    sprintf(sno,"%d",s+1);
    outtextxy(50,s*38+58,ar[s]);
      outtextxy(10,s*38+60,sno) ;
    for( d=10;d<20;d++)
  {   setcolor(RED);
   sprintf(runs,"%d",no[s][d]);
   outtextxy(48*d-320,s*38+60,runs);
    }
    }
     setcolor(GREEN);
     for( d=10;d<20;d++)
    {  sprintf(sn,"%d",d+1);
    outtextxy(d*48-318,18,sn);
    }
     setcolor(GREEN);
      outtextxy(10,11,"S.");
	 outtextxy(9,24,"NO");
	outtextxy(220,467,"Press any key to continue....");
	settextstyle(1,0,1);
	  outtextxy(45,11,"PLAYERS");

    setcolor(BLUE);
    rectangle(3,3,630,463);
   rectangle(5,5,628,460);
   line(29,5,29,460);
   for( co=147 ;co<628;co=co+48)
   line(co,5,co,460);
  for( ro=5;ro<460;ro=ro+38)
    line(5,ro,628,ro);

	 getch();
	closegraph();
	   }

	  break;

     case 2:
     {
      initgraph(&gd, &gm, "");
       cleardevice();
       setbkcolor(12);
		  setcolor(BLUE);
    rectangle(10,10,623,455);
   rectangle(5,5,628,460);

	settextstyle(7,0,1);

      outtextxy(90,30,"Press any of the following to get scorecard");
	  outtextxy(200,50,"of respective players.");

     for( c=0,i=540-c;c<=130,i>410;c++,i--)
       {	settextstyle(7,0,1);
		setcolor(YELLOW);

	   outtextxy(c,80," 1. S.TENDULKAR");
	 outtextxy(i,110, " 2. V.SEHWAG ");
	 outtextxy(c,140," 3. Y.SINGH");
	 outtextxy(i,170," 4. M.S.DHONI");
	 outtextxy(c,200," 5. S.RAINA ");
	 outtextxy(i,230," 6. G.GAMBHIR  ");
	  outtextxy(c,260," 7. R.DRAVID  ");
	  outtextxy(i,290," 8. S.GANGULY  ");
	  outtextxy(c,320," 9. Y.PATHAN ");
	  outtextxy(i,350," 10. V.KOHLI  ");
	   outtextxy(c,380," 11. PARTHIV  ");

	   setcolor(12);
	   outtextxy(c,80," 1. S.TENDULKAR");
	 outtextxy(i,110, " 2. V.SEHWAG ");
	 outtextxy(c,140," 3. Y.SINGH");
	 outtextxy(i,170," 4. M.S.DHONI");
	 outtextxy(c,200," 5. S.RAINA ");
	 outtextxy(i,230," 6. G.GAMBHIR  ");
	  outtextxy(c,260," 7. R.DRAVID  ");
	  outtextxy(i,290," 8. S.GANGULY  ");
	  outtextxy(c,320," 9. Y.PATHAN ");
	  outtextxy(i,350," 10. V.KOHLI  ");
	   outtextxy(c,380," 11. PARTHIV  ");
    }
	 closegraph();
	  answe='y';
	  for(;answe=='y';)
	  {
	      initgraph(&gd, &gm, "");
	   cleardevice();

	    setbkcolor(12);
	 setcolor(BLUE);
    rectangle(10,10,623,455);
   rectangle(5,5,628,460);

	settextstyle(7,0,1);

      outtextxy(90,30,"Press any of the following to get scorecard");
	  outtextxy(200,50,"of respective players.");

	setcolor(YELLOW);

	   outtextxy(c,80," 1. S.TENDULKAR");
	 outtextxy(i,110, " 2. V.SEHWAG ");
	 outtextxy(c,140," 3. Y.SINGH");
	 outtextxy(i,170," 4. M.S.DHONI");
	 outtextxy(c,200," 5. S.RAINA ");
	 outtextxy(i,230," 6. G.GAMBHIR  ");
	  outtextxy(c,260," 7. R.DRAVID  ");
	  outtextxy(i,290," 8. S.GANGULY  ");
	  outtextxy(c,320," 9. Y.PATHAN ");
	  outtextxy(i,350," 10. V.KOHLI  ");
	   outtextxy(c,380," 11. PARTHIV  ");
 outtextxy(c,410,"Press 12. to go back to previous menu.  ");
		setcolor(CYAN);
		  outtextxy(330,433,"YOUR CHOICE PLEASE...");
		   cin>>cho;
			  cleardevice();


	switch(cho)
	{
	case 1:

	   cleardevice();
	  setcolor(BLUE);
    rectangle(3,3,630,463);
   rectangle(5,5,628,460);
	   settextstyle(7,0,1);
	 setbkcolor(BLACK);
	 setcolor(RED);

	 outtextxy(158,13,"SCORECARD OF SACHIN TENDULKAR.");
		 setcolor(GREEN);
	  outtextxy(458,225,"AVERAGE");
	  outtextxy(458,255,"TOTAL");
	  outtextxy(370,50,"RUNS");
	    outtextxy(170,50,"RUNS");
    sprintf(ave,"%d",av[0]);
    outtextxy(580,225,ave);
     sprintf(total,"%d",ss[0]);
    outtextxy(580,255,total);

   for( d=0;d<20;d++)
  {
     if (d<=9){
   setcolor(GREEN);
    sprintf(sno,"%d",d+1);
       outtextxy(30,d*38+80,"MATCH") ;
	outtextxy(105,d*38+80,sno) ;

    setcolor(RED);
   sprintf(runs,"%d",no[0][d]);
   outtextxy(170,d*38+80,runs);

    } else{

   setcolor(GREEN);
    sprintf(sno,"%d",d+1);
       outtextxy(240,d*38-300,"MATCH") ;
	outtextxy(315,d*38-300,sno) ;
    setcolor(RED);
   sprintf(runs,"%d",no[0][d]);
   outtextxy(370,d*38-300,runs);

    }
       }
	answe='y';
	break;

	case 2:


	   cleardevice();
	  setbkcolor(BLACK);
	  setcolor(BLUE);
    rectangle(3,3,630,463);
   rectangle(5,5,628,460);
	   settextstyle(7,0,1);
	 setcolor(RED);
	 outtextxy(158,13,"SCORECARD OF VIRENDER SEHWAG.");
		 setcolor(GREEN);
	  outtextxy(458,225,"AVERAGE");
	  outtextxy(458,255,"TOTAL");
	  outtextxy(370,50,"RUNS");
	    outtextxy(170,50,"RUNS");
    sprintf(ave,"%d",av[1]);
    outtextxy(580,225,ave);
     sprintf(total,"%d",ss[1]);
    outtextxy(580,255,total);

   for( d=0;d<20;d++)
  {
     if (d<=9){
   setcolor(GREEN);
    sprintf(sno,"%d",d+1);
       outtextxy(30,d*38+80,"MATCH") ;
	outtextxy(105,d*38+80,sno) ;

    setcolor(RED);
   sprintf(runs,"%d",no[1][d]);
   outtextxy(170,d*38+80,runs);

    } else{

   setcolor(GREEN);
    sprintf(sno,"%d",d+1);
       outtextxy(240,d*38-300,"MATCH") ;
	outtextxy(315,d*38-300,sno) ;
    setcolor(RED);
   sprintf(runs,"%d",no[1][d]);
   outtextxy(370,d*38-300,runs);

    }
       }
	answe='y';
	break;


	case 3:
	   cleardevice();
	  setbkcolor(BLACK);
	  setcolor(BLUE);
    rectangle(3,3,630,463);
   rectangle(5,5,628,460);
	   settextstyle(7,0,1);
	 setcolor(RED);
	 outtextxy(158,13,"SCORECARD OF YUVRAJ SINGH.");
		 setcolor(GREEN);
	  outtextxy(458,225,"AVERAGE");
	  outtextxy(458,255,"TOTAL");
	  outtextxy(370,50,"RUNS");
	    outtextxy(170,50,"RUNS");
    sprintf(ave,"%d",av[2]);
    outtextxy(580,225,ave);
     sprintf(total,"%d",ss[2]);
    outtextxy(580,255,total);

   for( d=0;d<20;d++)
  {
     if (d<=9){
   setcolor(GREEN);
    sprintf(sno,"%d",d+1);
       outtextxy(30,d*38+80,"MATCH") ;
	outtextxy(105,d*38+80,sno) ;

    setcolor(RED);
   sprintf(runs,"%d",no[2][d]);
   outtextxy(170,d*38+80,runs);

    } else{

   setcolor(GREEN);
    sprintf(sno,"%d",d+1);
       outtextxy(240,d*38-300,"MATCH") ;
	outtextxy(315,d*38-300,sno) ;
    setcolor(RED);
   sprintf(runs,"%d",no[2][d]);
   outtextxy(370,d*38-300,runs);

    }
       }
	answe='y';
	break;
	case 4:
	   cleardevice();
	  setbkcolor(BLACK);
	  setcolor(BLUE);
    rectangle(3,3,630,463);
   rectangle(5,5,628,460);
	   settextstyle(7,0,1);
	 setcolor(RED);
	 outtextxy(158,13,"SCORECARD OF M.S.DHONI");
		 setcolor(GREEN);
	  outtextxy(458,225,"AVERAGE");
	  outtextxy(458,255,"TOTAL");
	  outtextxy(370,50,"RUNS");
	    outtextxy(170,50,"RUNS");
    sprintf(ave,"%d",av[3]);
    outtextxy(580,225,ave);
     sprintf(total,"%d",ss[3]);
    outtextxy(580,255,total);

   for( d=0;d<20;d++)
  {
     if (d<=9){
   setcolor(GREEN);
    sprintf(sno,"%d",d+1);
       outtextxy(30,d*38+80,"MATCH") ;
	outtextxy(105,d*38+80,sno) ;

    setcolor(RED);
   sprintf(runs,"%d",no[3][d]);
   outtextxy(170,d*38+80,runs);

    } else{

   setcolor(GREEN);
    sprintf(sno,"%d",d+1);
       outtextxy(240,d*38-300,"MATCH") ;
	outtextxy(315,d*38-300,sno) ;
    setcolor(RED);
   sprintf(runs,"%d",no[3][d]);
   outtextxy(370,d*38-300,runs);

    }
       }
	answe='y';
	break;
	case 5:
	   cleardevice();
	  setbkcolor(BLACK);
	  setcolor(BLUE);
    rectangle(3,3,630,463);
   rectangle(5,5,628,460);
	   settextstyle(7,0,1);
	 setcolor(RED);
	 outtextxy(158,13,"SCORECARD OF SURESH RAINA.");
		 setcolor(GREEN);
	  outtextxy(458,225,"AVERAGE");
	  outtextxy(458,255,"TOTAL");
	  outtextxy(370,50,"RUNS");
	    outtextxy(170,50,"RUNS");
    sprintf(ave,"%d",av[4]);
    outtextxy(580,225,ave);
     sprintf(total,"%d",ss[4]);
    outtextxy(580,255,total);

   for( d=0;d<20;d++)
  {
     if (d<=9){
   setcolor(GREEN);
    sprintf(sno,"%d",d+1);
       outtextxy(30,d*38+80,"MATCH") ;
	outtextxy(105,d*38+80,sno) ;

    setcolor(RED);
   sprintf(runs,"%d",no[4][d]);
   outtextxy(170,d*38+80,runs);

    } else{

   setcolor(GREEN);
    sprintf(sno,"%d",d+1);
       outtextxy(240,d*38-300,"MATCH") ;
	outtextxy(315,d*38-300,sno) ;
    setcolor(RED);
   sprintf(runs,"%d",no[4][d]);
   outtextxy(370,d*38-300,runs);

    }
       }
	answe='y';
	break;
	case 6:
	   cleardevice();
	  setbkcolor(BLACK);
	  setcolor(BLUE);
    rectangle(3,3,630,463);
   rectangle(5,5,628,460);
	   settextstyle(7,0,1);
	 setcolor(RED);
	 outtextxy(158,13,"SCORECARD OF GAUTAM GAMBHIR.");
		 setcolor(GREEN);
	  outtextxy(458,225,"AVERAGE");
	  outtextxy(458,255,"TOTAL");
	  outtextxy(370,50,"RUNS");
	    outtextxy(170,50,"RUNS");
    sprintf(ave,"%d",av[5]);
    outtextxy(580,225,ave);
     sprintf(total,"%d",ss[5]);
    outtextxy(580,255,total);

   for( d=0;d<20;d++)
  {
     if (d<=9){
   setcolor(GREEN);
    sprintf(sno,"%d",d+1);
       outtextxy(30,d*38+80,"MATCH") ;
	outtextxy(105,d*38+80,sno) ;

    setcolor(RED);
   sprintf(runs,"%d",no[5][d]);
   outtextxy(170,d*38+80,runs);

    } else{

   setcolor(GREEN);
    sprintf(sno,"%d",d+1);
       outtextxy(240,d*38-300,"MATCH") ;
	outtextxy(315,d*38-300,sno) ;
    setcolor(RED);
   sprintf(runs,"%d",no[5][d]);
   outtextxy(370,d*38-300,runs);

    }
       }
	answe='y';
	break;
	case 7:
	   cleardevice();
	  setcolor(BLUE);
    rectangle(3,3,630,463);
   rectangle(5,5,628,460);
	   settextstyle(7,0,1);
	 setcolor(RED);
	 outtextxy(158,13,"SCORECARD OF RAHUL DRAVID.");
		 setbkcolor(BLACK);
		 setcolor(GREEN);
	  outtextxy(458,225,"AVERAGE");
	  outtextxy(458,255,"TOTAL");
	  outtextxy(370,50,"RUNS");
	    outtextxy(170,50,"RUNS");
    sprintf(ave,"%d",av[6]);
    outtextxy(580,225,ave);
     sprintf(total,"%d",ss[6]);
    outtextxy(580,255,total);

   for( d=0;d<20;d++)
  {
     if (d<=9){
   setcolor(GREEN);
    sprintf(sno,"%d",d+1);
       outtextxy(30,d*38+80,"MATCH") ;
	outtextxy(105,d*38+80,sno) ;

    setcolor(RED);
   sprintf(runs,"%d",no[6][d]);
   outtextxy(170,d*38+80,runs);

    } else{

   setcolor(GREEN);
    sprintf(sno,"%d",d+1);
       outtextxy(240,d*38-300,"MATCH") ;
	outtextxy(315,d*38-300,sno) ;
    setcolor(RED);
   sprintf(runs,"%d",no[6][d]);
   outtextxy(370,d*38-300,runs);

    }
       }
	answe='y';
break;
	case 8:
	   cleardevice();
	  setcolor(BLUE);
    rectangle(3,3,630,463);
   rectangle(5,5,628,460);
	   setbkcolor(BLACK);
	   settextstyle(7,0,1);
	 setcolor(RED);
	 outtextxy(158,13,"SCORECARD OF SOURAV GANGULY.");
		 setcolor(GREEN);
	  outtextxy(458,225,"AVERAGE");
	  outtextxy(458,255,"TOTAL");
	  outtextxy(370,50,"RUNS");
	    outtextxy(170,50,"RUNS");
    sprintf(ave,"%d",av[7]);
    outtextxy(580,225,ave);
     sprintf(total,"%d",ss[7]);
    outtextxy(580,255,total);

   for( d=0;d<20;d++)
  {
     if (d<=9){
   setcolor(GREEN);
    sprintf(sno,"%d",d+1);
       outtextxy(30,d*38+80,"MATCH") ;
	outtextxy(105,d*38+80,sno) ;

    setcolor(RED);
   sprintf(runs,"%d",no[7][d]);
   outtextxy(170,d*38+80,runs);

    } else{

   setcolor(GREEN);
    sprintf(sno,"%d",d+1);
       outtextxy(240,d*38-300,"MATCH") ;
	outtextxy(315,d*38-300,sno) ;
    setcolor(RED);
   sprintf(runs,"%d",no[7][d]);
   outtextxy(370,d*38-300,runs);

    }
       }
	answe='y';
     break;
      case 9:
	   cleardevice();
	  setbkcolor(BLACK);
	  setcolor(BLUE);
    rectangle(3,3,630,463);
   rectangle(5,5,628,460);
	   settextstyle(7,0,1);
	 setcolor(RED);
	 outtextxy(158,13,"SCORECARD OF YUSUF PATHAN.");
		 setcolor(GREEN);
	  outtextxy(458,225,"AVERAGE");
	  outtextxy(458,255,"TOTAL");
	  outtextxy(370,50,"RUNS");
	    outtextxy(170,50,"RUNS");
    sprintf(ave,"%d",av[8]);
    outtextxy(580,225,ave);
     sprintf(total,"%d",ss[8]);
    outtextxy(580,255,total);

   for( d=0;d<20;d++)
  {
     if (d<=9){
   setcolor(GREEN);
    sprintf(sno,"%d",d+1);
       outtextxy(30,d*38+80,"MATCH") ;
	outtextxy(105,d*38+80,sno) ;

    setcolor(RED);
   sprintf(runs,"%d",no[8][d]);
   outtextxy(170,d*38+80,runs);

    } else{

   setcolor(GREEN);
    sprintf(sno,"%d",d+1);
       outtextxy(240,d*38-300,"MATCH") ;
	outtextxy(315,d*38-300,sno) ;
    setcolor(RED);
   sprintf(runs,"%d",no[8][d]);
   outtextxy(370,d*38-300,runs);

    }
       }
	answe='y';
	break;
	case 10:
	   cleardevice();
	  setcolor(BLUE);
    rectangle(3,3,630,463);
   rectangle(5,5,628,460);
	   settextstyle(7,0,1);
	 setcolor(RED);
	 outtextxy(158,13,"SCORECARD OF VIRAT KOHLI.");
		 setcolor(GREEN);
	  outtextxy(458,225,"AVERAGE");
	  outtextxy(458,255,"TOTAL");
	  outtextxy(370,50,"RUNS");
	    setbkcolor(BLACK);
	    outtextxy(170,50,"RUNS");
    sprintf(ave,"%d",av[9]);
    outtextxy(580,225,ave);
     sprintf(total,"%d",ss[9]);
    outtextxy(580,255,total);

   for( d=0;d<20;d++)
  {
     if (d<=9){
   setcolor(GREEN);
    sprintf(sno,"%d",d+1);
       outtextxy(30,d*38+80,"MATCH") ;
	outtextxy(105,d*38+80,sno) ;

    setcolor(RED);
   sprintf(runs,"%d",no[9][d]);
   outtextxy(170,d*38+80,runs);

    } else{

   setcolor(GREEN);
    sprintf(sno,"%d",d+1);
       outtextxy(240,d*38-300,"MATCH") ;
	outtextxy(315,d*38-300,sno) ;
    setcolor(RED);
   sprintf(runs,"%d",no[9][d]);
   outtextxy(370,d*38-300,runs);

    }
       }
	answe='y';
break;
	case 11:
	   cleardevice();
	  setbkcolor(BLACK);
	  setcolor(BLUE);
    rectangle(3,3,630,463);
   rectangle(5,5,628,460);
	   settextstyle(7,0,1);
	 setcolor(RED);
	 outtextxy(158,13,"SCORECARD OF PARTHIV PATEL.");
		 setcolor(GREEN);
	  outtextxy(458,225,"AVERAGE");
	  outtextxy(458,255,"TOTAL");
	  outtextxy(370,50,"RUNS");
	    outtextxy(170,50,"RUNS");
    sprintf(ave,"%d",av[10]);
    outtextxy(580,225,ave);
     sprintf(total,"%d",ss[10]);
    outtextxy(580,255,total);

   for( d=0;d<20;d++)
  {
     if (d<=9){
   setcolor(GREEN);
    sprintf(sno,"%d",d+1);
       outtextxy(30,d*38+80,"MATCH") ;
	outtextxy(105,d*38+80,sno) ;

    setcolor(RED);
   sprintf(runs,"%d",no[10][d]);
   outtextxy(170,d*38+80,runs);

    } else{

   setcolor(GREEN);
    sprintf(sno,"%d",d+1);
       outtextxy(240,d*38-300,"MATCH") ;
	outtextxy(315,d*38-300,sno) ;
    setcolor(RED);
   sprintf(runs,"%d",no[10][d]);
   outtextxy(370,d*38-300,runs);

    }
       }
	answe='y';
	break;

	case 12:
	answe='n';
	break;


     }
     getch();
     closegraph();


     }


    }
    break;


	case 3:
	      {
		initgraph(&gd, &gm, "");
       cleardevice();
       setbkcolor(YELLOW);
	  setcolor(BLUE);
    rectangle(10,10,623,455);
   rectangle(5,5,628,460);
		settextstyle(7,0,1);
		setcolor(RED);

	 outtextxy(100,20,"INFORMATIONS REGARDING AVERAGE SCORE.");
		settextstyle(7,0,1);


	setcolor(BLUE);
	outtextxy(50,58,"Press any of the following to display:- ");

	for( c=0,i=99;c<29,i>70;c++,i--)
       {	settextstyle(7,0,1);
		setcolor(RED);

	   outtextxy(c,120,"1. Names/total & average of 20 matches in ascending ");
		   outtextxy(c,160,"order of names of the players.");
	   outtextxy(i,220,"2. Names/total & average of 20 matches in ascending  ");
      outtextxy(i,260,"order of average of the players.");
       outtextxy(c,320, "3. Best/worst 5 players based on average score. ");
		  outtextxy(i,380, "4. To go back to previous menu.");

	setcolor(YELLOW);
	   outtextxy(c,120,"1. Names/total & average of 20 matches in ascending ");
		   outtextxy(c,160,"order of names of the players.");
	   outtextxy(i,220,"2. Names/total & average of 20 matches in ascending  ");
      outtextxy(i,260,"order of average of the players.");
       outtextxy(c,320, "3. Best/worst 5 players based on average score. ");
		  outtextxy(i,380, "4. To go back to previous menu.");

     }
	closegraph();

      answ='d';
	      for(;answ=='d';)
	  {
		    initgraph(&gd, &gm, "");
	   setbkcolor(YELLOW);

			  setcolor(BLUE);
    rectangle(10,10,623,455);
   rectangle(5,5,628,460);

		settextstyle(7,0,1);
		setcolor(RED);

		 outtextxy(100,20,"INFORMATIONS REGARDING AVERAGE SCORE.");
		settextstyle(7,0,1);


	setcolor(BLUE);
	outtextxy(50,58,"Press any of the following to display:- ");

		setcolor(RED);
   outtextxy(c,120,"1. Names/total & average of 20 matches in ascending ");
		   outtextxy(c,160,"order of names of the players.");
	   outtextxy(i,220,"2. Names/total & average of 20 matches in ascending  ");
      outtextxy(i,260,"order of average of the players.");
       outtextxy(c,320, "3. Best/worst 5 players based on average score. ");
		  outtextxy(i,380, "4. To go back to previous menu.");
  setcolor(GREEN);
		  outtextxy(220,425, "YOUR CHOICE PLEASE...");


    cin>>choic;
     switch(choic)
     {
     case 2:
	 cleardevice();

	     setbkcolor(YELLOW);

	setbkcolor(YELLOW);
	setcolor(RED);
	   settextstyle(7,0,1);
	   outtextxy(10,18," Names/total & average of 20 matches in ascending  ");
      outtextxy(50,35,"order of average of the players.");



       for(int s=0;s<10;s++)
   {
   for(int j=s+1;j<11;j++)
   if(subss[s]>subss[j]) {y=subss[s];subss[s]=subss[j];subss[j]=y;x=subav[s];subav[s]=subav[j];subav[j]=x;
   strcpy(sub,br[s]);
   strcpy(br[s],br[j]);
  strcpy(br[j],sub);
     }               //sorting of names & total according to average//

   }
		  setcolor(BLUE);
    rectangle(10,10,623,455);
   rectangle(5,5,628,460);

	setcolor(BLUE);
		  settextstyle(7,0,1);


	 outtextxy(78,65,"NAMES");
	  outtextxy(478,65,"AVERAGE");
	  outtextxy(278,65,"TOTAL");
	    setcolor(GREEN);
		  settextstyle(7,0,1);
	outtextxy(300,430,"Press any key to continue... ");

	for( s=0;s<11;s++)
	{   	     settextstyle(7,0,1);
	 setcolor(GREEN);
    sprintf(sno,"%d",s+1);
      outtextxy(20,s*30+110,sno);
       if(s>=10)outtextxy(31,s*30+110,".");else	outtextxy(25,s*30+110,".");

	setcolor(RED);


    sprintf(ave,"%d",subav[s]);
    outtextxy(478,s*30+110,ave);
     sprintf(total,"%d",subss[s]);
    outtextxy(278,s*30+110,total);
     outtextxy(78,s*30+110,br[s]);
    }
       answ='d';


	break;

	 case 1:

	 cleardevice();
	setbkcolor(YELLOW);
	setcolor(RED);
	   settextstyle(7,0,1);

	  outtextxy(10,18," Names/total & average of 20 matches in ascending ");
	  outtextxy(50,35,"order of names of the players.");


	for( s=0;s<10;s++)
   {
   for(int j=s+1;j<11;j++)
 {  value=strcmp(br[s],br[j]);
   if(value>0) { y=subss[s];subss[s]=subss[j];subss[j]=y;x=subav[s];subav[s]=subav[j];subav[j]=x;strcpy(de,br[s]);
   strcpy(br[s],br[j]);
  strcpy(br[j],de);
     }               //sorting of names & total acc to names//
     }
   }
		  setcolor(BLUE);
    rectangle(10,10,623,455);
   rectangle(5,5,628,460);

	setcolor(BLUE);
		  settextstyle(7,0,1);

	  outtextxy(78,65,"NAMES");
	  outtextxy(478,65,"AVERAGE");
	 outtextxy(278,65,"TOTAL");
	setcolor(GREEN);
		  settextstyle(7,0,1);
	outtextxy(300,430,"Press any key to continue... ");

	for( s=0;s<11;s++)
	{ 	  settextstyle(7,0,1);
	 setcolor(GREEN);
    sprintf(sno,"%d",s+1);
    outtextxy(20,s*30+110,sno);
   if(s>=10)outtextxy(31,s*30+110,".");else outtextxy(25,s*30+110,".");


	setcolor(RED);


    sprintf(ave,"%d",subav[s]);
    outtextxy(478,s*30+110,ave);
     outtextxy(78,s*30+110,br[s]);
     sprintf(total,"%d",subss[s]);
    outtextxy(278,s*30+110,total);

    }
       answ='d';

	 break;

	 case 3:

      cleardevice();
       setbkcolor(GREEN);
	  setcolor(BLUE);
    rectangle(10,10,623,455);
   rectangle(5,5,628,460);



       for( s=0;s<10;s++)
   {
   for( int j=s+1;j<11;j++)
   if(subss[s]>subss[j]) {y=subss[s];subss[s]=subss[j];subss[j]=y;x=subav[s];subav[s]=subav[j];subav[j]=x;
   strcpy(sub,br[s]);
   strcpy(br[s],br[j]);
  strcpy(br[j],sub);
     }               //best & worst 5 players//

   }
	 setcolor(RED);
		  settextstyle(7,0,2);

		  outtextxy(248,22,"BEST PLAYERS");
		  settextstyle(7,0,1);
	 outtextxy(78,50,"NAMES");
	  outtextxy(478,50,"AVERAGE");
	  outtextxy(278,50,"TOTAL");
		settextstyle(7,0,2);
		  outtextxy(248,237,"WORST PLAYERS");
		setcolor(BLUE);
		  settextstyle(7,0,1);
	outtextxy(300,420,"Press any key to continue... ");


	for( s=10;s>5;s--)
	{   	 setcolor(YELLOW);
		  settextstyle(7,0,1);

    sprintf(ave,"%d",subav[s]);
    outtextxy(478,s*30-100,ave);
     sprintf(total,"%d",subss[s]);
    outtextxy(278,s*30-100,total);
     outtextxy(78,s*30-100,br[s]);
     }
			for( s=0;s<5;s++)
	{    setcolor(YELLOW);
		  settextstyle(7,0,1);

    sprintf(ave,"%d",subav[s]);
    outtextxy(478,s*30+275,ave);
     sprintf(total,"%d",subss[s]);
    outtextxy(278,s*30+275,total);
     outtextxy(78,s*30+275,br[s]);
     }
	answ='d';
	 break;

	case 4:
	answ='n';
	break;
	 }
	for(s=0;s<11;s++)
       {	subss[s]=ss[s];
	strcpy( br[s],ar[s]);
	subav[s]=av[s];
	}
	getch();
	closegraph();
	}
	}
	break;

	case 4:
	{
	       initgraph(&gd, &gm, "");
	 cleardevice();
		  settextstyle(7,0,1);
		setcolor(BLUE);
    rectangle(10,10,623,455);
   rectangle(5,5,628,460);

	   outtextxy(60,20,"Press any of the following no. to get the scoresheet");
	   outtextxy(60,60," of any one of all the 20 matches played.");
	  setbkcolor(4);
     for( c=0;c<=149;c++)
       {
		setcolor(11);
  outtextxy(c,100,"1. MATCH 1.");

 outtextxy(600-c,115,"2. MATCH 2.");
	  outtextxy(c,130,"3. MATCH 3.");
	  outtextxy(600-c,145,"4. MATCH 4.");
	  outtextxy(c,160,"5. MATCH 5.");
	  outtextxy(600-c,175,"6. MATCH 6.");
	  outtextxy(c,190,"7. MATCH 7.");
	  outtextxy(600-c,205,"8. MATCH 8.");
	  outtextxy(c,220,"9. MATCH 9.");
	  outtextxy(600-c,235,"10. MATCH 10.");
	  outtextxy(c,250,"11. MATCH 11.");
	   outtextxy(600-c,265,"12. MATCH 12.");
	   outtextxy(c,280,"13. MATCH 13.");
	   outtextxy(600-c,295,"14. MATCH 14.");
	   outtextxy(c,310,"15. MATCH 15.");
	   outtextxy(600-c,325,"16. MATCH 16.");
	   outtextxy(c,340,"17. MATCH 17.");
	   outtextxy(600-c,355,"18. MATCH 18.");
	   outtextxy(c,370,"19. MATCH 19.");
	    outtextxy(600-c,385,"20. MATCH 20.");
	   delay(3);
		setcolor(4);
  outtextxy(c,100,"1. MATCH 1.");

 outtextxy(600-c,115,"2. MATCH 2.");
	  outtextxy(c,130,"3. MATCH 3.");
	  outtextxy(600-c,145,"4. MATCH 4.");
	  outtextxy(c,160,"5. MATCH 5.");
	  outtextxy(600-c,175,"6. MATCH 6.");
	  outtextxy(c,190,"7. MATCH 7.");
	  outtextxy(600-c,205,"8. MATCH 8.");
	  outtextxy(c,220,"9. MATCH 9.");
	  outtextxy(600-c,235,"10. MATCH 10.");
	  outtextxy(c,250,"11. MATCH 11.");
	   outtextxy(600-c,265,"12. MATCH 12.");
	   outtextxy(c,280,"13. MATCH 13.");
	   outtextxy(600-c,295,"14. MATCH 14.");
	   outtextxy(c,310,"15. MATCH 15.");
	   outtextxy(600-c,325,"16. MATCH 16.");
	   outtextxy(c,340,"17. MATCH 17.");
	   outtextxy(600-c,355,"18. MATCH 18.");
	   outtextxy(c,370,"19. MATCH 19.");
	    outtextxy(600-c,385,"20. MATCH 20.");
			}
       closegraph();
       answe='y';
       for(;answe=='y';)
       {
	       initgraph(&gd, &gm, "");
		setcolor(BLUE);
    rectangle(10,10,623,455);
   rectangle(5,5,628,460);

	cleardevice();
		  settextstyle(7,0,1);

	   outtextxy(60,20,"Press any of the following no. to get the scoresheet");
	   outtextxy(60,60," of any one of all the 20 matches played.");

	  setbkcolor(4);

		setcolor(11);
  outtextxy(c,100,"1. MATCH 1.");

 outtextxy(600-c,115,"2. MATCH 2.");
	  outtextxy(c,130,"3. MATCH 3.");
	  outtextxy(600-c,145,"4. MATCH 4.");
	  outtextxy(c,160,"5. MATCH 5.");
	  outtextxy(600-c,175,"6. MATCH 6.");
	  outtextxy(c,190,"7. MATCH 7.");
	  outtextxy(600-c,205,"8. MATCH 8.");
	  outtextxy(c,220,"9. MATCH 9.");
	  outtextxy(600-c,235,"10. MATCH 10.");
	  outtextxy(c,250,"11. MATCH 11.");
	   outtextxy(600-c,265,"12. MATCH 12.");
	   outtextxy(c,280,"13. MATCH 13.");
	   outtextxy(600-c,295,"14. MATCH 14.");
	   outtextxy(c,310,"15. MATCH 15.");
	   outtextxy(600-c,325,"16. MATCH 16.");
	   outtextxy(c,340,"17. MATCH 17.");
	   outtextxy(600-c,355,"18. MATCH 18.");
	   outtextxy(c,370,"19. MATCH 19.");
	    outtextxy(600-c,385,"20. MATCH 20.");
		setcolor(GREEN);
		  outtextxy(220,433, "YOUR CHOICE PLEASE...");
		  settextstyle(7,0,1);

	   outtextxy(60,20,"Press any of the following no. to get the scoresheet");
	   outtextxy(60,60," of any one of all the 20 matches played.");
			setcolor(BLUE);

		  outtextxy(100,405, "21. To go back to previous menu.");

			  setcolor(BLUE);
    rectangle(10,10,623,455);
   rectangle(5,5,628,460);

		  cin>>choi;

	  switch(choi)
	  {
	  case 1:

	    cleardevice();
	 setbkcolor(YELLOW);
		  setcolor(BLUE);
    rectangle(10,10,623,455);
   rectangle(5,5,628,460);
		  settextstyle(7,0,1);


	 outtextxy(178,15,"MATCH 1-INDIA VS AUSTRALIA");


	outtextxy(208,30,"DURBAN");

	 outtextxy(78,50,"NAMES");
	  outtextxy(190,50,"RUNS");
	     tot=0;
   for( s=0;s<11;s++)
  {  settextstyle(0,0,0);

   setcolor(GREEN);
    sprintf(sno,"%d",s+1);
       outtextxy(78,s*30+100,ar[s]);
	outtextxy(30,s*30+100,sno) ;
     setcolor(GREEN);
    tot=tot+no[s][0];
   sprintf(runs,"%d",no[s][0]);
   outtextxy(200,s*30+100,runs);

    }


	for( s=0;s<10;s++)
   {
   for( int j=s+1;j<11;j++)
   if(no[s][0]>no[j][0]) {y=no[s][0];no[s][0]=no[j][0];no[j][0]=y;strcpy(sub,br[s]);strcpy(br[s],br[j]);strcpy(br[j],sub);}

   }


		  setcolor(BLUE);
		outtextxy(78,430,"TOTAL");

	sprintf(moo,"%d",tot);
       outtextxy(200,430,moo);
       settextstyle(7,0,1);
	  outtextxy(340,390,br[10]);

       setcolor(RED);

       outtextxy(400,200,"INDIA WINS");
       setcolor(RED);
	  outtextxy(340,360,"MAN OF THE MATCH");

	   answe='y';

	  break;
	  case 2:

	    cleardevice();
	 setbkcolor(YELLOW);
		  setcolor(BLUE);
    rectangle(10,10,623,455);
   rectangle(5,5,628,460);
		  settextstyle(7,0,1);


	 outtextxy(178,15,"MATCH 2-INDIA VS AUSTRALIA");


	outtextxy(208,30,"JOHANNESBURG");

	 outtextxy(78,50,"NAMES");
	  outtextxy(190,50,"RUNS");
	     tot=0;
   for( s=0;s<11;s++)
  {  settextstyle(0,0,0);

   setcolor(GREEN);
    sprintf(sno,"%d",s+1);
       outtextxy(78,s*30+100,ar[s]);
	outtextxy(30,s*30+100,sno) ;
     setcolor(GREEN);
    tot=tot+no[s][1];
   sprintf(runs,"%d",no[s][1]);
   outtextxy(200,s*30+100,runs);

    }


	for( s=0;s<10;s++)
   {
   for( int j=s+1;j<11;j++)
   if(no[s][1]>no[j][1]) {y=no[s][1];no[s][1]=no[j][1];no[j][1]=y;strcpy(sub,br[s]);strcpy(br[s],br[j]);strcpy(br[j],sub);}

   }


		  setcolor(BLUE);
		outtextxy(78,430,"TOTAL");

	sprintf(moo,"%d",tot);
       outtextxy(200,430,moo);
       settextstyle(7,0,1);
	  outtextxy(340,390,br[10]);

       setcolor(RED);

       outtextxy(400,200,"INDIA WINS");
       setcolor(RED);
	  outtextxy(340,360,"MAN OF THE MATCH");

	   answe='y';

	  break;
	  case 3:


	    cleardevice();
	 setbkcolor(YELLOW);
		  setcolor(BLUE);
    rectangle(10,10,623,455);
   rectangle(5,5,628,460);
		  settextstyle(7,0,1);


	 outtextxy(178,15,"MATCH 3-INDIA VS AUSTRALIA");


	outtextxy(208,30,"CAPE TOWN");

	 outtextxy(78,50,"NAMES");
	  outtextxy(190,50,"RUNS");
	     tot=0;
   for( s=0;s<11;s++)
  {  settextstyle(0,0,0);

   setcolor(GREEN);
    sprintf(sno,"%d",s+1);
       outtextxy(78,s*30+100,ar[s]);
	outtextxy(30,s*30+100,sno) ;
     setcolor(GREEN);
    tot=tot+no[s][2];
   sprintf(runs,"%d",no[s][2]);
   outtextxy(200,s*30+100,runs);

    }


	for( s=0;s<10;s++)
   {
   for( int j=s+1;j<11;j++)
   if(no[s][2]>no[j][2]) {y=no[s][0];no[s][0]=no[j][0];no[j][0]=y;strcpy(sub,br[s]);strcpy(br[s],br[j]);strcpy(br[j],sub);}

   }


		  setcolor(BLUE);
		outtextxy(78,430,"TOTAL");

	sprintf(moo,"%d",tot);
       outtextxy(200,430,moo);
       settextstyle(7,0,1);
	  outtextxy(340,390,br[10]);

       setcolor(RED);

       outtextxy(400,200,"INDIA WINS");
       setcolor(RED);
	  outtextxy(340,360,"MAN OF THE MATCH");
	   answe='y';

	  break;
	  case 4:

	    cleardevice();
	 setbkcolor(YELLOW);
		  setcolor(BLUE);
    rectangle(10,10,623,455);
   rectangle(5,5,628,460);
		  settextstyle(7,0,1);


	 outtextxy(178,15,"MATCH 4-INDIA VS SOUTH AFRICA");


	outtextxy(208,30,"CENTURION PARK");

	 outtextxy(78,50,"NAMES");
	  outtextxy(190,50,"RUNS");
	     tot=0;
   for( s=0;s<11;s++)
  {  settextstyle(0,0,0);

   setcolor(GREEN);
    sprintf(sno,"%d",s+1);
       outtextxy(78,s*30+100,ar[s]);
	outtextxy(30,s*30+100,sno) ;
     setcolor(GREEN);
    tot=tot+no[s][3];
   sprintf(runs,"%d",no[s][3]);
   outtextxy(200,s*30+100,runs);

    }


	for( s=0;s<10;s++)
   {
   for( int j=s+1;j<11;j++)
   if(no[s][3]>no[j][3]) {y=no[s][0];no[s][0]=no[j][0];no[j][0]=y;strcpy(sub,br[s]);strcpy(br[s],br[j]);strcpy(br[j],sub);}

   }


		  setcolor(BLUE);
		outtextxy(78,430,"TOTAL");

	sprintf(moo,"%d",tot);
       outtextxy(200,430,moo);
       settextstyle(7,0,1);
	  outtextxy(340,390,br[10]);

       setcolor(RED);

       outtextxy(400,200,"INDIA WINS");
       setcolor(RED);
	  outtextxy(340,360,"MAN OF THE MATCH");
	   answe='y';

	  break;
	  case 5:

	    cleardevice();
	 setbkcolor(YELLOW);
		  setcolor(BLUE);
    rectangle(10,10,623,455);
   rectangle(5,5,628,460);
		  settextstyle(7,0,1);


	 outtextxy(178,15,"MATCH 5-INDIA VS SRI LANKA");


	outtextxy(208,30,"COLOMBO");

	 outtextxy(78,50,"NAMES");
	  outtextxy(190,50,"RUNS");
	     tot=0;
   for( s=0;s<11;s++)
  {  settextstyle(0,0,0);

   setcolor(GREEN);
    sprintf(sno,"%d",s+1);
       outtextxy(78,s*30+100,ar[s]);
	outtextxy(30,s*30+100,sno) ;
     setcolor(GREEN);
    tot=tot+no[s][4];
   sprintf(runs,"%d",no[s][4]);
   outtextxy(200,s*30+100,runs);

    }


	for( s=0;s<10;s++)
   {
   for( int j=s+1;j<11;j++)
   if(no[s][4]>no[j][4]) {y=no[s][0];no[s][0]=no[j][0];no[j][0]=y;strcpy(sub,br[s]);strcpy(br[s],br[j]);strcpy(br[j],sub);}

   }


		  setcolor(BLUE);
		outtextxy(78,430,"TOTAL");

	sprintf(moo,"%d",tot);
       outtextxy(200,430,moo);
       settextstyle(7,0,1);
	  outtextxy(340,390,br[10]);

       setcolor(RED);

       outtextxy(400,200,"INDIA WINS");
       setcolor(RED);
	  outtextxy(340,360,"MAN OF THE MATCH");
	   answe='y';

	  break;
	  case 6:

	    cleardevice();
	 setbkcolor(YELLOW);
		  setcolor(BLUE);
    rectangle(10,10,623,455);
   rectangle(5,5,628,460);
		  settextstyle(7,0,1);


	 outtextxy(178,15,"MATCH 6-INDIA VS ENGLAND");


	outtextxy(208,30,"KANDY");

	 outtextxy(78,50,"NAMES");
	  outtextxy(190,50,"RUNS");
	     tot=0;
   for( s=0;s<11;s++)
  {  settextstyle(0,0,0);

   setcolor(GREEN);
    sprintf(sno,"%d",s+1);
       outtextxy(78,s*30+100,ar[s]);
	outtextxy(30,s*30+100,sno) ;
     setcolor(GREEN);
    tot=tot+no[s][5];
   sprintf(runs,"%d",no[s][5]);
   outtextxy(200,s*30+100,runs);

    }


	for( s=0;s<10;s++)
   {
   for( int j=s+1;j<11;j++)
   if(no[s][5]>no[j][5]) {y=no[s][0];no[s][0]=no[j][0];no[j][0]=y;strcpy(sub,br[s]);strcpy(br[s],br[j]);strcpy(br[j],sub);}

   }


		  setcolor(BLUE);
		outtextxy(78,430,"TOTAL");

	sprintf(moo,"%d",tot);
       outtextxy(200,430,moo);
       settextstyle(7,0,1);
	  outtextxy(340,390,br[10]);

       setcolor(RED);

       outtextxy(400,200,"INDIA WINS");
       setcolor(RED);
	  outtextxy(340,360,"MAN OF THE MATCH");
	   answe='y';

	  break;
	  case 7:
	    cleardevice();
	 setbkcolor(YELLOW);
		  setcolor(BLUE);
    rectangle(10,10,623,455);
   rectangle(5,5,628,460);
		  settextstyle(7,0,1);


	 outtextxy(178,15,"MATCH 7-INDIA VS SRI LANKA");


	outtextxy(208,30,"COLOMBO");

	 outtextxy(78,50,"NAMES");
	  outtextxy(190,50,"RUNS");
	     tot=0;
   for( s=0;s<11;s++)
  {  settextstyle(0,0,0);

   setcolor(GREEN);
    sprintf(sno,"%d",s+1);
       outtextxy(78,s*30+100,ar[s]);
	outtextxy(30,s*30+100,sno) ;
     setcolor(GREEN);
    tot=tot+no[s][6];
   sprintf(runs,"%d",no[s][6]);
   outtextxy(200,s*30+100,runs);

    }


	for( s=0;s<10;s++)
   {
   for( int j=s+1;j<11;j++)
   if(no[s][6]>no[j][6]) {y=no[s][0];no[s][0]=no[j][0];no[j][0]=y;strcpy(sub,br[s]);strcpy(br[s],br[j]);strcpy(br[j],sub);}

   }


		  setcolor(BLUE);
		outtextxy(78,430,"TOTAL");

	sprintf(moo,"%d",tot);
       outtextxy(200,430,moo);
       settextstyle(7,0,1);
	  outtextxy(340,390,br[10]);

       setcolor(RED);

       outtextxy(400,200,"INDIA WINS");
       setcolor(RED);
	  outtextxy(340,360,"MAN OF THE MATCH");
	   answe='y';

	  break;
	  case 8:
	    cleardevice();
	 setbkcolor(YELLOW);
		  setcolor(BLUE);
    rectangle(10,10,623,455);
   rectangle(5,5,628,460);
		  settextstyle(7,0,1);


	 outtextxy(178,15,"MATCH 8-INDIA VS AUSTRALIA");


	outtextxy(208,30,"MELBOURNE CRICKET GROUND");

	 outtextxy(78,50,"NAMES");
	  outtextxy(190,50,"RUNS");
	     tot=0;
   for( s=0;s<11;s++)
  {  settextstyle(0,0,0);

   setcolor(GREEN);
    sprintf(sno,"%d",s+1);
       outtextxy(78,s*30+100,ar[s]);
	outtextxy(30,s*30+100,sno) ;
     setcolor(GREEN);
    tot=tot+no[s][7];
   sprintf(runs,"%d",no[s][7]);
   outtextxy(200,s*30+100,runs);

    }


	for( s=0;s<10;s++)
   {
   for( int j=s+1;j<11;j++)
   if(no[s][7]>no[j][7]) {y=no[s][0];no[s][0]=no[j][0];no[j][0]=y;strcpy(sub,br[s]);strcpy(br[s],br[j]);strcpy(br[j],sub);}

   }


		  setcolor(BLUE);
		outtextxy(78,430,"TOTAL");

	sprintf(moo,"%d",tot);
       outtextxy(200,430,moo);
       settextstyle(7,0,1);
	  outtextxy(340,390,br[10]);

       setcolor(RED);

       outtextxy(400,200,"INDIA WINS");
       setcolor(RED);
	  outtextxy(340,360,"MAN OF THE MATCH");
	   answe='y';

	  break;
	  case 9:
	    cleardevice();
	 setbkcolor(YELLOW);
		  setcolor(BLUE);
    rectangle(10,10,623,455);
   rectangle(5,5,628,460);
		  settextstyle(7,0,1);


	 outtextxy(178,15,"MATCH 9-INDIA VS AUSTRALIA");


	outtextxy(208,30,"SYDNEY CRICKET GROUND");

	 outtextxy(78,50,"NAMES");
	  outtextxy(190,50,"RUNS");
	     tot=0;
   for( s=0;s<11;s++)
  {  settextstyle(0,0,0);

   setcolor(GREEN);
    sprintf(sno,"%d",s+1);
       outtextxy(78,s*30+100,ar[s]);
	outtextxy(30,s*30+100,sno) ;
     setcolor(GREEN);
    tot=tot+no[s][8];
   sprintf(runs,"%d",no[s][8]);
   outtextxy(200,s*30+100,runs);

    }


	for( s=0;s<10;s++)
   {
   for( int j=s+1;j<11;j++)
   if(no[s][8]>no[j][8]) {y=no[s][0];no[s][0]=no[j][0];no[j][0]=y;strcpy(sub,br[s]);strcpy(br[s],br[j]);strcpy(br[j],sub);}

   }


		  setcolor(BLUE);
		outtextxy(78,430,"TOTAL");

	sprintf(moo,"%d",tot);
       outtextxy(200,430,moo);
       settextstyle(7,0,1);
	  outtextxy(340,390,br[10]);

       setcolor(RED);

       outtextxy(400,200,"INDIA LOSES");
       setcolor(RED);
	  outtextxy(340,360,"MAN OF THE MATCH");
	   answe='y';

	  break;
	  case 10:
	    cleardevice();
	 setbkcolor(YELLOW);
		  setcolor(BLUE);
    rectangle(10,10,623,455);
   rectangle(5,5,628,460);
		  settextstyle(7,0,1);


	 outtextxy(178,15,"MATCH 10-INDIA VS AUSTRALIA");


	outtextxy(208,30,"THE GABBA");

	 outtextxy(78,50,"NAMES");
	  outtextxy(190,50,"RUNS");
	     tot=0;
   for( s=0;s<11;s++)
  {  settextstyle(0,0,0);

   setcolor(GREEN);
    sprintf(sno,"%d",s+1);
       outtextxy(78,s*30+100,ar[s]);
	outtextxy(30,s*30+100,sno) ;
     setcolor(GREEN);
    tot=tot+no[s][9];
   sprintf(runs,"%d",no[s][9]);
   outtextxy(200,s*30+100,runs);

    }


	for( s=0;s<10;s++)
   {
   for( int j=s+1;j<11;j++)
   if(no[s][9]>no[j][9]) {y=no[s][0];no[s][0]=no[j][0];no[j][0]=y;strcpy(sub,br[s]);strcpy(br[s],br[j]);strcpy(br[j],sub);}

   }


		  setcolor(BLUE);
		outtextxy(78,430,"TOTAL");

	sprintf(moo,"%d",tot);
       outtextxy(200,430,moo);
       settextstyle(7,0,1);
	  outtextxy(340,390,br[10]);

       setcolor(RED);

       outtextxy(400,200,"INDIA WINS");
       setcolor(RED);
	  outtextxy(340,360,"MAN OF THE MATCH");
	   answe='y';

	  break;
	  case 11:
	    cleardevice();
	 setbkcolor(YELLOW);
		  setcolor(BLUE);
    rectangle(10,10,623,455);
   rectangle(5,5,628,460);
		  settextstyle(7,0,1);


	 outtextxy(178,15,"MATCH 11-INDIA VS AUSTRALIA");


	outtextxy(208,30,"WACA GROUND");

	 outtextxy(78,50,"NAMES");
	  outtextxy(190,50,"RUNS");
	     tot=0;
   for( s=0;s<11;s++)
  {  settextstyle(0,0,0);

   setcolor(GREEN);
    sprintf(sno,"%d",s+1);
       outtextxy(78,s*30+100,ar[s]);
	outtextxy(30,s*30+100,sno) ;
     setcolor(GREEN);
    tot=tot+no[s][10];
   sprintf(runs,"%d",no[s][10]);
   outtextxy(200,s*30+100,runs);

    }


	for( s=0;s<10;s++)
   {
   for( int j=s+1;j<11;j++)
   if(no[s][10]>no[j][10]) {y=no[s][0];no[s][0]=no[j][0];no[j][0]=y;strcpy(sub,br[s]);strcpy(br[s],br[j]);strcpy(br[j],sub);}

   }


		  setcolor(BLUE);
		outtextxy(78,430,"TOTAL");

	sprintf(moo,"%d",tot);
       outtextxy(200,430,moo);
       settextstyle(7,0,1);
	  outtextxy(340,390,br[10]);

       setcolor(RED);

       outtextxy(400,200,"INDIA WINS");
       setcolor(RED);
	  outtextxy(340,360,"MAN OF THE MATCH");
	   answe='y';

	  break;
	  case 12:
	    cleardevice();
	 setbkcolor(YELLOW);
		  setcolor(BLUE);
    rectangle(10,10,623,455);
   rectangle(5,5,628,460);
		  settextstyle(7,0,1);


	 outtextxy(178,15,"MATCH 12-INDIA VS AUSTRALIA");


	outtextxy(208,30,"THE HOBART");

	 outtextxy(78,50,"NAMES");
	  outtextxy(190,50,"RUNS");
	     tot=0;
   for( s=0;s<11;s++)
  {  settextstyle(0,0,0);

   setcolor(GREEN);
    sprintf(sno,"%d",s+1);
       outtextxy(78,s*30+100,ar[s]);
	outtextxy(30,s*30+100,sno) ;
     setcolor(GREEN);
    tot=tot+no[s][11];
   sprintf(runs,"%d",no[s][11]);
   outtextxy(200,s*30+100,runs);

    }


	for( s=0;s<10;s++)
   {
   for( int j=s+1;j<11;j++)
   if(no[s][11]>no[j][11]) {y=no[s][0];no[s][0]=no[j][0];no[j][0]=y;strcpy(sub,br[s]);strcpy(br[s],br[j]);strcpy(br[j],sub);}

   }


		  setcolor(BLUE);
		outtextxy(78,430,"TOTAL");

	sprintf(moo,"%d",tot);
       outtextxy(200,430,moo);
       settextstyle(7,0,1);
	  outtextxy(340,390,br[10]);

       setcolor(RED);

       outtextxy(400,200,"INDIA LOSES");
       setcolor(RED);
	  outtextxy(340,360,"MAN OF THE MATCH");
	   answe='y';

	  break;

	  case 13:
	    cleardevice();
	 setbkcolor(YELLOW);
		  setcolor(BLUE);
    rectangle(10,10,623,455);
   rectangle(5,5,628,460);
		  settextstyle(7,0,1);


	 outtextxy(178,15,"MATCH 13-INDIA VS ENGLAND");


	outtextxy(208,30,"MUMBAI");

	 outtextxy(78,50,"NAMES");
	  outtextxy(190,50,"RUNS");
	     tot=0;
   for( s=0;s<11;s++)
  {  settextstyle(0,0,0);

   setcolor(GREEN);
    sprintf(sno,"%d",s+1);
       outtextxy(78,s*30+100,ar[s]);
	outtextxy(30,s*30+100,sno) ;
     setcolor(GREEN);
    tot=tot+no[s][12];
   sprintf(runs,"%d",no[s][12]);
   outtextxy(200,s*30+100,runs);

    }


	for( s=0;s<10;s++)
   {
   for( int j=s+1;j<11;j++)
   if(no[s][12]>no[j][12]) {y=no[s][0];no[s][0]=no[j][0];no[j][0]=y;strcpy(sub,br[s]);strcpy(br[s],br[j]);strcpy(br[j],sub);}

   }


		  setcolor(BLUE);
		outtextxy(78,430,"TOTAL");

	sprintf(moo,"%d",tot);
       outtextxy(200,430,moo);
       settextstyle(7,0,1);
	  outtextxy(340,390,br[10]);

       setcolor(RED);

       outtextxy(400,200,"INDIA WINS");
       setcolor(RED);
	  outtextxy(340,360,"MAN OF THE MATCH");
	   answe='y';

	  break;
	  case 14:
	    cleardevice();
	 setbkcolor(YELLOW);
		  setcolor(BLUE);
    rectangle(10,10,623,455);
   rectangle(5,5,628,460);
		  settextstyle(7,0,1);


	 outtextxy(178,15,"MATCH 14-INDIA VS ENGLAND");


	outtextxy(208,30,"CHENNAI");

	 outtextxy(78,50,"NAMES");
	  outtextxy(190,50,"RUNS");
	     tot=0;
   for( s=0;s<11;s++)
  {  settextstyle(0,0,0);

   setcolor(GREEN);
    sprintf(sno,"%d",s+1);
       outtextxy(78,s*30+100,ar[s]);
	outtextxy(30,s*30+100,sno) ;
     setcolor(GREEN);
    tot=tot+no[s][13];
   sprintf(runs,"%d",no[s][13]);
   outtextxy(200,s*30+100,runs);

    }


	for( s=0;s<10;s++)
   {
   for( int j=s+1;j<11;j++)
   if(no[s][13]>no[j][13]) {y=no[s][0];no[s][0]=no[j][0];no[j][0]=y;strcpy(sub,br[s]);strcpy(br[s],br[j]);strcpy(br[j],sub);}

   }


		  setcolor(BLUE);
		outtextxy(78,430,"TOTAL");

	sprintf(moo,"%d",tot);
       outtextxy(200,430,moo);
       settextstyle(7,0,1);
	  outtextxy(340,390,br[10]);

       setcolor(RED);

       outtextxy(400,200,"INDIA LOSES");
       setcolor(RED);
	  outtextxy(340,360,"MAN OF THE MATCH");
	   answe='y';

	  break;
	  case 15:
	    cleardevice();
	 setbkcolor(YELLOW);
		  setcolor(BLUE);
    rectangle(10,10,623,455);
   rectangle(5,5,628,460);
		  settextstyle(7,0,1);


	 outtextxy(178,15,"MATCH 15-INDIA VS ENGLAND");


	outtextxy(208,30,"KOLKATA-EDEN GARDENS");

	 outtextxy(78,50,"NAMES");
	  outtextxy(190,50,"RUNS");
	     tot=0;
   for( s=0;s<11;s++)
  {  settextstyle(0,0,0);

   setcolor(GREEN);
    sprintf(sno,"%d",s+1);
       outtextxy(78,s*30+100,ar[s]);
	outtextxy(30,s*30+100,sno) ;
     setcolor(GREEN);
    tot=tot+no[s][14];
   sprintf(runs,"%d",no[s][14]);
   outtextxy(200,s*30+100,runs);

    }


	for( s=0;s<10;s++)
   {
   for( int j=s+1;j<11;j++)
   if(no[s][14]>no[j][14]) {y=no[s][0];no[s][0]=no[j][0];no[j][0]=y;strcpy(sub,br[s]);strcpy(br[s],br[j]);strcpy(br[j],sub);}

   }


		  setcolor(BLUE);
		outtextxy(78,430,"TOTAL");

	sprintf(moo,"%d",tot);
       outtextxy(200,430,moo);
       settextstyle(7,0,1);
	  outtextxy(340,390,br[10]);

       setcolor(RED);

       outtextxy(400,200,"INDIA WINS");
       setcolor(RED);
	  outtextxy(340,360,"MAN OF THE MATCH");
	   answe='y';

	  break;
	  case 16:
	    cleardevice();
	 setbkcolor(YELLOW);
		  setcolor(BLUE);
    rectangle(10,10,623,455);
   rectangle(5,5,628,460);
		  settextstyle(7,0,1);


	 outtextxy(178,15,"MATCH 16-INDIA VS ENGLAND");


	outtextxy(208,30,"MOHALI-PCA");

	 outtextxy(78,50,"NAMES");
	  outtextxy(190,50,"RUNS");
	     tot=0;
   for( s=0;s<11;s++)
  {  settextstyle(0,0,0);

   setcolor(GREEN);
    sprintf(sno,"%d",s+1);
       outtextxy(78,s*30+100,ar[s]);
	outtextxy(30,s*30+100,sno) ;
     setcolor(GREEN);
    tot=tot+no[s][15];
   sprintf(runs,"%d",no[s][15]);
   outtextxy(200,s*30+100,runs);

    }


	for( s=0;s<10;s++)
   {
   for( int j=s+1;j<11;j++)
   if(no[s][15]>no[j][15]) {y=no[s][0];no[s][0]=no[j][0];no[j][0]=y;strcpy(sub,br[s]);strcpy(br[s],br[j]);strcpy(br[j],sub);}

   }


		  setcolor(BLUE);
		outtextxy(78,430,"TOTAL");

	sprintf(moo,"%d",tot);
       outtextxy(200,430,moo);
       settextstyle(7,0,1);
	  outtextxy(340,390,br[10]);

       setcolor(RED);

       outtextxy(400,200,"INDIA LOSES");
       setcolor(RED);
	  outtextxy(340,360,"MAN OF THE MATCH");
	   answe='y';

	  break;
	  case 17:
	    cleardevice();
	 setbkcolor(YELLOW);
		  setcolor(BLUE);
    rectangle(10,10,623,455);
   rectangle(5,5,628,460);
		  settextstyle(7,0,1);


	 outtextxy(178,15,"MATCH 17-INDIA VS ENGLAND");


	outtextxy(208,30,"JAIPUR");

	 outtextxy(78,50,"NAMES");
	  outtextxy(190,50,"RUNS");
	     tot=0;
   for( s=0;s<11;s++)
  {  settextstyle(0,0,0);

   setcolor(GREEN);
    sprintf(sno,"%d",s+1);
       outtextxy(78,s*30+100,ar[s]);
	outtextxy(30,s*30+100,sno) ;
     setcolor(GREEN);
    tot=tot+no[s][16];
   sprintf(runs,"%d",no[s][16]);
   outtextxy(200,s*30+100,runs);

    }


	for( s=0;s<10;s++)
   {
   for( int j=s+1;j<11;j++)
   if(no[s][16]>no[j][16]) {y=no[s][0];no[s][0]=no[j][0];no[j][0]=y;strcpy(sub,br[s]);strcpy(br[s],br[j]);strcpy(br[j],sub);}

   }


		  setcolor(BLUE);
		outtextxy(78,430,"TOTAL");

	sprintf(moo,"%d",tot);
       outtextxy(200,430,moo);
       settextstyle(7,0,1);
	  outtextxy(340,390,br[10]);

       setcolor(RED);

       outtextxy(400,200,"INDIA WINS");
       setcolor(RED);
	  outtextxy(340,360,"MAN OF THE MATCH");
	   answe='y';

	  break;
	  case 18:
	    cleardevice();
	 setbkcolor(YELLOW);
		  setcolor(BLUE);
    rectangle(10,10,623,455);
   rectangle(5,5,628,460);
		  settextstyle(7,0,1);


	 outtextxy(178,15,"MATCH 18-INDIA VS ENGLAND");


	outtextxy(208,30,"GWALIOR");

	 outtextxy(78,50,"NAMES");
	  outtextxy(190,50,"RUNS");
	     tot=0;
   for( s=0;s<11;s++)
  {  settextstyle(0,0,0);

   setcolor(GREEN);
    sprintf(sno,"%d",s+1);
       outtextxy(78,s*30+100,ar[s]);
	outtextxy(30,s*30+100,sno) ;
     setcolor(GREEN);
    tot=tot+no[s][17];
   sprintf(runs,"%d",no[s][17]);
   outtextxy(200,s*30+100,runs);

    }


	for( s=0;s<10;s++)
   {
   for( int j=s+1;j<11;j++)
   if(no[s][17]>no[j][17]) {y=no[s][0];no[s][0]=no[j][0];no[j][0]=y;strcpy(sub,br[s]);strcpy(br[s],br[j]);strcpy(br[j],sub);}

   }


		  setcolor(BLUE);
		outtextxy(78,430,"TOTAL");

	sprintf(moo,"%d",tot);
       outtextxy(200,430,moo);
       settextstyle(7,0,1);
	  outtextxy(340,390,br[10]);

       setcolor(RED);

       outtextxy(400,200,"INDIA WINS");
       setcolor(RED);
	  outtextxy(340,360,"MAN OF THE MATCH");
	   answe='y';

	  break;
	  case 19:
	    cleardevice();
	 setbkcolor(YELLOW);
		  setcolor(BLUE);
    rectangle(10,10,623,455);
   rectangle(5,5,628,460);
		  settextstyle(7,0,1);


	 outtextxy(178,15,"MATCH 19-INDIA VS ENGLAND");


	outtextxy(208,30,"BANGALORE");

	 outtextxy(78,50,"NAMES");
	  outtextxy(190,50,"RUNS");
	     tot=0;
   for( s=0;s<11;s++)
  {  settextstyle(0,0,0);

   setcolor(GREEN);
    sprintf(sno,"%d",s+1);
       outtextxy(78,s*30+100,ar[s]);
	outtextxy(30,s*30+100,sno) ;
     setcolor(GREEN);
    tot=tot+no[s][18];
   sprintf(runs,"%d",no[s][18]);
   outtextxy(200,s*30+100,runs);

    }


	for( s=0;s<10;s++)
   {
   for( int j=s+1;j<11;j++)
   if(no[s][18]>no[j][18]) {y=no[s][0];no[s][0]=no[j][0];no[j][0]=y;strcpy(sub,br[s]);strcpy(br[s],br[j]);strcpy(br[j],sub);}

   }


		  setcolor(BLUE);
		outtextxy(78,430,"TOTAL");

	sprintf(moo,"%d",tot);
       outtextxy(200,430,moo);
       settextstyle(7,0,1);
	  outtextxy(340,390,br[10]);

       setcolor(RED);

       outtextxy(400,200,"INDIA WINS");
       setcolor(RED);
	  outtextxy(340,360,"MAN OF THE MATCH");
	   answe='y';

	  break;
	  case 20:
	    cleardevice();
	 setbkcolor(YELLOW);
		  setcolor(BLUE);
    rectangle(10,10,623,455);
   rectangle(5,5,628,460);
		  settextstyle(7,0,1);


	 outtextxy(178,15,"MATCH 20-INDIA VS ENGLAND");


	outtextxy(208,30,"MUMBAI-BRABOURNE STADIUM");

	 outtextxy(78,50,"NAMES");
	  outtextxy(190,50,"RUNS");
	     tot=0;
   for( s=0;s<11;s++)
  {  settextstyle(0,0,0);

   setcolor(GREEN);
    sprintf(sno,"%d",s+1);
       outtextxy(78,s*30+100,ar[s]);
	outtextxy(30,s*30+100,sno) ;
     setcolor(GREEN);
    tot=tot+no[s][19];
   sprintf(runs,"%d",no[s][19]);
   outtextxy(200,s*30+100,runs);

    }


	for( s=0;s<10;s++)
   {
   for( int j=s+1;j<11;j++)
   if(no[s][19]>no[j][19]) {strcpy(sub,br[s]);strcpy(br[s],br[j]);strcpy(br[j],sub);}

   }


		  setcolor(BLUE);
		outtextxy(78,430,"TOTAL");

	sprintf(moo,"%d",tot);
       outtextxy(200,430,moo);
       settextstyle(7,0,1);
	  outtextxy(340,390,br[10]);

       setcolor(RED);

       outtextxy(400,200,"INDIA WINS");
       setcolor(RED);
	  outtextxy(340,360,"MAN OF THE MATCH");
	   answe='y';

	  break;

	   case 21:
	    answe='h';
	  break;
	 }
	   getch();
	  closegraph();
	 }
	 }
	break;


	  case 5:
	 {
		  initgraph(&gd, &gm, "");
       cleardevice();
		 setcolor(BLUE);
    rectangle(10,10,623,455);
   rectangle(5,5,628,460);

       setbkcolor(YELLOW);
       settextstyle(7,0,2);
		outtextxy(50,30,"VARIOUS INTERESTING RESULTS");
	setcolor(BLUE);
	settextstyle(7,0,1);
	outtextxy(50,70,"Press any of the following to display:- ");

	for( c=0,i=99;c<29,i>70;c++,i--)
       {	settextstyle(7,0,1);
		setcolor(RED);

	   outtextxy(c,130,"1. Names of players with the no. of centuries scored. ");
	   outtextxy(i,200,"2. Name of player who scored highest no. of centuries. ");
       outtextxy(c,270, "3.Name of players who were out on duck one or more times. ");
	outtextxy(i,340, "4.Name of the best & worst player.");
		outtextxy(c,410, "5.To go back to previous menu.");
		setcolor(YELLOW);
	   outtextxy(c,130,"1. Names of players with the no. of centuries scored. ");
	   outtextxy(i,200,"2. Name of player who scored highest no. of centuries. ");
       outtextxy(c,270, "3.Name of players who were out on duck one or more times. ");
	outtextxy(i,340, "4.Name of the best & worst player.");
		outtextxy(c,410, "5.To go back to previous menu.");
     }
	   closegraph();
     answer='k';


	for(;answer=='k';)
	{

		  initgraph(&gd, &gm, "");
	    cleardevice();

			 setcolor(BLUE);
    rectangle(10,10,623,455);
   rectangle(5,5,628,460);
	   setbkcolor(YELLOW);
       settextstyle(7,0,2);
		outtextxy(50,30,"VARIOUS INTERESTING RESULTS");
	setcolor(BLUE);
	settextstyle(7,0,1);
	outtextxy(50,70,"Press any of the following to display:- ");
	setcolor(RED);
	   outtextxy(c,130,"1. Names of players with the no. of centuries scored. ");
	   outtextxy(i,200,"2. Name of player who scored highest no. of centuries. ");
       outtextxy(c,270, "3.Name of players who were out on duck one or more times. ");
	outtextxy(i,340, "4.Name of the best & worst player.");
		outtextxy(c,410, "5.To go back to previous menu.");




      cin>>choice;
		for(s=0;s<11;s++)
    { strcpy(br[s],ar[s]);
      strcpy(cr[s],ar[s]);
       strcpy(dr[s],ar[s]);
       subav[s]=av[s];
       subss[s]=ss[s];
	}

      switch(choice)
      {
     case 1:

 {
 cleardevice();
   setbkcolor(12);
	      for(s=0;s<11;s++)
    { strcpy(br[s],ar[s]);
      strcpy(cr[s],ar[s]);
       strcpy(dr[s],ar[s]);
	}

			 for( s=0;s<11;s++)
    {   cen=0;
    for( d=0;d<20;d++)
   if(no[s][d]>100) cen++;
   cent[s]=cen;
   }

       for( s=0;s<10;s++)
   {
   for( int j=s+1;j<11;j++)
   if(cent[s]<cent[j]) {x=cent[s];cent[s]=cent[j];cent[j]=x;
   strcpy(sub,br[s]);
   strcpy(br[s],br[j]);
  strcpy(br[j],sub);
     }               //sorting of names & centuries//

   }
		 setcolor(BLUE);
    rectangle(10,10,623,455);
   rectangle(5,5,628,460);
		  settextstyle(7,0,2);
	 setcolor(RED);
	 outtextxy(78,25,"NAMES");
	  outtextxy(278,25,"NO. OF CENTURIES");
    for( s=0;s<11;s++)
   {    	  settextstyle(7,0,1);
	 setcolor(YELLOW);
     sprintf(ce,"%d",cent[s]);
    outtextxy(278,s*35+60,ce);
     outtextxy(78,s*35+60,br[s]);

     }
      setcolor(BLUE);
     outtextxy(330,420,"Press any key to continue....");
    }
	 answer='k';
	 break;

      case 2:

     {	cleardevice();
       setbkcolor(12);
    for(s=0;s<11;s++)
    { strcpy(br[s],ar[s]);
      strcpy(cr[s],ar[s]);
       strcpy(dr[s],ar[s]);
	}

    for( s=0;s<11;s++)
    {   cen=0;
    for( d=0;d<20;d++)
   if(no[s][d]>100) cen++;
   cent[s]=cen;
   }

       for( s=0;s<10;s++)
   {
   for( int j=s+1;j<11;j++)
   if(cent[s]<cent[j]) {x=cent[s];cent[s]=cent[j];cent[j]=x;
   strcpy(sub,br[s]);
   strcpy(br[s],br[j]);
  strcpy(br[j],sub);
     }               //sorting of names & centuries//

   }
		 setcolor(BLUE);
    rectangle(10,10,623,455);
   rectangle(5,5,628,460);

	  settextstyle(7,0,2);
	 setcolor(RED);
      outtextxy(128,30,"NAME OF PLAYER WHO SCORED");
    outtextxy(128,60," HIGHEST NO. OF CENTURIES");
       setcolor(BLUE);
	 outtextxy(78,100,"NAME");
	  outtextxy(278,100,"NO. OF CENTURIES");
     setcolor(YELLOW);
     sprintf(ce,"%d",cent[0]);
    outtextxy(278,175,ce);
     outtextxy(78,175,br[0]);
     setcolor(BLUE);
     outtextxy(300,400,"Press any key to continue....");
      }
      answer='k';
      break;

	case 3:
       {
       cleardevice();
       setbkcolor(12);
			 for(s=0;s<11;s++)
    { strcpy(br[s],ar[s]);
      strcpy(cr[s],ar[s]);
       strcpy(dr[s],ar[s]);
	}

			 for( s=0;s<11;s++)
 {     zero=0;
    for( d=0;d<20;d++)
   if(no[s][d]==0) zero++;
   zer[s]=zero;
  }

       for( s=0;s<10;s++)
   {
   for( int j=s+1;j<11;j++)
   if(zer[s]>zer[j]) { x=zer[s];zer[s]=zer[j];zer[j]=x;
   strcpy(sub,cr[s]);
   strcpy(cr[s],cr[j]);
  strcpy(cr[j],sub); }
      }
		 //sorting of names & ducks//

	 setcolor(BLUE);
    rectangle(10,10,623,455);
   rectangle(5,5,628,460);

	  settextstyle(7,0,2);
	 setcolor(RED);
	 outtextxy(78,25,"NAMES");
	  outtextxy(278,25,"NO. OF DUCKS");
    for( s=0;s<11;s++)
   {    settextstyle(7,0,1);
	 setcolor(11);
     sprintf(ze,"%d",zer[s]);
    outtextxy(278,s*35+60,ze);
     outtextxy(78,s*35+60,cr[s]);
		setcolor(GREEN);
     outtextxy(330,420,"Press any key to continue....");

     }
	 }
	 answer='k';
	 break;

	 case 4:
       {
	 cleardevice();
       setbkcolor(GREEN);
	for(s=0;s<11;s++)
    { strcpy(br[s],ar[s]);
      subss[s]=ss[s];	}

       for( s=0;s<10;s++)
   {
   for( int j=s+1;j<11;j++)
   if(subss[s]>subss[j]) {y=subss[s];subss[s]=subss[j];subss[j]=y;x=subav[s];subav[s]=subav[j];subav[j]=x;
   strcpy(sub,br[s]);
   strcpy(br[s],br[j]);
  strcpy(br[j],sub);
     }               //sorting of names & total//

   }

    setbkcolor(12);
      setcolor(BLUE);
    rectangle(10,10,623,455);
   rectangle(5,5,628,460);

	 setcolor(RED);
	   settextstyle(7,0,2);
	  outtextxy(278,30,"BEST PLAYER");
	 setcolor(BLUE);
	 settextstyle(7,0,1);
	 outtextxy(78,80,"NAME");
	  outtextxy(478,80,"AVERAGE");
	  outtextxy(278,80,"TOTAL");
	setcolor(11);
	settextstyle(7,0,1);
	sprintf(ave,"%d",subav[10]);
    outtextxy(478,120,ave);
     sprintf(total,"%d",subss[10]);
    outtextxy(278,120,total);
     outtextxy(78,120,br[10]);
	 setcolor(BLUE);
	 settextstyle(7,0,1);
	 outtextxy(78,250,"NAME");
	  outtextxy(478,250,"AVERAGE");
	  outtextxy(278,250,"TOTAL");
	 setcolor(RED);
	settextstyle(7,0,2);
	  outtextxy(278,200,"WORST PLAYER");
      setcolor(11);
      settextstyle(7,0,1);
      sprintf(ave,"%d",subav[0]);
    outtextxy(478,300,ave);
     sprintf(total,"%d",subss[0]);
    outtextxy(278,300,total);
     outtextxy(78,300,br[0]);
	setcolor(GREEN);
     outtextxy(300,420,"Press any key to continue....");
	 }

	 answer='k';
	 break;

      case 5:
      answer='t';
       break;

   }

      for(s=0;s<11;s++)
    { strcpy(br[s],ar[s]);
      strcpy(cr[s],ar[s]);
      strcpy(dr[s],ar[s]);
       subav[s]=av[s];
       subss[s]=ss[s];
       }

	 getch();
	closegraph();

       }

	}
	break;


      case 6:
      ans='n';
      break;

       }    //  switch//

	 }  // for//

	 }  //main//

 void ball()

{
    int gd=9,gm=2;
   initgraph(&gd, &gm, "");
 setcolor(RED);
 setfillstyle(1, RED);
   circle(550,95, 40);
 floodfill(525, 95,RED);
floodfill(555, 105,RED);
     setcolor(YELLOW);
    arc(563, 111, 69,191 , 45);
     arc(565, 115, 69, 191,45);
      getch();


     closegraph();
     }



