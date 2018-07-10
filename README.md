# C-Graphics
void cleardevice();
void graphdefaults();
char *grapherrormsg( int errorcode );

void putimage(int left, int top, void *ptr, int op);
void putpixel(int x, int y, int color);

void line(int x1, int y1, int x2, int y2);
void lineto(int x2, int y2);
void linerel(int x2, int y2); //relative to current position
void rectangle(int left, int top, int right, int bottom);

void bar(int left, int top, int right, int bottom);
void bar3d(int left, int top, int right, int bottom, int depth, int topflag);

void drawpoly( int num, int *polypoints );
void fillpoly( int num, int *polypoints );

void circle(int x, int y, int radius);
void arc(int x, int y, int stangle, int endangle, int radius);
void pieslice(int x, int y, int stangle, int endangle, int radius);

void ellipse(int x, int y, int stangle, int endangle, int xradius, int yradius);
void sector( int x, int y, int stangle, int endangle, int xradius, int yradius);
void fillellipse(int x, int y, int xradius, int yradius);

void floodfill(int x, int y, int border_color); //color=RED,GREEN etc

unsigned int imagesize(int left, int top, int right, int bottom);

void moveto(int x, int y);
void moverel(int x, int y);

void outtext(char *string);
void outtextxy(int x, int y, char *string);

int textheight(char *string);
int textwidth(char *string);

void getarccoords(struct arccoordstype *var);
int  getbkcolor();
int  getcolor(); 
char* getdrivername();
void getimage(int left, int top, int right, int bottom, void *bitmap);
int  getmaxcolor();
int  getmaxx();
int  getmaxy();
int  getpixel(int x, int y);
int  getx();
int  gety();

void setbkcolor(int color);
void setcolor(int color);
void setfillstyle( int pattern, int color);  							//*		
void setlinestyle( int linestyle, unsigned upattern, int thickness ); 	//*
void settextstyle( int font, int direction, int charsize);            	//*
void setviewport(int left, int top, int right, int bottom, int clip);

enum fill_styles 
{ 
   EMPTY_FILL, 		SOLID_FILL, 
   LINE_FILL, 		LTSLASH_FILL, 
   SLASH_FILL,		BKSLASH_FILL, 
   LTBKSLASH_FILL, 	HATCH_FILL, 
   XHATCH_FILL, 	INTERLEAVE_FILL,
   WIDE_DOT_FILL, 	CLOSE_DOT_FILL, 
   USER_FILL 
};

enum line_styles 
{ 
   SOLID_LINE, 
   DOTTED_LINE, 
   CENTER_LINE, 
   DASHED_LINE, 
   USERBIT_LINE 
};

enum font_names 
{ 
   DEFAULT_FONT, 	TRIPLEX_FONT, 
   SMALL_FONT,  	SANS_SERIF_FONT,
   GOTHIC_FONT, 	SCRIPT_FONT, 
   SIMPLEX_FONT, 	TRIPLEX_SCR_FONT,
   COMPLEX_FONT, 	EUROPEAN_FONT, 
   BOLD_FONT 
};
