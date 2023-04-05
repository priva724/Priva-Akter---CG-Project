#include<graphics.h>
#include<iostream>
#include<math.h>


using namespace std;

int main ()
{
    float x,y,x1,y1,x2,y2,x3,y3,x4,y4,dx,dy,p ;
    int i,gd=DETECT,gm;

    initgraph (&gd,&gm,"");
    initwindow(800,600,"Bresenham's");

    cout<<"Enter the value of x1 and y1 : ";
    cin>>x1>>y1;
    cout<<"Enter the value of x2 and y2 : ";
    cin>>x2>>y2;
    cout<<"Enter the value of x3 and y3 : ";
    cin>>x3>>y3;
    cout<<"Enter the value of x4 and y4 : ";
    cin>>x4>>y4;


    dx = abs (x2-x1);
    dy = abs (y2-y1);


    x=x1;
    y=y1;

    p=2*dy-dx;
    while (x<=x2)
    {
        if (p>=0)
        {

            putpixel(x,y,YELLOW);
            y=y+1;
            p=p+2*dy-2*dx;

        }
        else{
            putpixel(x,y,YELLOW);
            p=p+2*dy;

        }
         x=x+1;

        delay(100);

        }
    dx = abs (x4-x3);
    dy = abs (y4-y3);


    x=x3;
    y=y3;

    p=2*dy-dx;
    while (x<=x4)
    {
        if (p>=0)
        {

            putpixel(x,y,YELLOW);
            y=y+1;
            p=p+2*dy-2*dx;

        }
        else{
            putpixel(x,y,YELLOW);
            p=p+2*dy;


        }
        x=x+1;
        delay(100);

    }
       getch();
   closegraph();

   return 0 ;

}



