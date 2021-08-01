#include<stdio.h>
#include<dos.h>.
#include<conio.h>
#include<graphics.h>
void rain(int c)
{  int rx,ry;
	 //setcolor(i%15);
	 rx = rand() %630;
	 ry = rand() %480;
	 putpixel(rx,ry,c);
}
main()
{
	int gd = DETECT,gm,maxx , maxy,i,j,k,r1,r2;
	initgraph(&gd , &gm, "c:\\turboc3\\bgi");
	maxx = getmaxx();
	maxy = getmaxy();

   /* for(i=1;i<250;i++)
    {   setcolor(15);
	rectangle(0,0,maxx, maxy);
	line(30,352,620,352);

	//textcolor(15);
	setcolor(i%18-3);
	settextstyle(7,0,5);
	outtextxy(20,50,"HAPPY FRIENDSHIP DAY... ");
	settextstyle(0,0,1);
	setcolor(i+5%18-3);
	outtextxy(150,140,"Life is beautiful beacause friends like you're ");
	outtextxy(180,170,"there, and give me new motivation. Thanks for");
	outtextxy(200,200,"understanding me better than me");
	outtextxy(260,230,"---Your Friend AAKASH ZINZURAO");

	//first man
	setcolor(15);
	setlinestyle(SOLID_LINE,1,2);
	circle(50+i,300,5);
	line(50+i,305,50+i,340);
	line(50+i,315,40+i,325);
	line(50+i,315,60+i,325);
	line(50+i,340,40+i,350);
	line(50+i,340,60+i,350);

	//second man
	circle(600-i,300,5);
	line(600-i,305,600-i,340 );
	line(600-i,315,590-i,325 );
	line(600-i,315,610-i,325 );
	line(600-i,340,590-i,350 );
	rain(0);
	//delay(4);
	cleardevice();

    }*/

    for(i=0;i<250;i++)
    {
	setcolor(15);
	rectangle(0,10,maxx-10,maxy);

	settextstyle(0,0,1);
	setcolor(i+5%18-3);
	outtextxy(180,100,"Friends are like stars in the sky.");
	outtextxy(140,130,"You may not always notice them, but they are always");
	outtextxy(150,160,"there watching over you. Happy Friendship Day!");

	setcolor(i%18-3);
	settextstyle(8,0,5);
	outtextxy(30,350,"HAPPY FRIENDSHIP DAY... ");

	setcolor(i%18-5);
	settextstyle(3,0,1);
	outtextxy(200,420,"---Your Friend AAKASH ZINZURAO");

	rain(i%15);
	rain(i%15);


	setcolor((i%15)+2);
	//left-beat
	line(318,315,305,315);
	line(305,315,302,308);
	line(302,308,298,320);
	line(298,320,294,300);
	line(294,300,290,315);
	line(290,315,285,315);
	line(285,315,280,280);
	line(280,280,275,325);
	line(275,325,272,315);
	line(272,315,267,315);

	//left-man
	line(267,315,257,290);
	line(257,290,247,315);
	line(257,290,257,280);
	line(257,280,247,287);
	line(257,280,267,287);
	circle(257,272,8);

	//prev-left beat
	line(247,315,242,315);
	line(242,315,239,305);
	line(239,305,235,328);
	line(235,328,232,315);
	line(232,315,30,315);

	rain(i%15);
	rain(i%15);
	setcolor((i%15)+1);
	//heart
	line(318,315,290,280);
	line(322,315,350,280);
	arc(306,272,40,210,18);
	arc(334,272,335,140,18);

	setcolor(i%15);
	//right-beat
	line(322,315,335,315);
	line(335,315,339,305);
	line(339,305,341,325);
	line(341,325,345,300);
	line(345,300,349,315);
	line(349,315,354,315);
	line(354,315,360,280);
	line(360,280,366,325);
	line(366,325,370,315);
	line(370,315,375,315);


	//right-man
	line(375,315,385,290);
	line(385,290,395,315);
	line(385,290,385,278);
	line(385,278,375,285);
	line(385,278,395,285);
	circle(385,270,8);

	//right-next-beat
	line(395,315,400,315);
	line(400,315,404,305);
	line(404,305,408,325);
	line(408,325,412,315);
	line(412,315,610,315);
	rain(i%15);
	rain(i%15);
	delay(150);

      }

	//line()

	//outtextxy(250,250,"Happy Friendship Day to All My dear Friend ");
       //	outtextxy(300,270,"---Your Friend AAKASH ZINZURAO");
       //	outtextxy(380,280,"02-08-2020");

	getch();
	closegraph();
	//restorecrtmode();
	return 0;
}