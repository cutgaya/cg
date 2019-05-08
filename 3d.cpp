#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;

class trans{
	public:
	int x,y,x1=100,x2=200,x3=200,x4=100,y1=100,y2=100,y3=200,y4=200,z1=0,z2=0,z3=0,z4=0;
	int x5=100,x6=200,x7=200,x8=100,y5=100,y6=100,y7=200,y8=200,z5=50,z6=50,z7=50,z8=50;
	int gd=USER, gm=999738;
	
	int xt1,yt1,xt2,yt2,xt3,yt3,xt4,yt4,xt5,yt5,xt6,yt6,xt7,yt7,xt8,yt8,zt1,zt2,zt3,zt4,zt5,zt6,zt7,zt8;
	int tx,ty,tz;
	int xr1,yr1,xr2,yr2,xr3,yr3,xr4,yr4,zr1,zr2,zr3,zr4;
	int xr5,xr6,xr7,xr8,yr5,yr6,yr7,yr8,zr5,zr6,zr7,zr8;
	double A;
	int xs1,ys1,xs2,ys2,xs3,ys3,sx,sy;
	
	void insert(){
		cout<<"Enter first point of cube\n";
		cin>>x1>>y1;
		cout<<"Enter second point of cube\n";
		cin>>x2>>y2;
		cout<<"Enter third point of cube\n";
		cin>>x3>>y3;
		cout<<"Enter forth point of cube\n";
		cin>>x4>>y4;
		cout<<"Enter fifth point of cube\n";
		cin>>x5>>y5;
		cout<<"Enter sixth point of cube\n";
		cin>>x6>>y6;
		cout<<"Enter seventh point of cube\n";
		cin>>x7>>y7;
		cout<<"Enter eight point of cube\n";
		cin>>x8>>y8;
	}
	
	void scaling(){
		cout<<"Enter the scaling factor Sx and Sy and Sz"<<endl;
		cin>>tx>>ty>>tz;
		
		xt1=x1*tx;
		yt1=y1*ty;
		xt2=x2*tx;
		yt2=y2*ty;
		xt3=x3*tx;
		yt3=y3*ty;
		xt4=x4*tx;
		yt4=y4*ty;
		xt5=x5*tx;
		yt5=y5*ty;
		xt6=x6*tx;
		yt6=y6*ty;
		xt7=x7*tx;
		yt7=y7*ty;
		xt8=x8*tx;
		yt8=y8*ty;
		
		zt1 = z1*tz;
		zt2 = z2*tz;
		zt3 = z3*tz;
		zt4 = z4*tz;
		zt5 = z5*tz;
		zt6 = z6*tz;
		zt7 = z7*tz;
		zt8 = z8*tz;
		
		
		initgraph(&gd,&gm,NULL);
		line(x1,y1,x2,y2);
		line(x2,y2,x3,y3);
		line(x3,y3,x4,y4);
		line(x4,y4,x1,y1);
		line(x5+(z5-z1),y5+(z5-z1),x6+(z6-z2),y6+(z6-z2));
		line(x6+(z6-z2),y6+(z6-z2),x7+(z7-z3),y7+(z7-z3));
		line(x7+(z7-z3),y7+(z7-z3),x8+(z8-z4),y8+(z8-z4));
		line(x8+(z8-z4),y8+(z8-z4),x5+(z5-z1),y5+(z5-z1));
		
		line(x1,y1,x5+(z5-z1),y5+(z5-z1));
		line(x2,y2,x6+(z6-z2),y6+(z6-z2));
		line(x3,y3,x7+(z7-z3),y7+(z7-z3));
		line(x4,y4,x8+(z8-z4),y8+(z8-z4));
		delay(3000);
		
		cleardevice();
		
		line(xt1,yt1,xt2,yt2);
		line(xt2,yt2,xt3,yt3);
		line(xt3,yt3,xt4,yt4);
		line(xt4,yt4,xt1,yt1);
		line(xt5+(zt5-zt1),yt5+(zt5-zt1),xt6+(zt6-zt2),yt6+(zt6-zt2));
		line(xt6+(zt6-zt2),yt6+(zt6-zt2),xt7+(zt7-zt3),yt7+(zt7-zt3));
		line(xt7+(zt7-zt3),yt7+(zt7-zt3),xt8+(zt8-zt4),yt8+(zt8-zt4));
		line(xt8+(zt8-zt4),yt8+(zt8-zt4),xt5+(zt5-zt1),yt5+(zt5-zt1));
		
		line(xt1,yt1,xt5+(zt5-zt1),yt5+(zt5-zt1));
		line(xt2,yt2,xt6+(zt6-zt2),yt6+(zt6-zt2));
		line(xt3,yt3,xt7+(zt7-zt3),yt7+(zt7-zt3));
		line(xt4,yt4,xt8+(zt8-zt4),yt8+(zt8-zt4));
		//line(xt1,yt1,xt2,yt2);
		//line(xt3,yt3,xt2,yt2);
		//line(xt4,yt4,xt3,yt3);
		//line(xt1,yt1,xt4,yt4);
		delay(5000);
		closegraph();
	}
	
	void translation(){
		cout<<"Enter the translating factor Tx and Ty and Tz"<<endl;
		cin>>tx>>ty>>tz;
		xt1=x1+tx;
		yt1=y1+ty;
		xt2=x2+tx;
		yt2=y2+ty;
		xt3=x3+tx;
		yt3=y3+ty;
		xt4=x4+tx;
		yt4=y4+ty;
		xt5=x5+tx;
		yt5=y5+ty;
		xt6=x6+tx;
		yt6=y6+ty;
		xt7=x7+tx;
		yt7=y7+ty;
		xt8=x8+tx;
		yt8=y8+ty;
		
		zt1 = z1+tz;
		zt2 = z2+tz;
		zt3 = z3+tz;
		zt4 = z4+tz;
		zt5 = z5+tz;
		zt6 = z6+tz;
		zt7 = z7+tz;
		zt8 = z8+tz;
		
		
		initgraph(&gd,&gm,NULL);
		line(x1,y1,x2,y2);
		line(x2,y2,x3,y3);
		line(x3,y3,x4,y4);
		line(x4,y4,x1,y1);
		line(x5+(z5-z1),y5+(z5-z1),x6+(z6-z2),y6+(z6-z2));
		line(x6+(z6-z2),y6+(z6-z2),x7+(z7-z3),y7+(z7-z3));
		line(x7+(z7-z3),y7+(z7-z3),x8+(z8-z4),y8+(z8-z4));
		line(x8+(z8-z4),y8+(z8-z4),x5+(z5-z1),y5+(z5-z1));
		
		line(x1,y1,x5+(z5-z1),y5+(z5-z1));
		line(x2,y2,x6+(z6-z2),y6+(z6-z2));
		line(x3,y3,x7+(z7-z3),y7+(z7-z3));
		line(x4,y4,x8+(z8-z4),y8+(z8-z4));
		
		delay(3000);
		
		line(xt1,yt1,xt2,yt2);
		line(xt2,yt2,xt3,yt3);
		line(xt3,yt3,xt4,yt4);
		line(xt4,yt4,xt1,yt1);
		line(xt5+(zt5-zt1),yt5+(zt5-zt1),xt6+(zt6-zt2),yt6+(zt6-zt2));
		line(xt6+(zt6-zt2),yt6+(zt6-zt2),xt7+(zt7-zt3),yt7+(zt7-zt3));
		line(xt7+(zt7-zt3),yt7+(zt7-zt3),xt8+(zt8-zt4),yt8+(zt8-zt4));
		line(xt8+(zt8-zt4),yt8+(zt8-zt4),xt5+(zt5-zt1),yt5+(zt5-zt1));
		
		line(xt1,yt1,xt5+(zt5-zt1),yt5+(zt5-zt1));
		line(xt2,yt2,xt6+(zt6-zt2),yt6+(zt6-zt2));
		line(xt3,yt3,xt7+(zt7-zt3),yt7+(zt7-zt3));
		line(xt4,yt4,xt8+(zt8-zt4),yt8+(zt8-zt4));
		//line(xt1,yt1,xt2,yt2);
		//line(xt3,yt3,xt2,yt2);
		//line(xt4,yt4,xt3,yt3);
		//line(xt1,yt1,xt4,yt4);
		delay(10000);
		closegraph();
	}
	
	void rotation(){
		cout<<"Enter the Angle by which u have to rotate"<<endl;
		cin>>A;
		cout<<"Select \n1.X axis \n2. Y axis \n3. Z axis \n ";
		int a;
		cin>>a;
		switch(a)
		{
		 case 1: xr1=x1;
		         xr2=x2;
		         xr3=x3;
		         xr4=x4;
		         xr5=x5;
		         xr6=x6;
		         xr7=x7;
		         xr8=x8;
		         
		         yr1=y1*cos(A)-z1*sin(A);
		         yr2=y2*cos(A)-z2*sin(A);
		         yr3=y3*cos(A)-z3*sin(A);
		         yr4=y4*cos(A)-z4*sin(A);
		         yr5=y5*cos(A)-z5*sin(A);
		         yr6=y6*cos(A)-z6*sin(A);
		         yr7=y7*cos(A)-z7*sin(A);
		         yr8=y8*cos(A)-z8*sin(A);
		         
		         zr1=y1*sin(A)+z1*cos(A);
		         zr2=y2*sin(A)+z2*cos(A);
		         zr3=y3*sin(A)+z3*cos(A);
		         zr4=y4*sin(A)+z4*cos(A);
		         zr5=y5*sin(A)+z5*cos(A);
		         zr6=y6*sin(A)+z6*cos(A);
		         zr7=y7*sin(A)+z7*cos(A);
		         zr8=y8*sin(A)+z8*cos(A);
		          
		          break;   
		 case 2:
		         xr1=x1*cos(A)+z1*sin(A);
		         xr2=x2*cos(A)+z2*sin(A);
		         xr3=x3*cos(A)+z3*sin(A);
		         xr4=x4*cos(A)+z4*sin(A);
		         xr5=x5*cos(A)+z5*sin(A);
		         xr6=x6*cos(A)+z6*sin(A);
		         xr7=x7*cos(A)+z7*sin(A);
		         xr8=x8*cos(A)+z8*sin(A);
		         
		         yr1=y1;
		         yr2=y2;
		         yr3=y3;
		         yr4=y4;
		         yr5=y5;
		         yr6=y6;
		         yr7=y7;
		         yr8=y8;
		         
		         zr1=z1*cos(A)-x1*sin(A);
		         zr2=z2*cos(A)-x2*sin(A);
		         zr3=z3*cos(A)-x3*sin(A);
		         zr4=z4*cos(A)-x4*sin(A);
		         zr5=z5*cos(A)-x5*sin(A);
		         zr6=z6*cos(A)-x6*sin(A);
		         zr7=z7*cos(A)-x7*sin(A);
		         zr8=z8*cos(A)-x8*sin(A);
		          break;
		         
		 case 3:
		        xr1=x1*cos(A)-y1*sin(A);
		        xr2=x2*cos(A)-y2*sin(A);
		        xr3=x3*cos(A)-y3*sin(A);
		        xr4=x4*cos(A)-y4*sin(A);
		        xr5=x5*cos(A)-y5*sin(A);
		        xr6=x6*cos(A)-y6*sin(A);
		        xr7=x7*cos(A)-y7*sin(A);
		        xr8=x8*cos(A)-y8*sin(A);
		        
		        yr1=x1*sin(A)-y1*cos(a);
		        yr2=x2*sin(A)-y2*cos(a);
		        yr3=x3*sin(A)-y3*cos(a);
		        yr4=x4*sin(A)-y4*cos(a);
		        yr5=x5*sin(A)-y5*cos(a);
		        yr6=x6*sin(A)-y6*cos(a);
		        yr7=x7*sin(A)-y7*cos(a);
		        yr8=x8*sin(A)-y8*cos(a);
		        
		        zr1=z1;
		        zr2=z2;
		        zr3=z3;
		        zr4=z4;
		        zr5=z5;
		        zr6=z6;
		        zr7=z7;
		        zr8=z8;
		        break;
		        
		
		}
		
		
		initgraph(&gd,&gm,NULL);
		line(x1,y1,x2,y2);
		line(x2,y2,x3,y3);
		line(x3,y3,x4,y4);
		line(x4,y4,x1,y1);
		line(x5+(z5-z1),y5+(z5-z1),x6+(z6-z2),y6+(z6-z2));
		line(x6+(z6-z2),y6+(z6-z2),x7+(z7-z3),y7+(z7-z3));
		line(x7+(z7-z3),y7+(z7-z3),x8+(z8-z4),y8+(z8-z4));
		line(x8+(z8-z4),y8+(z8-z4),x5+(z5-z1),y5+(z5-z1));
		
		line(x1,y1,x5+(z5-z1),y5+(z5-z1));
		line(x2,y2,x6+(z6-z2),y6+(z6-z2));
		line(x3,y3,x7+(z7-z3),y7+(z7-z3));
		line(x4,y4,x8+(z8-z4),y8+(z8-z4));
		delay(3000);
		
		cleardevice();
		
		line(xr1,yr1,xr2,yr2);
		line(xr2,yr2,xr3,yr3);
		line(xr3,yr3,xr4,yr4);
		line(xr4,yr4,xr1,yr1);
		line(xr5+(zr5-zr1),yr5+(zr5-zr1),xr6+(zr6-zr2),yr6+(zr6-zr2));
		line(xr6+(zr6-zr2),yr6+(zr6-zr2),xr7+(zr7-zr3),yr7+(zr7-zr3));
		line(xr7+(zr7-zr3),yr7+(zr7-zr3),xr8+(zr8-zr4),yr8+(zr8-zr4));
		line(xr8+(zr8-zr4),yr8+(zr8-zr4),xr5+(zr5-zr1),yr5+(zr5-zr1));
		
		line(xr1,yr1,xr5+(zr5-zr1),yr5+(zr5-zr1));
		line(xr2,yr2,xr6+(zr6-zr2),yr6+(zr6-zr2));
		line(xr3,yr3,xr7+(zr7-zr3),yr7+(zr7-zr3));
		line(xr4,yr4,xr8+(zr8-zr4),yr8+(zr8-zr4));
		
		
		delay(5000);
		closegraph();
	}
};


int main()
{
	trans t;
	char ch;
	Again:
	cout <<"\nSelect:\n1. Insert\n2. Scaling\n3. Translation\n4. Rotation\n0. Exit"<<endl;
	cin>>ch;	
	switch(ch){
		case '1':
			t.insert();
			goto Again;
		case '2':
			t.scaling();
			goto Again;	
		case '3':
			t.translation();
			goto Again;
		case '4':
			t.rotation();
			goto Again;
		case '0': 
			break;
		default:
			cout<<"Wrong Choice\n";
			goto Again;					
	}
	return 0;
	
	
}
