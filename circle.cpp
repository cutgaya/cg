#include<stdio.h>
#include<graphics.h>
#include<dos.h>
#include<iostream.h>
int main()
{
	int r,d,x,y;
	int xc,yc;
	printf("Enter the value of radius");
	scanf("%d",&r);
	cout << "Enter the centre co" << '\n';
	cin>>xc>>yc;
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	d=3-(2*r);
	x=0;
	y=r;
	while(x<=y)
	{
		putpixel(xc+x,yc+y,WHITE);
		putpixel(xc+y,yc+x,WHITE);
		putpixel(xc+y,yc-x,WHITE);
		putpixel(xc+x,yc-y,WHITE);
		putpixel(xc-x,yc-y,WHITE);
		putpixel(xc-y,yc-x,WHITE);
		putpixel(xc-y,yc+x,WHITE);
		putpixel(xc-x,yc+y,WHITE);
		if(d<0)
		{
			d=d+(4*x)+6;
		}
		else
		{
			d=d+4*(x-y)+10;
			y=y-1;
		}
		x=x+1;
	}
	delay(40000);
	closegraph();
	return 0;
}
