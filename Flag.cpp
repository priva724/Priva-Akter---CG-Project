#include<graphics.h>
#include<iostream>
int main ()
{
int gd=DETECT ,gm;
initgraph (&gd,&gm,"");
rectangle (40,40,50,300);
rectangle (50,50,220,150);
circle(130,100,30);
getch ();
closegraph();
return 0;
}
