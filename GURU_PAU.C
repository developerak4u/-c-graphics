#include<stdio.h>
#include<dos.h>.
#include<conio.h>
#include<graphics.h>
void rain(int x)
{  int i,rx,ry,rxp,ryp;
	 setcolor(4);

   for(i=0;i<300;i++)
   {
   rx = rand() %210;
   ry = rand() %340;
	if(rx>110 && ry>190 && rx<160 ){
		rxp = rx;
		ryp = ry;
	}
	if(rx>165 && ry>160 && ry<180){
		rxp = rx;
		ryp = ry;
	}
	setcolor(i%15);
	circle(rxp,ryp,1);
	circle(rxp+5,ryp-20,1);
	circle(rxp+5,ryp-21,1);
	circle(rxp+1,ryp-1,1);
	//delay(5);
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
		rectangle(0,10,maxx-1, maxy-1);
		line(30,350,610,350);


		//leg-right
		line(40,345,120,347);
		arc(40,334,130,270,10);
		line(32,328,35,300);
		line(120,347,125,345);
		line(65,310,125,333);
		arc(127,340,230,100,7);
		line(65,310,66,300);

		//leg-left
		line(70,310,130,320);
		arc(135,315,230,100,7);
		line(85,285,135,308);
		line(85,286,83,280);

		setcolor(14);
		//dhoti
		arc(50,298,185,360,14);
		line(36,298,13,190);
		line(64,299,84,175);
		arc(50,280,180,340,5);
		line(45,280,14,194);
		arc(52,262,180,350,4);
		line(56,262,83,180);
		arc(47,230,190,340,5);
		line(42,230,30,190);
		line(52,233,65,180);

		//dhoti2
		arc(70,280,260,350,14);
		line(84,280,87,170);
		arc(72,280,260,355,5);
		line(77,280,82,230);

		//hand
		setcolor(15);
		line(235,180,245,178);
		line(205,200,235,180);
		line(205,200,175,206);
		line(175,206,165,204);
		line(225,162,245,160);
		line(225,162,200,172);
		arc(200,175,90,270,3);
		line(200,178,215,177);
		line(215,177,200,190);
		line(200,190,165,200);
		arc(167,202,90,270,2);

		//hand-r
		arc(160,197,100,300,2);
		line(158,195,195,162);
		line(220,152,240,150);
		line(220,152,195,162);
		line(162,195,185,185);

		//setcolor(15);
		setcolor(15);
		outtextxy(300,140,"May Guru's Blessings Bring you ");
		outtextxy(300,160,"Success, Luck, and Fame");
		outtextxy(300,180,"Wish You Happy Guru Purnima");
		outtextxy(300,205,"You are Wonderful, remain the same");
		outtextxy(410,240,"  ---AAKASH ZINZURAO");


	      /*	//Teacher
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
		line(600-i,340,610-i,350 ); */

		rain(0);
		delay(15);
		cleardevice();

       }
	   setcolor(15);
		rectangle(0,10,maxx-1, maxy-1);
		line(30,350,610,350);

		setcolor(15);

		//leg-right
		line(40,345,120,347);
		arc(40,334,130,270,10);
		line(32,328,35,300);
		line(120,347,125,345);
		line(65,310,125,333);
		arc(127,340,230,100,7);
		line(65,310,66,300);

		//leg-left
		line(70,310,130,320);
		arc(135,315,230,100,7);
		line(85,285,135,308);
		line(85,286,83,280);

		setcolor(14);
		//dhoti
		arc(50,298,185,360,14);
		line(36,298,13,190);
		line(64,299,84,175);
		arc(50,280,180,340,5);
		line(45,280,14,194);
		arc(52,262,180,350,4);
		line(56,262,83,180);
		arc(47,230,190,340,5);
		line(42,230,30,190);
		line(52,233,65,180);

		//dhoti2
		arc(70,280,260,350,14);
		line(84,280,87,170);
		arc(72,280,260,355,5);
		line(77,280,82,230);

		//hand
		setcolor(15);
		line(235,180,245,178);
		line(205,200,235,180);
		line(205,200,175,206);
		line(175,206,165,204);
		line(225,162,245,160);
		line(225,162,200,172);
		arc(200,175,90,270,3);
		line(200,178,215,177);
		line(215,177,200,190);
		line(200,190,165,200);
		arc(167,202,90,270,2);

		//hand-r
		arc(160,197,100,300,2);
		line(158,195,195,162);
		line(220,152,240,150);
		line(220,152,195,162);
		line(162,195,185,185);
		rain(0);
       //after for loop
       /*
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
	outtextxy(350,270,"05-08-2019");*/
		setcolor(15);
		settextstyle(7,0,6);
		setcolor(15);
		outtextxy(330,140,"Guru");
		setcolor(15);
		outtextxy(305,70,"Happy");
		setcolor(15);
		outtextxy(295,210,"Paurnima");

		settextstyle(0,0,1);
		outtextxy(145,460,"created by Aakash Zinzurao(M.J. College Jalgaon)");


	getch();
	closegraph();
	restorecrtmode();

}