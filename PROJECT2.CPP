#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include<dos.h>
void floodfill(int, int, int, int);
int main(void)
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
   int xmax, ymax,i,a;

   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "...\\TC\\bgi");

		       //rocket for loop

   for(i=0;i<=100;i+=5) //launch for loop
	  {
	  setcolor(WHITE);
	line(350,400-i,350,350-i);
	rectangle(350,350-i,360,380-i);

  rectangle(0,0,600,450);


					   //lantern starts
  line(525,0,525,25);

  rectangle(500,25,550,35);
   setfillstyle(1,RED);
floodfill(510,30,WHITE);

  line(500,35,550,35);
  line(500,35,475,65);
  line(550,35,575,65);
  line(475,65,475,110);
  line(575,65,575,110);
  line(475,110,500,140);
  line(575,110,550,140);
  line(500,140,550,140);
  line(500,35,550,140);
  line(500,140,550,35);   		       //polygon ends

  rectangle(500,140,550,150);
     setfillstyle(1,RED);
floodfill(510,145,WHITE);

  line(500,150,495,275);
  line(495,275,505,275);
  line(505,275,510,150);


  line(510,150,516,270);
  line(516,270,526,270);
  line(526,270,520,150);

  line(520,150,526,275);
  line(526,275,536,275);
  line(536,275,530,150);

  line(541,150,536,259);

  line(540,150,546,275);
  line(546,275,556,275);
  line(556,275,550,150);             //lantern ends

  rectangle(0,425,300,450);          //bottom - left part

     setfillstyle(1,RED);
floodfill(2,427,WHITE);


  int d1[10],d2[10],d3[10],di1[10],di2[10],di3[10];
   d1[0]=25;
   d1[1]=400;

   d1[2]=35;
   d1[3]=425;

   d1[4]=65;
   d1[5]=425;

   d1[6]=75;
   d1[7]=400;

   d1[8]=d1[0];
   d1[9]=d1[1];

   drawpoly(5, d1);
setfillstyle(1,BROWN);
floodfill(40,405,WHITE);

   d2[0]=125;
   d2[1]=400;

   d2[2]=135;
   d2[3]=425;

   d2[4]=165;
   d2[5]=425;

   d2[6]=175;
   d2[7]=400;

   d2[8]=d2[0];
   d2[9]=d2[1];

   drawpoly(5, d2);
   setfillstyle(1,BROWN);
floodfill(137,420,WHITE);

    d3[0]=225;
   d3[1]=400;

   d3[2]=235;
   d3[3]=425;

   d3[4]=265;
   d3[5]=425;

   d3[6]=275;
   d3[7]=400;

   d3[8]=d3[0];
   d3[9]=d3[1];

   drawpoly(5, d3);
      setfillstyle(1,BROWN);
floodfill(236,420,WHITE);

   di1[0]=50;
   di1[1]=365;

   di1[2]=45;
   di1[3]=390;

   di1[4]=50;
   di1[5]=400;

   di1[6]=55;
   di1[7]=390;

   di1[8]=di1[0];
   di1[9]=di1[1];

   drawpoly(5, di1);
	setfillstyle(1,YELLOW);
floodfill(47,390,WHITE);
   di2[0]=150;
   di2[1]=365;


   di2[2]=145;
   di2[3]=390;

   di2[4]=150;
   di2[5]=400;

   di2[6]=155;
   di2[7]=390;

   di2[8]=di2[0];
   di2[9]=di2[1];

   drawpoly(5, di2);

      setfillstyle(1,YELLOW);
floodfill(151,390,WHITE);

   di3[0]=250;
   di3[1]=365;

   di3[2]=245;
   di3[3]=390;

   di3[4]=250;
   di3[5]=400;

   di3[6]=255;
   di3[7]=390;

   di3[8]=di3[0];
   di3[9]=di3[1];

   drawpoly(5, di3);
      setfillstyle(1,YELLOW);
floodfill(246,390,WHITE);


rectangle(340,400,360,450);



  //first mala
  setfillstyle(SOLID_FILL,3);
  fillellipse(10,6,6,6);      //1
  setcolor(1);
  fillellipse(15,20,6,6);     //2
   setcolor(1);
  fillellipse(23,33,6,6);     //3
   setcolor(1);
  fillellipse(34,45,6,6);     //4
   setcolor(1);
  fillellipse(45,57,6,6);     //5
   setcolor(1);
  fillellipse(58,67,6,6);     //6
   setcolor(1);
  fillellipse(72,77,6,6);     //7
   setcolor(1);
  fillellipse(84,85,6,6);     //8
   setcolor(1);
  fillellipse(99,92,6,6);     //9
   setcolor(1);
  fillellipse(115,96,6,6);    //10


   setcolor(2);
  fillellipse(131,92,6,6);     //1
   setcolor(2);
  fillellipse(146,85,6,6);    //2
   setcolor(2);
  fillellipse(158,77,6,6);   //3
   setcolor(2);
  fillellipse(172,67,6,6);   //4
   setcolor(2);
  fillellipse(185,57,6,6);    //5
   setcolor(2);
  fillellipse(196,45,6,6);    //6
   setcolor(2);
  fillellipse(205,33,6,6);    //7
   setcolor(2);
  fillellipse(213,20,6,6);   //8
   setcolor(2);
  fillellipse(218,6,6,6);   //9

  //second mala

   setcolor(2);
  fillellipse(236,6,6,6); //1
   setcolor(2);
  fillellipse(241,20,6,6);//2
   setcolor(2);
  fillellipse(249,33,6,6);//3
   setcolor(2);
  fillellipse(260,45,6,6);//4
   setcolor(2);
  fillellipse(271,57,6,6); //5
   setcolor(2);
  fillellipse(284,67,6,6); //6
   setcolor(2);
  fillellipse(298,77,6,6); //7
   setcolor(2);
  fillellipse(310,85,6,6); //8
   setcolor(2);
  fillellipse(325,92,6,6); //9
   setcolor(2);
  fillellipse(341,96,6,6);//10

  setcolor(1);
  fillellipse(357,92,6,6);     //1
   setcolor(2);
  fillellipse(372,85,6,6);    //2
   setcolor(2);
  fillellipse(384,77,6,6);   //3
   setcolor(2);
  fillellipse(398,67,6,6);   //4
   setcolor(2);
  fillellipse(411,57,6,6);    //5
   setcolor(2);
  fillellipse(422,45,6,6);    //6
  setcolor(2);
  fillellipse(431,33,6,6);    //7
   setcolor(2);
  fillellipse(439,20,6,6);   //8
   setcolor(2);
  fillellipse(444,6,6,6);   //9
// cleardevice();

//rocket continued

int j=2;
setcolor(BLACK);
	line(350,400-i,350,350-i);
	rectangle(350,350-i,360,380-i);
	delay(300);
       if(i>90)
	{  setcolor(WHITE);
	  // char msg[80];
	   for(j=2;j<=5;j++)
	   {

	   settextstyle(TRIPLEX_FONT,0,j);
	   outtextxy(300,200,"HAPPY DIWALI");
	   //outtextxy(310,210,"press any key to launch");
	   delay(300);
	   cleardevice();
	   }


 /* clean up */
   getch();
   clrscr();
   closegraph();
   return 0;
}

}
}
