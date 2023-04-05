#include<graphics.h>
#include<iostream>

int main ()
{

    int gd =DETECT,gm;
    initgraph(&gd,&gm,"");

    initwindow(1000,750,"Nure_Alam_Riad");

    setcolor(RED);
    ellipse(100,100,0,360,50,100);
    setfillstyle(1,YELLOW);
    floodfill(101,101,RED);

    setcolor(RED);
    circle(600,410,150);
    setfillstyle(1,YELLOW);
    floodfill(630,415,RED);

    getch ();
    closegraph();

}
