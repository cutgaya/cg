#include<stdio.h>
#include<graphics.h>
#include<dos.h>
int main()
{
	int r,x1,y1;
	float d,x,y;
	printf("Enter the x and y values of center");
	scanf("%d%d",&x1,&y1);
	printf("Enter the value of radius");
	scanf("%d",&r);
	int gd=DETECT, gm;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	x=0;
	y=r;
	d = 1 - r;
while(x<=y)
	{
		putpixel(x1+x,y1+y,WHITE);
		putpixel(x1+y,y1+x,WHITE);
		putpixel(x1-x,y1-y,WHITE);
		putpixel(x1-y,y1-x,WHITE);
		putpixel(x1+x,y1-y,WHITE);
		putpixel(x1-x,y1+y,WHITE);
		putpixel(x1+y,y1-x,WHITE);
		putpixel(x1-y,y1+x,WHITE);
		if(d<0)
		{
			d = d + 2*x + 3;
		}
		else
		{

			y = y - 1;
			d = d + 2*x - 2*y + 5;
		}
			x = x + 1;
		}
	delay(20000);
	closegraph();
	return 0;
}
