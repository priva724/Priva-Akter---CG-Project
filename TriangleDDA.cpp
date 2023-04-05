#include<iostream>
#include<graphics.h>

using namespace std ;
void DDA (int x1, int y1, int x2, int y2)
{

    int dx =x2-x1;
    int dy = y2-y1;
    int step = abs(dx)>abs(dy) ? abs (dx):abs (dy);

    float xinc = dx/(float)step ;
    float yinc = dy/(float)step ;

    float x= x1;
    float y= y1;


    for (int i = 0; i<=step; i++)

    {
        putpixel(x,y,WHITE);
        x+=xinc;
        y+=yinc;

    }

}

int main ()
{

    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");

    int x1=200,y1=200;
    int x2=400,y2=300;
    int x3=300,y3=100;

    DDA(x1,y1,x2,y2);
    DDA(x2,y2,x3,y3);
    DDA(x3,y3,x1,y1);

    getch();
    closegraph();
    return 0 ;
}
