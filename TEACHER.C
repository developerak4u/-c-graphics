#include<stdio.h>
#include<dos.h>.
#include<conio.h>
#include<graphics.h>
void rain(int x)
{  int i,rx,ry;
	 setcolor(1);

   for(i=0;i<400;i++)
   {
   rx = rand() %600;
   ry = rand() %600;
   circle(rx,ry,2);

   }
}

void main()
{
	int gd = DETECT,gm,maxx , maxy,i,j,k;
	initgraph(&gd , &gm, "c:\\turboc3\\bgi");
	maxx = getmaxx();
	maxy = getmaxy();

    for(i=0;i<250;i++)
	{          setcolor(15);
		rectangle(0,10,maxx-10, maxy-10);
		line(30,350,620,350);

	textcolor(9);
	outtextxy(150,145,"HAPPY TEACHERS DAY SIR... ");
	outtextxy(150,100,"I am lucky that, i got the right ");
	outtextxy(180,115,"mentor and TAECHER at ");
	outtextxy(200,130,"right movment ...");
	outtextxy(260,165,"  ---AAKASH ZINZURAO");

	//Teacher
	circle(50+i,300,5);
	line(50+i,305,50+i,340);

	line(50+i,315,40+i,325);
	line(50+i,315,60+i,325);
	line(50+i,340,40+i,350);
	line(50+i,340,60+i,350);

	//Myself
	circle(600-i,300,5);
	line(600-i,305,600-i,340 );
	line(600-i,315,590-i,325 );
	line(600-i,315,610-i,325 );
	line(600-i,340,590-i,350 );
	line(600-i,340,610-i,350 );

	rain(0);
	delay(2);
	cleardevice();

}
		setcolor(4);

	line(315,100,290,150);
	line(315,100,305,140);
	line(320,100,350,150);
	line(320,100,335,140);
	line(315,100,315,160);
	line(320,100,320,160);
	line(290,150,300,170);
	line(350,150,340,170);
	line(300,170,220,200);
	line(340,170,420,200);

	line(315,185,290,195);
	line(315,185,340,195);
	setcolor(15);

	rectangle(0,10,maxx-10,maxy-10);
	line(30,350,620,350);
	circle(300,300,5);
	line(300,305,300,340);
	line(300,315,290,325);
	line(300,315,310,325);
	line(300,340,290,350);
	line(300,340,310,350);

	circle(320,320,5);
	line(325,320,350,320);
	line(350,320,350,340);
	line(335,320,310,340);
	line(330,320,310,340);
	line(350,340,340,350);
	line(350,340,360,350);





	outtextxy(230,230,"HAPPY TEACHERS DAY... ");
	outtextxy(200,250,"...your student AAKASH ZINZURAO");
	outtextxy(350,270,"05-08-2019");

	getch();
	closegraph();
	restorecrtmode();

}