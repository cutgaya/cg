#include<iostream>
#include<graphics.h>
#include<math.h>

using namespace std;

class trans
{
 public:
  void rot(float x1,float x2,float x3,float  y1,float  y2,float  y3)
  {
    float deg;
    cout<<"Enter the degree";
    cin>>deg;
    int  gd= DETECT, gm;
    initgraph(&gd,&gm,NULL);
    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x1,y1,x3,y3);
    delay(3000);
    x1=x1*cos(deg)-y1*sin(deg);
    y1=x1*sin(deg)+y1*cos(deg);
    
    x2=x2*cos(deg)-y2*sin(deg);
    y2=x2*sin(deg)+y2*cos(deg);
    
    cout<<x2;
    x3=x3*cos(deg)-y3*sin(deg);
    y3=x3*sin(deg)+y3*cos(deg);
    
    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x1,y1,x3,y3);
    delay(10000);
    closegraph();
  }
  void tran(float x1,float x2,float x3,float  y1,float  y2,float  y3)
  {
    float tx,ty;
    cout<<"Enter  Tx,Ty \n";
    cin>>tx>>ty;
    int  gd= DETECT, gm;
    initgraph(&gd,&gm,NULL);
    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x1,y1,x3,y3);
    delay(3000);
    x1=x1+tx;
    y1=y1+ty;
    x2=x2+tx;
    y2=y2+ty;
    x3=x3+tx;
    y3=y3+ty;
    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x1,y1,x3,y3);
    delay(10000);
    closegraph();
  }
  void sca(float x1,float x2,float x3,float  y1,float  y2,float  y3)
  {
    float sx,sy;
    cout<<"Enter Sx and SY";
    cin>>sx>>sy;
    int  gd= DETECT, gm;
    initgraph(&gd,&gm,NULL);
    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x1,y1,x3,y3);
    delay(3000);
    x1=x1*sx;
    y1=y1*sy;
    
    x2=x2*sx;
    y2=y2*sy;
    
    x3=x3*sx;
    y3=y3*sy;
    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x1,y1,x3,y3);
    delay(10000);
    closegraph();
  }
  
  void rota(float x1,float x2,float x3,float  y1,float  y2,float  y3)
  {
  
   float xr,yr;
   cout<<"\n Enter the XR and YR arbitary points \n";
   cin>>xr>>yr;
   int  gd= DETECT, gm;
    initgraph(&gd,&gm,NULL);
    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x1,y1,x3,y3);
    delay(3000);
    x1=x1+xr;
    y1=y1+yr;
    x2=x2+xr;
    y2=y2+yr;
    x3=x3+xr;
    y3=y3+yr;
    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x1,y1,x3,y3);
    delay(10000);
    closegraph();
  
  }
};
int main()
{
    float x1,x2,x3;
    float y1,y2,y3;
    trans obj;
   
    int a;
    Again:
    cout<<"Enter x1,y1 \n";
    cin>>x1>>y1;
    cout<<"Enter x2,y2 \n";
    cin>>x2>>y2;
    cout<<"Enter x3,y3 \n";
    cin>>x3>>y3;
    cout<<" \n 1.Rotation about Origin\n 2.Translation \n3.Scaling\n 4.Rotation about Arbitary Points ";
    cin>>a;
switch(a)
{
  case 1 : obj.rot(x1,x2,x3,y1,y2,y3);
           goto Again;
  case 2 : obj.tran(x1,x2,x3,y1,y2,y3);
           goto Again; 
  case 3: obj.sca(x1,x2,x3,y1,y2,y3);
          goto Again;
  case 4 : obj.rota(x1,x2,x3,y1,y2,y3);
           goto Again;

}
return 0;

}
