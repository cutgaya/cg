#include<graphics.h>
#include<iostream.h>

void boundary (int x,int y,int fcol,int bcol)
{
	if (getpixel (x,y)!=bcol && getpixel (x,y) != fcol )
	{
		putpixel (x,y,fcol);
		boundary (x+1, y, fcol, bcol);
		boundary (x, y+1, fcol, bcol);
		boundary (x-1, y,  fcol, bcol);
		boundary (x, y-1,  fcol, bcol);

	}
}

int main()
{
	int x,y,r;
	int gd=DETECT, gm;
	printf("Enter x and y positions for circle\n");
	scanf("%d%d",&x,&y);
	printf("Enter radius of circle\n");
	scanf("%d",&r);
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	circle(x,y,r);
	boundary(x,y,6,15);
	delay(20000);
	closegraph();
	return 0;
}
