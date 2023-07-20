				//C learning app//
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<dos.h>
#include<graphics.h>

int first()
{
	//settextstyle(style, HORIZ_DIR, size);
	// output a message
	//outtextxy(midx, midy, fname[style]);
	//rectangle(left,top,right,bottom);
	int gd=DETECT,gm,d;
	initgraph(&gd,&gm,"");
	setbkcolor(0);
	rectangle(30,50,600,90);
	rectangle(90,95,540,135);
	rectangle(130,140,500,185);
	rectangle(430,250,620,400);
	setcolor(13);
	settextstyle(4,HORIZ_DIR,4);
	outtextxy(140,55,"Welcome In This App");
	setcolor(3);
	outtextxy(165,95,"Computer Science");
	setcolor(BLUE);
	outtextxy(160,150,"Developer: Amitesh");
	settextstyle(4,HORIZ_DIR,3);
	setcolor(RED);
	outtextxy(440,250,"Thought");
	outtextxy(440,260,"-------");
	settextstyle(3,HORIZ_DIR,1);
	setcolor(WHITE);
	outtextxy(440,300,"Life is nothing");
	outtextxy(440,330,"without struggle...!");
	settextstyle(8,HORIZ_DIR,3);
	setcolor(WHITE);
	outtextxy(120,350,"Press any key...!");
	getch();
	closegraph();
	return 0;
}
int page()
{
	int n,pass,len;
	char name[35];
	window(1,1,80,25);
	textbackground(7);
	clrscr();
	window(30,5,53,16);
	textbackground(BLACK);
	clrscr();
	textcolor(3);
	gotoxy(2,1);
	cprintf("<<<REGISTER SCREEN>>>");
	gotoxy(1,2);
	cprintf("------------------------");
	gotoxy(1,3);
	textcolor(RED);
	cprintf("NAME: ");
	gotoxy(7,3);
	gets(name);
	len=strlen(name);
	if(len>0)
	{
		gotoxy(1,5);
		cprintf("PASSWORD: ");
		gotoxy(11,5);
		scanf("%d",&pass);
		if(pass>0)
		{
			textcolor(3);
			gotoxy(1,9);
			cprintf("Login Sucessfully...!");
		}
	}
	getch();
	return 0;
}
int password()
{
	 int n,i;
	 clrscr();
	 window(1,1,80,25);
	 textbackground(YELLOW);
	 clrscr();
	 window(20,10,60,15);
	 textbackground(BLACK);
	 clrscr();
	 label:
	 gotoxy(3,2);
	 textcolor(RED+BLINK);
	 cprintf("Enter the password: ");
	 scanf("%d",&n);
	 if(n==1234)
	 {
		gotoxy(3,5);
		textcolor(GREEN);
		cprintf("Detecting");
		for(i=0;i<=3;i++)
		{
			printf(".");
			delay(1000);
			if(i==3)
			{
				graphic();
			}
		}

	 }
	 else if(n==123)
	 {
		jump:
		window(1,1,80,25);
		textbackground(3);
		clrscr();
		window(30,5,53,16);
		textbackground(5);
		clrscr();
		textcolor(GREEN);
		gotoxy(4,3);
		cprintf("PASSWORD: 1234");
		gotoxy(1,4);
		scanf("%d",&n);
		if(n==0)
		{
			password();
		}
		else
		{
			clrscr();
			goto jump;
		}

	 }
	 else if(n==5)
	 {
		exit(0);
	 }
	 else
	 {
		gotoxy(3,4);
		textcolor(BLUE);
		cprintf("Incorrect...!");
		gotoxy(3,5);
		textcolor(10);
		cprintf("Press Any Key...! ");
		scanf("%d",&n);
		if(n>0)
		{
			clrscr();
			goto label;
		}
	 }
	 getch();
	 return 0;
}
int graphic()
{
	//rectangle(left,top,right,bottom);
	int gd=DETECT,gm,n;
	initgraph(&gd,&gm,"");
	setbkcolor(0);
	rectangle(210,90,410,340);
	rectangle(130,50,500,80);
	setfillstyle(6,RED);
	floodfill(25,23,15);
	settextstyle(4,0,2);
	setcolor(RED);
	outtextxy(250,90,"App Meanu");
	outtextxy(240,100,"---------");
	setcolor(3);
	outtextxy(210,130,"1:Pattern Programs");
	outtextxy(210,180,"2:C Programs");
	outtextxy(210,230,"3:Help Meanu");
	outtextxy(210,250,"---------------");
	setcolor(13);
	outtextxy(210,280,"Chooose Any one...!");
	setcolor(2+BLINK);
	outtextxy(170,50,"Message:Firstly open help meanu");
	if(n==1)
	{
		cleardevice();
	}
	getch();
	closegraph();
	printf("Enter again what you choose....!\n");
	scanf("%d",&n);
	if(n==1)
	{
		pattern();
	}
	else if(n==2)
	{
		c();
	}
	else if(n==3)
	{
		help();
	}
	else if(n==5)
	{
		exit(0);
	}
	else
	{
		graphic();
	}
	return 0;
}
int pattern()
{
	int gd=DETECT,gm,n;
	initgraph(&gd,&gm,"");
	setbkcolor(0);
	rectangle(450,70,470,90);
	rectangle(230,70,250,90);
	rectangle(230,90,470,370);
	rectangle(250,90,450,370);
	setfillstyle(8,BLACK);
	floodfill(25,23,15);
	setcolor(WHITE);
	rectangle(40,10,610,40);
	//rectangle(130,50,500,80);
	settextstyle(4,0,1);
	setcolor(14);
	outtextxy(40,10,"For going back you press 10 and all option are given in serial number");
	settextstyle(4,0,6);
	setcolor(13);
	outtextxy(70,60,"Pattern");
	outtextxy(420,360,"Programs");
	settextstyle(4,0,2);
	setcolor(RED);
	outtextxy(270,90,"~Program Meanu~");
	setcolor(WHITE);
	line(470,120,230,120);
	setcolor(14);
	settextstyle(4,0,2);
	outtextxy(250,120,"~Simple pattern");
	//line(450,150,250,150);
	outtextxy(250,150,"~Traingle pattern");
	//line(450,180,250,180);
	outtextxy(250,180,"~Numeric pattern");
	//line(450,210,250,210);
	outtextxy(250,210,"~Charcter pattern");
	//line(450,240,250,240);
	outtextxy(250,240,"~Half pattern");
	setcolor(7);
	line(450,330,250,330);
	setcolor(GREEN);
	outtextxy(250,330,"ChOoSe AnY oNe.!");
	//jkgotoxy(55,23);
	scanf("%d",&n);
	if(n==1)
	{
		FILE *fp;
		char ch;
		//clrscr();
		setbkcolor(0);
		cleardevice();
		fp=fopen("pattern.c","r");
		while((ch=getc(fp))!=EOF)
		{
			printf("%c",ch);
		}
		fclose(fp);
		gotoxy(1,22);
		printf("Press any key...!");
		getch();
		pattern();
		getch();
	}
	else if(n==2)
	{
		FILE *fp;
		char ch;
		//clrscr();
		setbkcolor(0);
		cleardevice();
		fp=fopen("tra.c","r");
		while((ch=getc(fp))!=EOF)
		{
			printf("%c",ch);
		}
		fclose(fp);
		gotoxy(1,22);
		printf("Press any key...!");
		getch();
		pattern();
		getch();
	}
	else if(n==3)
	{
		FILE *fp;
		char ch;
		//clrscr();
		setbkcolor(0);
		cleardevice();
		fp=fopen("numeric.c","r");
		while((ch=getc(fp))!=EOF)
		{
			printf("%c",ch);
		}
		fclose(fp);
		gotoxy(1,22);
		printf("Press any key...!");
		getch();
		pattern();
		getch();
	}
	else if(n==4)
	{
		FILE *fp;
		char ch;
		//clrscr();
		setbkcolor(0);
		cleardevice();
		fp=fopen("char.c","r");
		while((ch=getc(fp))!=EOF)
		{
			printf("%c",ch);
		}
		fclose(fp);
		gotoxy(1,22);
		printf("Press any key...!");
		getch();
		pattern();
		getch();
	}
	else if(n==5)
	{
		FILE *fp;
		char ch;
		//clrscr();
		setbkcolor(0);
		cleardevice();
		fp=fopen("simple.c","r");
		while((ch=getc(fp))!=EOF)
		{
			printf("%c",ch);
		}
		fclose(fp);
		gotoxy(1,22);
		printf("Press any key...!");
		getch();
		pattern();
		getch();
	}

	else if(n==0)
	{
		exit(0);
	}
	else if(n==10)
	{
		graphic();
	}
	else
	{
		pattern();
	}
	getch();
	return 0;
}
int c()
{
	int gd=DETECT,gm,n;
	initgraph(&gd,&gm,"");
	setbkcolor(0);
	rectangle(450,70,470,90);
	rectangle(230,70,250,90);
	rectangle(230,90,470,370);
	rectangle(250,90,450,370);
	setfillstyle(8,BLACK);
	floodfill(25,23,15);
	setcolor(WHITE);
	rectangle(40,10,610,40);
	//rectangle(130,50,500,80);
	settextstyle(4,0,1);
	setcolor(14);
	outtextxy(40,10,"For going back you press 10 and all option are given in serial number");
	settextstyle(4,0,6);

	settextstyle(4,0,2);
	setcolor(RED);
	outtextxy(270,90,"~Program Meanu~");
	setcolor(WHITE);
	line(470,120,230,120);
	setcolor(13);
	outtextxy(260,30,"C");
	outtextxy(320,360,"Programs");
	setcolor(14);
	settextstyle(4,0,2);
	outtextxy(250,120,"~Find even or odd");
	//line(450,150,250,150);
	outtextxy(250,150,"~Print hello world");
	//line(450,180,250,180);
	outtextxy(250,180,"~Perimeter of square");
	//line(450,210,250,210);
	outtextxy(250,210,"~Password program");
	//line(450,240,250,240);
	outtextxy(250,240,"~Str-len function");
	outtextxy(250,270,"~Pointer program");
	outtextxy(250,300,"~Macro Program");
	setcolor(7);
	line(450,330,250,330);
	setcolor(GREEN);
	outtextxy(250,330,"ChOoSe AnY oNe.!");
	//jkgotoxy(55,23);
	scanf("%d",&n);
	if(n==1)
	{
		FILE *fp;
		char ch;
		//clrscr();
		setbkcolor(0);
		cleardevice();
		fp=fopen("even.c","r");
		while((ch=getc(fp))!=EOF)
		{
			printf("%c",ch);
		}
		fclose(fp);
		gotoxy(1,22);
		printf("Press any key...!");
		getch();
		c();
		getch();
	}
	else if(n==2)
	{
		FILE *fp;
		char ch;
		//clrscr();
		setbkcolor(0);
		cleardevice();
		fp=fopen("hello.c","r");
		while((ch=getc(fp))!=EOF)
		{
			printf("%c",ch);
		}
		fclose(fp);
		gotoxy(1,22);
		printf("Press any key...!");
		getch();
		c();
		getch();
	}
	else if(n==3)
	{
		FILE *fp;
		char ch;
		//clrscr();
		setbkcolor(0);
		cleardevice();
		fp=fopen("p_square.c","r");
		while((ch=getc(fp))!=EOF)
		{
			printf("%c",ch);
		}
		fclose(fp);
		gotoxy(1,22);
		printf("Press any key...!");
		getch();
		c();
		getch();
	}
	else if(n==4)
	{
		FILE *fp;
		char ch;
		//clrscr();
		setbkcolor(0);
		cleardevice();
		fp=fopen("password.c","r");
		while((ch=getc(fp))!=EOF)
		{
			printf("%c",ch);
		}
		fclose(fp);
		gotoxy(1,22);
		printf("Press any key...!");
		getch();
		c();
		getch();
	}
	else if(n==5)
	{
		FILE *fp;
		char ch;
		//clrscr();
		setbkcolor(0);
		cleardevice();
		fp=fopen("str-len.c","r");
		while((ch=getc(fp))!=EOF)
		{
			printf("%c",ch);
		}
		fclose(fp);
		gotoxy(1,22);
		printf("Press any key...!");
		getch();
		c();
		getch();
	}
	else if(n==6)
	{
		FILE *fp;
		char ch;
		//clrscr();
		setbkcolor(0);
		cleardevice();
		fp=fopen("pointer.c","r");
		while((ch=getc(fp))!=EOF)
		{
			printf("%c",ch);
		}
		fclose(fp);
		gotoxy(1,23);
		printf("Press any key...!");
		getch();
		c();
		getch();
	}
	else if(n==7)
	{
		FILE *fp;
		char ch;
		//clrscr();
		setbkcolor(0);
		cleardevice();
		fp=fopen("macro.c","r");
		while((ch=getc(fp))!=EOF)
		{
			printf("%c",ch);
		}
		fclose(fp);
		gotoxy(1,22);
		printf("Press any key...!");
		getch();
		c();
		getch();
	}
	else if(n==0)
	{
		exit(0);
	}
	else if(n==10)
	{
		graphic();
	}
	else
	{
		c();
	}
	getch();
	return 0;
}
int help()
{
	//rectangle(left,top,right,bottom);
	int gd=DETECT,gm,n,i;
	initgraph(&gd,&gm,"");
	setbkcolor(0);
	setcolor(WHITE);
	rectangle(250,90,410,370);
	setcolor(RED);
	rectangle(40,10,610,40);
	//rectangle(130,50,500,80);
	settextstyle(4,0,1);
	setcolor(3);
	outtextxy(40,10,"For going back you press 10 and all option are given in serial number");
	settextstyle(7,0,6);
	setcolor(14);
	outtextxy(210,30,"Help");
	outtextxy(320,360,"Menu");
	settextstyle(4,0,3);
	setcolor(3);
	outtextxy(250,100,"~About App");
	line(410,140,250,140);
	outtextxy(250,150,"~Control");
	line(410,190,250,190);
	outtextxy(250,200,"~Instruction");
	line(410,240,250,240);
	outtextxy(250,250,"~Developer");
	line(410,290,250,290);
	outtextxy(250,300,"~Exit");
	line(410,340,250,340);
	setcolor(BLUE);
	outtextxy(250,340,"~Choose It..!");
	scanf("%d",&n);
	if(n==1)
	{

		cleardevice();
		settextstyle(4,0,5);
		outtextxy(0,60,"~Write again what you choose");
		scanf("%d",&n);
		if(n==1)
		{
			//setcolor(GREEN);
			//settextstyle(7,0,5);
			//outtextxy(0,240,"Loding:");
			cleardevice();
			for(i=0;i<70;i++)
			{
				//setcolor(RED);
				setcolor(3);
				settextstyle(7,0,3);
				outtextxy(0,10,"Loding:");
				printf("%c",220);
				delay(100);
			}
			if(i==70)
			{
			setcolor(12);
			settextstyle(7,0,9);
			outtextxy(0,220,"Complete...!");
			}

		}
		else
		{
			settextstyle(7,0,4);
			outtextxy(0,160,"You not choose this!");
			setcolor(RED);
			settextstyle(7,0,7);
			outtextxy(0,250,"~Press any key..!");
			getch();
			help();
		}


	}
	else if(n==2)
	{
		cleardevice();
		settextstyle(4,0,5);
		outtextxy(0,60,"~Write again what you choose");
		scanf("%d",&n);
		if(n==2)
		{
			//setcolor(GREEN);
			//settextstyle(7,0,5);
			//outtextxy(0,240,"Loding:");
			cleardevice();
			for(i=0;i<70;i++)
			{
				//setcolor(RED);
				setcolor(3);
				settextstyle(7,0,3);
				outtextxy(0,10,"Loding:");
				printf("%c",220);
				delay(100);
			}
			if(i==70)
			{
			setcolor(12);
			settextstyle(7,0,9);
			outtextxy(0,220,"Complete...!");
			}

		}
		else
		{
			settextstyle(7,0,4);
			outtextxy(0,160,"You not choose this!");
			setcolor(RED);
			settextstyle(7,0,7);
			outtextxy(0,250,"~Press any key..!");
			getch();
			help();

		}

	}
	else if(n==3)
	{
		cleardevice();
		settextstyle(4,0,5);
		outtextxy(0,60,"~Write again what you choose");
		scanf("%d",&n);
		if(n==3)
		{
			//setcolor(GREEN);
			//settextstyle(7,0,5);
			//outtextxy(0,240,"Loding:");
			cleardevice();
			for(i=0;i<70;i++)
			{
				//setcolor(RED);
				setcolor(3);
				settextstyle(7,0,3);
				outtextxy(0,10,"Loding:");
				printf("%c",220);
				delay(100);
			}
			if(i==70)
			{
			setcolor(12);
			settextstyle(7,0,9);
			outtextxy(0,220,"Complete...!");
			}

		}
		else
		{
			settextstyle(7,0,4);
			outtextxy(0,160,"You not choose this!");
			setcolor(RED);
			settextstyle(7,0,7);
			outtextxy(0,250,"~Press any key..!");
			getch();
			help();

		}
	}
	else if(n==4)
	{
		cleardevice();
		settextstyle(4,0,5);
		outtextxy(0,60,"~Write again what you choose");
		scanf("%d",&n);
		if(n==4)
		{
			//setcolor(GREEN);
			//settextstyle(7,0,5);
			//outtextxy(0,240,"Loding:");
			cleardevice();
			for(i=0;i<70;i++)
			{
				//setcolor(RED);
				setcolor(3);
				settextstyle(7,0,3);
				outtextxy(0,10,"Loding:");
				printf("%c",220);
				delay(100);
			}
			if(i==70)
			{
			setcolor(12);
			settextstyle(7,0,9);
			outtextxy(0,220,"Complete...!");
			}

		}
		else
		{
			settextstyle(7,0,4);
			outtextxy(0,160,"You not choose this!");
			setcolor(RED);
			settextstyle(7,0,7);
			outtextxy(0,250,"~Press any key..!");
			getch();
			help();

		}
	}
	else if(n==5)
	{
		cleardevice();
		settextstyle(4,0,5);
		outtextxy(0,60,"~Write again what you choose");
		scanf("%d",&n);
		if(n==5)
		{
			//setcolor(GREEN);
			//settextstyle(7,0,5);
			//outtextxy(0,240,"Loding:");
			exit(0);

		}
		else
		{
			settextstyle(7,0,4);
			outtextxy(0,160,"You not choose this!");
			setcolor(RED);
			settextstyle(7,0,7);
			outtextxy(0,250,"~Press any key..!");
			getch();
			help();
		}
	}
	else if(n==10)
	{
		cleardevice();
		settextstyle(4,0,5);
		outtextxy(0,60,"~Write again what you choose");
		scanf("%d",&n);
		if(n==10)
		{
			graphic();
		}
		else
		{
			settextstyle(7,0,4);
			outtextxy(0,160,"You not choose this!");
			setcolor(RED);
			settextstyle(7,0,7);
			outtextxy(0,250,"~Press any key..!");
			getch();
			help();
		}

	}
	else if(n==0)
	{
		cleardevice();
		settextstyle(4,0,5);
		outtextxy(0,60,"~Write again what you choose");
		scanf("%d",&n);
		if(n==0)
		{
			//setcolor(GREEN);
			//settextstyle(7,0,5);
			//outtextxy(0,240,"Loding:");
			learning();

		}
		else
		{
			settextstyle(7,0,4);
			outtextxy(0,160,"You not choose this!");
			setcolor(RED);
			settextstyle(7,0,7);
			outtextxy(0,250,"~Press any key..!");
			getch();
			help();
		}


	}
	else
	{
		help();
	}
	getch();
	closegraph();
	if(n==1)
	{
		AboutHelp();
	}
	else if(n==2)
	{

		help_control();
	}
	else if(n==3)
	{
		help_instruction();
		//printf("hello");
	}
	else if(n==4)
	{
		help_developer();
	}
	else
	{
		help();
	}
	return 0;

}
int AboutHelp()
{
	int gd=DETECT,gm,n;
	initgraph(&gd,&gm,"");
	setbkcolor(0);
	settextstyle(4,0,3);
	outtextxy(200,10,"About App");
	settextstyle(4,0,1);
	outtextxy(0,50,"~This app is made for begineer coder that is new in coding.This app help the");
	outtextxy(0,70,"coder to doing small codes like pattern programs,C example code.In this app ");
	outtextxy(0,90,"only C program coding examples are given.");
	settextstyle(7,0,1);
	outtextxy(0,140,"Made in and made by");
	outtextxy(0,160,"===================");
	outtextxy(0,180,"This app is made by Amitesh Kumar in Ranchi,Jharkhand.");
	outtextxy(0,200,"This app develope in 13/07/2022.");
	settextstyle(4,0,1);
	outtextxy(0,240,"Enjoy this app");
	settextstyle(7,0,1);
	outtextxy(0,260,"==============");
	outtextxy(0,330,"Press any key to go back..!");
	//printf("Press anything to go back...!");
	getch();
	help();
	getch();
	return 0;
}
int help_control()
{
	int gd=DETECT,gm,n;
	initgraph(&gd,&gm,"");
	setbkcolor(0);
	settextstyle(1,0,2);
	outtextxy(240,10,"App Control Key");
	settextstyle(4,0,2);
	outtextxy(0,50,"~First of all if you dont no what is a password than you enter 123.");
	outtextxy(0,80,"~In app there are given three option ie: Password,C pattern and help");
	outtextxy(0,100,"menu so you enter 1 for opening pattern,2 for opening C programd and");
	outtextxy(0,120,"3 for help menu.");
	outtextxy(0,150,"~If you want to exit form app then you press 5.");
	outtextxy(0,180,"~You open any option want to go back then you press 10. ");
	outtextxy(0,210,"~You open C and pattern option you wsnt exit by pressing 0. ");
	outtextxy(0,240,"~You press 3 in Help meanu then one option are open. ");

	outtextxy(0,270,"Enjoy this app");
	settextstyle(7,0,1);
	outtextxy(0,290,"==============");
	outtextxy(0,350,"Press any key to go back..!");
	getch();
	help();
	getch();
	return 0;
}
int help_instruction()
{
	int gd=DETECT,gm,n;
	initgraph(&gd,&gm,"");
	setbkcolor(0);
	settextstyle(4,0,8);
	outtextxy(20,40,"Coming Soon..!");
	settextstyle(7,0,2);
	outtextxy(0,330,"Press any key to go back..!");
	getch();
	help();
	getch();
	return 0;
}
int help_developer()
{
	int gd=DETECT,gm,n;
	initgraph(&gd,&gm,"");
	setbkcolor(0);
	settextstyle(1,0,2);
	outtextxy(240,10,"Developer Contact");
	settextstyle(7,0,1);
	outtextxy(0,50,"This app is  made by Amitesh Kumar. He made this app in 13");
	outtextxy(0,70,"years. He live in Ranchi and he study in ST coloumbus public");
	outtextxy(0,90,"school. He want to became a Software Engineer in Microsoft.");
	outtextxy(0,120,"His favourite subject is Science,Computer and Math.");
	settextstyle(4,0,1);
	outtextxy(0,240,"Enjoy this app");
	settextstyle(7,0,1);
	outtextxy(0,260,"==============");
	outtextxy(0,330,"Press any key to go back..!");
	getch();
	help();
	getch();
	return 0;
}
int learning()
{
	int gd=DETECT,gm,n;
	initgraph(&gd,&gm,"");
	setbkcolor(0);
	rectangle(450,70,470,90);
	rectangle(230,70,250,90);
	rectangle(230,90,470,370);
	rectangle(250,90,450,370);
	setfillstyle(8,BLACK);
	floodfill(25,23,15);
	setcolor(WHITE);
	rectangle(40,10,610,40);
	line(450,330,250,330);
	line(450,280,250,280);
	setbkcolor(0);
	settextstyle(4,0,1);
	setcolor(RED);
	outtextxy(40,10,"For going back you press 10 and all option are given in serial number");
	settextstyle(4,0,5);
	setcolor(14);
	outtextxy(180,50,"C");
	outtextxy(360,360,"Learning");
	settextstyle(4,0,2);
	outtextxy(280,90,"Learning Meanu");
	outtextxy(280,100,"----------");
	setcolor(13);
	outtextxy(250,130,"1:About C language");
	outtextxy(250,180,"2:C Topics");
	outtextxy(250,230,"3:Games.....!");
	setcolor(3);
	outtextxy(260,290,"Chooose Any one...!");
	scanf("%d",&n);
	if(n==1)
	{
		//exit(0);
		about_c();
	}
	else if(n==2)
	{
		topic_c();
	}
	else if(n==3)
	{
		game();
	}
	else
	{
		cleardevice();
		learning();
	}
	getch();
	return 0;
}
int about_c()
{
	int gd=DETECT,gm,n;
	initgraph(&gd,&gm,"");
	setbkcolor(0);
	settextstyle(8,0,2);
	outtextxy(240,10,"About C Language");
	outtextxy(240,20,"--------------");
	settextstyle(7,0,1);
	outtextxy(0,70,"~C language is develope by Dennis Ritchie in Bell laboratories,");
	outtextxy(0,90,"Usa in 1972.C is the most popular language in the world,by");
	outtextxy(0,110,"many programing lnguage is develope like: Java,python etc.");
	outtextxy(0,130,"C language is used in all over the world.");
	outtextxy(0,180,"C syntax and keywords");
	outtextxy(0,200,"============================");
	outtextxy(0,240,"In C language there are many type of syntax that why many");
	outtextxy(0,260,"beginner coder face problem.In C there are 32 type of keywords.");
	outtextxy(0,260,"for eg:int,char float etc.");
	outtextxy(0,310,"Enjoy this app...!");
	outtextxy(0,330,"================");
	outtextxy(0,400,"Press any key...!");
	getch();
	learning();
	return 0;
}
int topic_c()
{
	int gd=DETECT,gm,n;
	initgraph(&gd,&gm,"");
	setbkcolor(0);
	//settextstyle(8,0,2);
	rectangle(450,70,470,90);
	rectangle(230,70,250,90);
	rectangle(230,90,470,370);
	rectangle(250,90,450,370);
	setfillstyle(8,CYAN);
	floodfill(25,23,15);
	setcolor(WHITE);
	rectangle(40,10,610,40);
	settextstyle(4,0,3);
	setcolor(RED);
	outtextxy(300,90,"~Topics~");
	setcolor(WHITE);
	line(470,120,230,120);
	settextstyle(4,0,2);
	outtextxy(250,120,"~Main syntax");
	//line(450,150,250,150);
	outtextxy(250,150,"~Keywords");
	//line(450,180,250,180);
	outtextxy(250,180,"~Variable");
	//line(450,210,250,210);
	outtextxy(250,210,"~Conditional statement");
	//line(450,240,250,240);
	outtextxy(250,240,"~String");
	outtextxy(250,270,"~Pointer");
	outtextxy(250,300,"~Array");
	setcolor(7);
	line(450,330,250,330);
	setcolor(GREEN);
	outtextxy(250,330,"ChOoSe AnY oNe.!");
	settextstyle(4,0,2);
	setcolor(13);
	outtextxy(40,10,"For going back you press 10 and all option are given in serial");
	scanf("%d",&n);
	if(n==1)
	{
		main_syntax();
	}
	else if(n==2)
	{
		keywords();
	}
	else if(n==3)
	{
		variable();
	}
	else if(n==4)
	{
		conditional();
	}
	else if(n==5)
	{
		coming();
	}
	else if(n==6)
	{
		coming();
	}
	else if(n==7)
	{
		coming();
	}
	else if(n==10)
	{
		help();
	}
	else if(n==0)
	{
		exit(0);
	}
	else
	{
		topic_c();
	}
	getch();
	return 0;
}
int main_syntax()
{
	int gd=DETECT,gm,n;
	char ch;
	FILE *fp;
	//clrscr();
	setbkcolor(0);
	initgraph(&gd,&gm,"");
	setbkcolor(0);
	cleardevice();
	fp=fopen("main.c","r");
	while((ch=getc(fp))!=EOF)
	{
		printf("%c",ch);
	}
	fclose(fp);
	gotoxy(1,22);
	printf("Press any key...!");
	getch();
	topic_c();
	return 0;
}
int keywords()
{
	int gd=DETECT,gm,n;
	char ch;
	FILE *fp;
	initgraph(&gd,&gm,"");
	setbkcolor(0);
	settextstyle(4,0,2);
	outtextxy(300,10,"Keywords");
	fp=fopen("keywords.c","r");
	while((ch=getc(fp))!=EOF)
	{
		printf("%c",ch);
	}
	fclose(fp);
	gotoxy(1,22);
	printf("Press any key...!");
	getch();
	topic_c();
	// outtextxy(0,60,"There are 32 keyword in C language");
	getch();
	return 0;
}
int variable()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");
	setbkcolor(0);
	settextstyle(4,0,4);
	outtextxy(260,10,"Variable");
	 settextstyle(4,0,1);
	outtextxy(0,70,"~Variable is a name of memory location where we store data.");
	outtextxy(0,90,"Without variable we don't store data.");
	outtextxy(0,130,"~Some precuation that we take during declaring variable :");
	outtextxy(0,170,"1: Variable always start form letter");
	outtextxy(0,190,"2: Variable could'nt allowed space in between");
	outtextxy(0,210,"3: Vriable not start form digit");
	gotoxy(1,22);
	printf("Press any key...!");
	getch();
	topic_c();
	getch();
	return 0;
}
int conditional()
{
	int gd=DETECT,gm,n;
	initgraph(&gd,&gm,"");
	setbkcolor(0);
	settextstyle(4,0,2);
	outtextxy(210,10,"Conditonal Statement");
	outtextxy(0,60,"There are five type of conditional statement :");
	settextstyle(7,0,2);
	outtextxy(0,80,"=================================");
	settextstyle(4,0,2);
	outtextxy(0,100,"1:if");
	outtextxy(0,130,"2:if else");
	outtextxy(0,160,"3:if-else-if");
	outtextxy(0,190,"4:Nested if-else");
	outtextxy(0,220,"5:Switch statement");
	settextstyle(4,0,2);
	outtextxy(0,290,"ChOoSe AnY oNe...!");
	gotoxy(25,20);
	scanf("%d",&n);
	if(n==1)
	{
		char ch;
		FILE *fp;
		initgraph(&gd,&gm,"");
		setbkcolor(0);
		fp=fopen("if.c","r");
		while((ch=getc(fp))!=EOF)
		{
			printf("%c",ch);
		}
		fclose(fp);
		gotoxy(1,22);
		printf("Press any key...!");
		getch();
		conditional();

	}
	if(n==2)
	{
		char ch;
		FILE *fp;
		initgraph(&gd,&gm,"");
		setbkcolor(0);
		fp=fopen("if-else.c","r");
		while((ch=getc(fp))!=EOF)
		{
			printf("%c",ch);
		}
		fclose(fp);
		gotoxy(1,22);
		printf("Press any key...!");
		getch();
		conditional();

	}
	if(n==3)
	{
		char ch;
		FILE *fp;
		initgraph(&gd,&gm,"");
		setbkcolor(0);
		fp=fopen("if-else-if.c","r");
		while((ch=getc(fp))!=EOF)
		{
			printf("%c",ch);
		}
		fclose(fp);
		gotoxy(1,22);
		printf("Press any key...!");
		getch();
		conditional();

	}
	if(n==4)
	{
		char ch;
		FILE *fp;
		initgraph(&gd,&gm,"");
		setbkcolor(0);
		fp=fopen("nested.c","r");
		while((ch=getc(fp))!=EOF)
		{
			printf("%c",ch);
		}
		fclose(fp);
		gotoxy(1,22);
		printf("Press any key...!");
		getch();
		conditional();

	}
	if(n==5)
	{
		char ch;
		FILE *fp;
		initgraph(&gd,&gm,"");
		setbkcolor(0);
		fp=fopen("switch.c","r");
		while((ch=getc(fp))!=EOF)
		{
			printf("%c",ch);
		}
		fclose(fp);
		gotoxy(1,22);
		printf("Press any key...!");
		getch();
		conditional();

	}
	if(n==0)
	{
		exit(0);
	}
	if(n==10)
	{
		topic_c();
	}
	else
	{
		cleardevice();
		conditional();
	}
	getch();
	return 0;
}
int coming()
{
	int gd=DETECT,gm,n;
	initgraph(&gd,&gm,"");
	setbkcolor(0);
	settextstyle(4,0,8);
	outtextxy(20,40,"Coming Soon..!");
	settextstyle(7,0,2);
	outtextxy(0,330,"Press any key to go back..!");
	getch();
	topic_c();
	getch();
	return(0);
}
int game()
{
	int gd=DETECT,gm,n;
	initgraph(&gd,&gm,"");
	setbkcolor(0);
	settextstyle(4,0,8);
	outtextxy(20,40,"Coming Soon..!");
	settextstyle(7,0,2);
	outtextxy(0,330,"Press any key to go back..!");
	getch();
	learning();
	getch();
	return 0;
}
int main()
{
	first();
	page();
	password();
	graphic();
	pattern();
	c();
	help();
	AboutHelp();
	help_control();
	help_instruction();
	help_developer();
	learning();
	about_c();
	topic_c();
	main_syntax();
	keywords();
	variable();
	conditional();
	game();
	coming();
	getch();
	return 0;

}