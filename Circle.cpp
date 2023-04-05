#include<graphics.h>
#include<iostream>
int main ()
{
int gd=DETECT ,gm;
initgraph (&gd,&gm,"");
circle (200,200,80);
getch ();
closegraph();
return 0;
}
