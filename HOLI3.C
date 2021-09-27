#include<stdio.h>
#include<graphics.h>
#include<stdio.h>
#include<dos.h>
#include<math.h>
void pump()
{
	int i,c=0;

	setcolor(15);

	//pump shape
	rectangle(240,240,470,300);
	line(470,240,500,270);
	line(470,300,500,270);

	for(i=0;i<230;i++)
	{
		if(i%20==0)
			c++;
		settextstyle(1,HORIZ_DIR,4);
		setcolor(c+2);
		outtextxy(270,200," LOADING...");
		setcolor(c);

		//filled lead of pump
		if(i<30)
		{
			setcolor(c);
			line(500-i,270+i,500-i,270-i);

		}

		// filled pump by lines
		line(470-i,240,470-i,300);

		//pump hand
		setcolor(14);
		rectangle(468-i,240,467-i,300);
		rectangle(468-i,265,240-i,275);
		delay(50);
	}
}
int main()
{
	int gd,gm,i,j,x,y;
	char a[20];
	int i1=0;
	int color;
	int p=300,q=250,r=100;
	gd=DETECT;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	setcolor(15);


	settextstyle(DEFAULT_FONT,0,0);

	//called pump to load
	pump();

	i=0;
	cleardevice();
	while(!kbhit())
	{
	     color=rand()%15+1;
		settextstyle(1,0,4);

			//print color dots at random position

			putpixel(p+rand()%300,q+rand()%240,r+rand()%16);
			//putpixel(p-rand()%300,q+rand()%240,2);

		setlinestyle(DOTTED_LINE,1,1);
		x=rand()%1366;
		y=rand()%768;

		//crackers display
		for(j=0;j!=100;j+=5)
		{
			//prints colored circle at random position
			circle(rand()%620,rand()%480,1);
			for(i=0;i!=360;i+=15)
			{
				setcolor(color+2);
				line(x,y,x+j*cos(3.14/180*i),y+j*sin(i*3.14/180));
			}
		}
		//
		settextstyle(TRIPLEX_FONT,HORIZ_DIR,4.5);
		setcolor(color-1);
		outtextxy(30,150,"Wish you Happy HOLI <Developers/>");
		if(i>250)
		{
			settextstyle(2,HORIZ_DIR,6);
			setcolor(color+4);
			outtextxy(100,220,"On this auspicious occasion of Holi,");
			outtextxy(100,240,"I Hope the canvas of your life gets painted");
			outtextxy(100,260,"with the cutest colours of happiness");
			outtextxy(100,280,"HAPPY HOLI 2021");
			settextstyle(6,HORIZ_DIR,4);
			setcolor(color+2);
			outtextxy(300,310,"-- Aakash Zinzurao");
			settextstyle(2,HORIZ_DIR,5);
			outtextxy(400,360,"( IICMR college, Pune )");
		 }

		 //hide cracker
		 setcolor(0);
		 for(j=0;j!=100;j++)
		 {
			for(i1=0;i1!=360;i1+=15)
			line(x,y,x+j*cos(3.14/180*i1),y+j*sin(i1*3.14/180));
		 }
	}
}