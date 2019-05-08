#include<stdio.h>
#include<graphics.h>
#include<graphics.h>

void flood_fill(int x,int y,int old,int new)
{
	if(getpixel(x,y) == old)
	{
		putpixel(x,y,new);
		flood_fill(x+1,y,old,new);
		flood_fill(x,y+1,old,new);
		flood_fill(x-1,y,old,new);
		flood_fill(x,y-1,old,new);
	}
}

int main()
{
	int gd=DETECT,gm;
	int x,y,radius;
	printf("Enter x and y positions for circle\n");
	scanf("%d%d",&x,&y);
	printf("Enter radius of circle\n");
	scanf("%d",&radius);
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	circle(x,y,radius);
	flood_fill(x,y,0,6);
	delay(10000);
	closegraph();
	return 0;
}
