#include <stdio.h>
  #include <conio.h>
  #include <dos.h>
  #include <graphics.h>

  /* draws face and eyes of the smiley */
  void smiley(int midx, int midy, int radius) {
        /* drawing face of the smiley */
        setcolor(YELLOW);
        setfillstyle(SOLID_FILL, YELLOW);
        circle(midx, midy, radius);
        floodfill(midx, midy, YELLOW);

        /* drawing two eyes of the smiley */
        setcolor(BLACK);
        setfillstyle(SOLID_FILL, BLACK);

        ellipse(midx - 40, midy - 40, 0, 360, 10, 25);
        floodfill(midx - 40, midy - 40, BLACK);

        ellipse(midx + 40, midy - 40, 0, 360, 10, 25);
        floodfill(midx + 40, midy - 40, BLACK);
        return;
  }

  int main() {
        /* request auto detection */
        int gdriver = DETECT, gmode, err;
        int i, midx, midy, radius;

        /* initialize graphic mode */
        initgraph(&gdriver, &gmode, "C:/TURBOC3/BGI");
        err = graphresult();

        if (err != grOk) {
                /* error occurred */
                printf("Graphics Error: %s\n",
                                grapherrormsg(err));
                return 0;
        }

        /* mid positions in x and y -axis */
        midx = getmaxx() / 2;
        midy = getmaxy() / 2;
        radius = 100;

        for (i = 0; i < 10; i++) {
                /* 1st smiley - confused */
                smiley(midx, midy, radius);
                setlinestyle(SOLID_LINE, 1, 3);
                line(midx - 35, midy + 35, midx + 35, midy + 35);
                sleep(1);

                /* clears graphic screen */
                cleardevice();

                /* 2nd smiley - sad smiley */
                smiley(midx, midy, radius);
                setlinestyle(SOLID_LINE, 1, 3);
                arc(midx, midy + 50, 0, 180, 30);
                sleep(1);

                /* clears graphic screen */
                cleardevice();

                /* 3rd smiley - happy smiley */
                smiley(midx, midy, radius);
                setlinestyle(SOLID_LINE, 1, 3);
                arc(midx, midy + 20, 180, 360, 40);
                sleep(1);

                cleardevice();

                /* 4th smiley - laughing smiley */
                smiley(midx, midy, radius);
                setlinestyle(LINE_FILL, 1, 2);
                setfillstyle(SOLID_FILL, BLACK);
                pieslice(midx, midy + 15, 180, 360, 35);
                setcolor(WHITE);
                setfillstyle(LINE_FILL, WHITE);
                pieslice(midx, midy + 15, 180, 360, 35);
                sleep(1);

                cleardevice();

                /* 5th smiley - angry smiley */
                smiley(midx, midy, radius);
                setlinestyle(LINE_FILL, 1, 3);
                setfillstyle(SOLID_FILL, BLACK);
                pieslice(midx, midy + 50, 0, 180, 30);
                setcolor(WHITE);
                setfillstyle(LINE_FILL, WHITE);
                pieslice(midx, midy + 50, 0, 180, 30);
                sleep(1);

                cleardevice();
        }

        getch();

        /* deallocate memory allocated for grapic screen */
        closegraph();
        return 0;
  }
