#include<graphics.h>

int main ()
{
    int gd = DETECT,gm;
    initgraph(&gd,&gm,"");

    setcolor(YELLOW);
    setfillstyle(SOLID_FILL,YELLOW);
    circle(100,100,50);//Draw the face
    floodfill(100,100,YELLOW);

    setcolor(BLACK);
    setfillstyle(SOLID_FILL,BLACK);
    ellipse(90,90,5,5,0,360);//left eye
    ellipse(110,90,5,5,0,360);//Draw the right eye

        setcolor(RED);
        arc(100,115,200,340,20);//smile


    getch();
    closegraph();
    return 0;


}
