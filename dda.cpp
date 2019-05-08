#include<stdio.h>
#include<graphics.h>
#include<dos.h>

int main()
{
	int x1,y1,x2,y2,dx,dy,x,y,e;
	float m;
	printf("Enter the value of x-coordinate of first point");
	scanf("%d",&x1);
	printf("Enter the value of y-coordinate of first point");
	scanf("%d",&y1);
	printf("Enter the value of x-coordinate of second point");
	scanf("%d",&x2);
	printf("Enter the value of y-coordinate of second point");
	scanf("%d",&y2);
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	dx=x2-x1;
	dy=y2-y1;
	m=dy/dx;
	int c1,c2,d;
	x=x1;
	y=y1;
	if(m<1)
	{
		c1=2*(dy-dx);
		c2=2*dy;
		d=2*dy-dx;
		while(x<x2)
		{
			if(d>=0)
			{
			putpixel(x,y,WHITE);
    y=y+1;
		d=d+c2;
	 		}
   else
	 {
   putpixel(x,y,7);
	 d=d+c1;
 }
	 x=x+1;
}

	 }

	else 	{
		c1=2*(dx-dy);
		c2=2*dx;

d=2*dx-dy;
		while(y<y2)
		{
			if(d>=0)
			{
			putpixel(x,y,WHITE);
		x=x+1;
		d=d+c2;
			}
	 else
	 {
	 putpixel(x,y,7);
	 d=d+c1;
	}
	 y=y+1;
	}
	}
	delay(2000);
	closegraph();
	return 0;
}
