#include<graphics.h>
#include<iostream>


using namespace std;

void plotpoints(int x0,int y0,int x ,int y)
{
    putpixel (x0+x ,y0+y,7);
    putpixel (x0+x ,y0-y,7);
    putpixel (x0-x ,y0+y,7);
    putpixel (x0-x ,y0-y,7);
    putpixel (x0+y ,y0+x,7);
    putpixel (x0+y ,y0-x,7);
    putpixel (x0-y ,y0+x,7);
    putpixel (x0-y ,y0-x,7);

}




void midpoint (int x0,int y0,int r)
{
    int x=0,y=r;
    int f=1-r;
    plotpoints(x0,y0,x,y);

    while (x<y)
    {
        x++;
        if (f<0)
        {
            f=f+(2*x)+1;
        }
        else
        {
            y--;
            f=f+(2*x)+1-(2*y);
        }
        plotpoints(x0,y0,x,y);
        delay (100);
    }

}

circle()
{
   int gd=DETECT ,gm,x,y,r;
   initgraph(&gd,&gm,"");
   initwindow (800,600,"Midpoint Circle");
   cout<<"Enter The Value of center co-ordinate : ";
   cin>>x>>y;
   cout<<"Enter Radious of the circle : ";
   cin>>r;
   midpoint(x,y,r);
   getch();

   return 0;
}
int main ()
{
    circle();
}
