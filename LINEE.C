#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>

void opennf();
void openf();
int insertl();
void insertAt();
void delet();
struct line* copy();
void cut();
void paste();
void replace();
void display();
int length();
void save();

void start()
{
	int gd,gm,i,j;
	clrscr();
	gd = DETECT;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	outtextxy(220,200,"LINE EDITOR INITIALIZINNG ");
	outtextxy(260,215,"PLEASE WAIT... ");


	for(i=0;i<620;i++)
	{
		 /*	line(0,300,10+i,300);
		line(0,301,10+i,301);
		line(0,302,10+i,302);*/
		circle(3+i,301,3);
		delay(10);

		if(i/50 >= 1)
		setbkcolor(i/60);
		else
		setbkcolor(13);
	}
	cleardevice();
	closegraph();
}
void load()
{
	int gd,gm,i,j;
	clrscr();
	gd = DETECT;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

	for(i=0;i<600;i++)
	{
	circle(70+i,240,10);
	circle(50+i,240,10);
	circle(30+i,240,10);
	circle(10+i,240,10);

		delay(5);
		cleardevice();

	}

}
struct line
{  char data[80];
   struct line* link;
};
int len=0;

struct line* root=NULL;

//struct line* dat = NULL;
struct line* copyp;


FILE *fp;
//FILE *fp1;

void main()
{
    int ch;

    start();
    textbackground(11);
//    load();
   do{

	 printf("\n|--------------------------------| MENU |-------------------------------------|");
	 printf("\n| --------------------------------------------------------------------------| |");
	 printf("\n| |   1.Open New File    2.Open File      3.Insert line      4.Insert At    | |");
	 printf("\n| |   5.DeleteLine       6.Copy line      7.Cut Line         8.Paste Line   | |");
	 printf("\n| |   9.Display File    10.Replace Line  11.No of lines     12.Save File    | |");
	 printf("\n| |  13.Exit                                                                | |");
	 printf("\n|-----------------------------------------------------------------------------|" );
	  printf("\n Enter choice >> ");
	  scanf("%d",&ch);
	 printf("|-----------------------------------------------------------------------------|");
	 switch(ch)
	  {
	     case 1:opennf();
		break;
	     case 2:openf();
		break;
	     case 3:printf("'\(If You want to stop insering line ,the enter s \)");
		insertl();
		break;
	     case 4:insertAt();
		break;
	     case 5:delet();
		break;
	     case 6:copy();
		break;
	     case 7:cut();
		break;
	     case 8:paste();
		break;
	     case 9:display();
		break;
	     case 10:replace();
		break;
	     case 11:printf("No of Lines: %d",length());
		break;
	     case 12:save();
		break;
	     case 13:printf("\n Thank You...!");
		break;
	     default:printf("\n Enter a valid chice ");
	}
}while(ch!=13);
}
void opennf()
{
	char lin[80],nm[15],ch;
	printf("\n Enter file name :");
	scanf("%s",&nm);


	fp=fopen(nm,"w+");

	if(fp)
		printf("\n File is opened successfully...");
	else
		printf("\n Somthing wrong..?");
	if(getch())
		clrscr();

}

void openf()
{       char dt[80],nm[15];
	printf("\n Enter file name :");
	flushall();
	gets(nm);
	printf("\n");
	fp = fopen(nm,"r+");
	if(fp!=NULL)
	{
	     while(1)
	     {
		 fgets(dt,sizeof(dt),fp);
		if(feof(fp))
			break;
		 puts(dt);
		 fetch(dt);
	     }
	}
	else
	{
	   printf("\n File not found ");
	}
	if(getch())
		clrscr();
}
int insertl()
{
	struct line* temp;

	temp = (struct line*)malloc(sizeof(struct line));
	printf("\nLine %d: ",length()+1);
	flushall();
	gets(temp->data);

	temp->link=NULL;
	if(root == NULL)
	 {
		root = temp;
		fputs(temp->data,fp);
	 }
	else
	{
		struct line* p;
		p=root;
		while(p->link!=NULL)
		{
			p = p->link;
		}
		p->link=temp;
		fputs(temp->data,fp);
	}
	if(getche()=='s')
	{   clrscr();
	  return 0;
	}
      else
	 insertl();
}

void insertAt()
{
	struct line* temp,*p;
	int loc,leng,i=1;
	printf("\n Ente Line no :");
	scanf("%d",&loc);
	leng = length();
	if(loc>leng || loc==0)
	{
		printf("\n Invalid location ");
	}
	else if(loc==1)
	{
		temp = (struct line*)malloc(sizeof(struct line));
		printf("\n Enter line :");
		flushall();
		gets(temp->data);
		temp->link=root;
		root= temp;
		printf("\n Line inserted successfully at %d position...! ",loc);
	}
	else
	{
		p = root;
		while(i<loc-1)
		{
		   p=p->link;
		   i++;
		}
		temp = (struct line*)malloc(sizeof(struct line));
		printf("\n Enter line :");
		flushall();
		gets(temp->data);
		temp->link=p->link;
		p->link=temp;
		printf("\n Line inserted successfully at %d position...! ",loc);
	}

	getch();
	clrscr();
}
void delet()
{
	struct line* temp;
	int loc;
	printf("\n Enter Line No :");
	scanf("%d",&loc);
	if(loc>length())
	{
		printf("\nThe no does not exist ...!");
	}
	else if(loc==1)
	{
		temp=root;
		root = temp->link;
		temp->link=NULL;
		free(temp);
		printf("\n Line deleted successfully from %d position...! ",loc);
	}
	else
	{
		int i=1;
		struct line* p=root,*q;
		while(i<loc-1)
		{
			p=p->link;
			i++;
		}
		q=p->link;
		p->link=q->link;
		q->link=NULL;
		free(q);
		printf("\n Line deleted successfully from %d position...! ",loc);
	}
	if(getch())
	clrscr();
}
struct line* copy()
{
	struct line* p;
	int loc,i=1;
	p = (struct line*)malloc(sizeof(struct line));
	printf("\n Enter Line no to Copy :");
	scanf("%d",&loc);
	if(loc>length())
	{
	  printf("\n Invalid line no...!");
	}
	else if(loc==1)
	{
		puts(root);
		copyp=root;
	}
	else
	{ p=root;
	  while(i<loc)
	  {
		p=p->link;
		i++;

	  }
	  puts(p);
	  copyp = p;
	}

}
void cut()
{

}
 void paste()
{
	struct line* temp,*p;
	int loc,i=1;
	printf("\n Ente Line no :");
	scanf("%d",&loc);
	if(copyp == NULL)
		printf("\n Please copy or cut first...");
	else if(loc>length() || loc==0)
	{
		printf("\n Invalid location ");
	}
	else if(loc==1)
	{
		temp = (struct line*)malloc(sizeof(struct line));
		temp=copyp;
		temp->link=root;
		root= temp;
		printf("\n Line inserted successfully at %d position...! ",loc);
	}
	else
	{
		p = root;
		while(i<loc-1)
		{
		   p=p->link;
		   i++;
		}
		temp = (struct line*)malloc(sizeof(struct line));
		temp=copyp;
		temp->link=p->link;
		p->link=temp;
		printf("\n Line inserted successfully at %d position...! ",loc);
	}
	puts(copyp);

	getch();
	clrscr();
 }
void display()
{
	struct line* temp;
	int i=1;
	temp = root;

	while(temp!=NULL)
	{
	  printf("\n Line %d : %s\n",i,temp->data);
	  temp = temp->link;
	  i++;
	}
	if(getch())
		clrscr();

}
void replace()
{
}
int length()
{
	int c=0;
	struct line* temp;
	temp=root;
	while(temp!=NULL)
	{
		c++;
		temp = temp->link;
	}
	len = c;
	return c;
}
void save()
{
	struct line* temp;
	int i=1;
	temp = root;
	if(fp!=NULL)
	{
	while(temp!=NULL)
	{
		fputs(temp->data,fp);
		fprintf(fp,"\n");
		temp = temp->link;
		i++;
	}
	printf("\n File saved successfully...!");
	}
	else if(fp!=NULL)
	{
		while(temp!=NULL)
		{
		fputs(temp->data,fp);
		fprintf(fp,"\n");
		temp = temp->link;
		i++;
		}
		printf("\n File saved successfully...!");
	}
	else
		printf("\n Something Wrong ..!");
	if(getch())
		clrscr();
}

int fetch(char dta[80])
{
	struct line* temp;
	 int i;
	temp = (struct line*)malloc(sizeof(struct line));

	for(i=0;i<=strlen(dta);i++)
	{
	temp->data[i]=dta[i];
	}
	temp->link=NULL;
	if(root == NULL)
	 {
		root = temp;
	 }
	else
	{
		struct line* p;
		p=root;
		while(p->link!=NULL)
		{
			p = p->link;
		}
		p->link=temp;
	}
}
void clear()
{
		int i=1;
		struct line* p=root,*q;
		while(i<length());
		{
			p=p->link;
			i++;
		}
		q=p->link;
		p->link=q->link;
		free(q);
		printf("\n cleared successfully..!");
}





