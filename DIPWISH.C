#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int i;
int mx,my;
int x[10]={500,600,600,550,550,500},y[10]={455,455,455,400,400,455},n,mx,my;


void draw()
{     int c=60;
	line(500-c,455-c,600-c,455-c);
	line(600-c,455-c,550-c,350-c);
	line(550-c,350-c,500-c,455-c);

}
void child()
{
	int i;

	for(i=0;i<100;i++)
	{
		circle(110+i,200,20);
		line(110+i,220,70+i,280);
		line(110+i,220,150+i,280);
		line(110+i,220,110+i,330);
		line(110+i,330,70+i,395);
		line(110+i,330,150+i,395);
		delay(30);
		cleardevice();
		rectangle(1,1,619,479);
	line(10,400,610,400);

	}

}
void main()
{
	int gd,gm,x,y;
	clrscr();
	gd = DETECT;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	mx=getmaxx()/2;
	my=getmaxy()/2;
	rectangle(1,1,619,479);
	line(10,400,610,400);

	draw();
	child();

	getch();
}