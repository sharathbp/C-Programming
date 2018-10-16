#include<graphics.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
int main()
{
	int gd=DETECT,gm;//gd=graphics driver, gm=graphics mode
	int minx=0, miny=0;
	int maxx=639, maxy=479;
	int i,j,x,y,area;
	void *p;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI"); //initialize the graphics mode
	//base
	rectangle(minx+20,maxy-30,maxx-20,maxy-0);
	setfillstyle(INTERLEAVE_FILL,WHITE);
	floodfill(21,450,WHITE);
	//poles
	setfillstyle(SOLID_FILL,WHITE);
	bar(minx+254,maxy-185,minx+256,maxy-30);
	bar(maxx-254,maxy-185,maxx-256,maxy-30);
	bar(minx+256,maxy-167,maxx-256,maxy-165);
	circle(minx+255,maxy-186,3);
	circle(maxx-255,maxy-186,3);
	floodfill(minx+255,maxy-186,WHITE);
	floodfill(maxx-255,maxy-186,WHITE);
	line(minx+255,maxy-191,minx+255,maxy-189);
	line(maxx-255,maxy-191,maxx-255,maxy-189);
	//main door
	setfillstyle(CLOSE_DOT_FILL,WHITE);
	rectangle(minx+262,maxy-159,maxx-262,maxy-30);
	rectangle(minx+267,maxy-154,maxx-267,maxy-30);
	floodfill(minx+263,maxy-158,WHITE);
	//details in main door
	setfillstyle(SOLID_FILL,WHITE);
	rectangle(minx+269,maxy-152,maxx-269,maxy-30);
	rectangle(minx+272,maxy-149,maxx-272,maxy-30);
	floodfill(minx+270,maxy-151,WHITE);
	//big arch
	setfillstyle(HATCH_FILL,WHITE);
	line(minx+275,maxy-90,minx+275,maxy-30);
	line(maxx-275,maxy-90,maxx-275,maxy-30);
	arc(minx+319,maxy-90,0,45,44);
	arc(minx+319,maxy-90,135,180,44);
	arc(minx,miny,308,314,460);
	arc(639,0,226,232,460);
	floodfill(minx+273,maxy-148,WHITE);
	floodfill(maxx-273,maxy-148,WHITE);
	//inside big arch
	setfillstyle(SOLID_FILL,WHITE);
	bar(minx+275,maxy-80,maxx-275,maxy-78);  	//separation
	rectangle(minx+303,maxy-76,maxx-303,maxy-30);   //below part
	line(minx+306,maxy-60,minx+306,maxy-30);
	line(maxx-306,maxy-60,maxx-306,maxy-30);
	arc(minx+319,maxy-60,0,180,13);
	line(minx+306,maxy-100,minx+306,maxy-80);    	//above part
	line(maxx-306,maxy-100,maxx-306,maxy-80);
	arc(minx+319,maxy-100,0,180,13);
	setfillstyle(WIDE_DOT_FILL,WHITE);	   //fill small arch with dot
	floodfill(minx+319,maxy-100,WHITE);
	floodfill(minx+319,maxy-60,WHITE);

	//dome
	setfillstyle(SLASH_FILL,WHITE);
	arc(minx+319,maxy,70,108,200);
	arc(minx+319,maxy,70,108,197);
	floodfill(minx+263,maxy-180,WHITE);
	setfillstyle(CLOSE_DOT_FILL,WHITE);
	ellipse(minx+319,maxy-240,-50,230,90,80);  //dome
	floodfill(minx+319,maxy-240,WHITE);
	arc(minx+130,miny,310,327,220);
	arc(minx+100,miny,318,332,248);
	arc(minx+68,miny,325,335,280);
	line(minx+319,miny+118,minx+312,miny+160);
	line(minx+319,miny+118,minx+326,miny+160);
	arc(maxx-130,miny,213,230,220);
	arc(maxx-100,miny,208,222,248);
	arc(maxx-68,miny,205,215,280);
	circle(minx+319,miny+110,10);
	//sides
	for(i=0;i<2;i++){
	   setfillstyle(SOLID_FILL,WHITE);
	   bar(abs(minx+192),maxy-150,abs(minx+194),maxy-30);
	   circle(abs(minx+193),maxy-151,3);
	   floodfill(abs(minx+193),maxy-151,WHITE);
	   line(abs(minx+193),maxy-157,abs(minx+193),maxy-152);

	   rectangle(abs(minx+194),maxy-130,abs(minx+254),maxy-30);


	    rectangle(abs(minx+198),maxy-128,abs(minx+250),maxy-80);
	     line(abs(minx+204),maxy-102,abs(minx+204),maxy-80);
	     line(abs(minx+244),maxy-102,abs(minx+244),maxy-80);
	     arc(abs(minx+224),maxy-102,-10,190,20);
	     setfillstyle(INTERLEAVE_FILL,WHITE);
	     floodfill(abs(minx+224),maxy-123,WHITE); //fill top rectangle
	     rectangle(abs(minx+218),maxy-100,abs(minx+230),maxy-80);
	     setfillstyle(HATCH_FILL,WHITE);
	     floodfill(abs(minx+219),maxy-99,WHITE);      //fill rectangle
	    rectangle(abs(minx+198),maxy-78,abs(minx+250),maxy-30);
	     line(abs(minx+204),maxy-50,abs(minx+204),maxy-30);
	     line(abs(minx+244),maxy-50,abs(minx+244),maxy-30);
	     arc(abs(minx+224),maxy-50,0,180,20);
	     setfillstyle(INTERLEAVE_FILL,WHITE);
	     floodfill(abs(minx+224),maxy-71,WHITE);  //fill bottom rectangle
	     rectangle(abs(minx+218),maxy-50,abs(minx+230),maxy-30);
	     setfillstyle(HATCH_FILL,WHITE);
	     floodfill(abs(minx+219),maxy-49,WHITE);  //fill rectangle

	   rectangle(abs(minx+204),maxy-160,abs(minx+244),maxy-130);
	   line(abs(minx+214),maxy-145,abs(minx+214),maxy-130);
	   line(abs(minx+234),maxy-145,abs(minx+234),maxy-130);
	   arc(abs(minx+224),maxy-145,0,180,10);
	   setfillstyle(INTERLEAVE_FILL,WHITE);
	   floodfill(abs(minx+210),maxy-145,WHITE);

	   setfillstyle(SOLID_FILL,WHITE);
	   bar(abs(minx+200),maxy-162,abs(minx+248),maxy-160);
	   circle(abs(minx+224),maxy-195,2);
	   floodfill(abs(minx+224),maxy-195,WHITE);
	   setfillstyle(CLOSE_DOT_FILL,WHITE);
	   arc(abs(minx+224),maxy-170,-30,210,23);
	   floodfill(abs(minx+224),maxy-165,WHITE);



	   //last side
	    setfillstyle(SOLID_FILL,WHITE);
	    bar(abs(minx+150),maxy-145,abs(minx+152),maxy-30);
	    circle(abs(minx+151),maxy-146,3);
	    floodfill(abs(minx+151),maxy-146,WHITE);
	    line(abs(minx+151),maxy-148,abs(minx+151),maxy-152);

	    line(abs(minx+152),maxy-125,abs(minx+192),maxy-130);
	    line(abs(minx+152),maxy-73,abs(minx+192),maxy-78);

	     line(abs(minx+154),maxy-122,abs(minx+190),maxy-127);
	     line(abs(minx+154),maxy-70,abs(minx+190),maxy-75);

	     line(abs(minx+160),maxy-100,abs(minx+160),maxy-74);
	     line(abs(minx+184),maxy-104,abs(minx+184),maxy-74);
	     arc(abs(minx+172),maxy-102,-2,182,12);

	       line(abs(minx+164),maxy-82,abs(minx+180),maxy-84);
	       line(abs(minx+164),maxy-82,abs(minx+164),maxy-74);
	       line(abs(minx+180),maxy-84,abs(minx+180),maxy-74);
	       floodfill(abs(minx+170),maxy-76,WHITE);

	     line(abs(minx+160),maxy-48,abs(minx+160),maxy-30);
	     line(abs(minx+184),maxy-52,abs(minx+184),maxy-30);
	     arc(abs(minx+172),maxy-50,-2,182,12);

	       bar(abs(minx+164),maxy-35,abs(minx+180),maxy-30);
	     setfillstyle(INTERLEAVE_FILL,WHITE);
	     floodfill(abs(minx+172),maxy-115,WHITE);
	     floodfill(abs(minx+164),maxy-63,WHITE);
	    //tombs
	    for(j=0;j<2;j++){
		line(abs(minx+95),maxy-150,abs(minx+90),miny+449);
		line(abs(minx+115),maxy-150,abs(minx+120),miny+449);
		setfillstyle(SOLID_FILL,WHITE);
		bar(abs(minx+90),maxy-60,abs(minx+120),maxy-61);
		bar(abs(minx+90),maxy-100,abs(minx+120),maxy-101);
		bar(abs(minx+90),maxy-150,abs(minx+120),maxy-151);
		rectangle(abs(minx+95),maxy-170,abs(minx+115),maxy-151);
		 line(abs(minx+100),maxy-160,abs(minx+100),maxy-151);
		 line(abs(minx+110),maxy-160,abs(minx+110),maxy-151);
		 arc(abs(minx+105),maxy-160,0,180,5);

		bar(abs(minx+90),maxy-171,abs(minx+120),maxy-170);
		arc(abs(minx+105),maxy-175,-15,195,12);
		circle(abs(minx+105),maxy-188,2);
		floodfill(abs(minx+105),maxy-188,WHITE);
		setfillstyle(CLOSE_DOT_FILL,WHITE);
		floodfill(abs(minx+105),maxy-175,WHITE);
		setfillstyle(XHATCH_FILL,WHITE);
		floodfill(abs(minx+105),maxy-130,WHITE);
		floodfill(abs(minx+105),maxy-70,WHITE);
		floodfill(abs(minx+105),maxy-50,WHITE);

		setfillstyle(INTERLEAVE_FILL,WHITE);
		floodfill(abs(minx+105),maxy-166,WHITE);
		minx-=68;maxy-=20;
	    }
	    minx=0;maxy=479;
	    minx=-maxx;
	}
	minx=0;

//#######################################################################
	setcolor(BLACK);
	settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
	outtextxy(230,maxy-25,"AUTHOR: SHARATH B P");
	setcolor(YELLOW);

	setfillstyle(SOLID_FILL,YELLOW);
	x=138;
	y=479-sqrt(193600-((x-319)*(x-319)));
	circle(x+20,y+20,20);
	floodfill(x+20,y+20,YELLOW);

	area=imagesize(x,y,x+40,y+40);
	p=malloc(area);
	while(!kbhit()){
		putpixel(random(640),random(480),random(16));
		delay(50);
		getimage(x,y,x+40,y+40,p);
		putimage(x,y,p,XOR_PUT);
		x++;
		if(x>500){
			x=138;
		}
		y=479-sqrt(193600-((x-319)*(x-319)));
	      //	arc(319,479,0,180,440);
		putimage(x,y,p,XOR_PUT);


	}

	getch();        //wait until key is pressed
	closegraph();   //closes graphics mode
	return 0;
}
