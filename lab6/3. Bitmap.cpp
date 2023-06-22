/*C graphics program to draw .*/
#include<bits/stdc++.h>
#include <graphics.h>
using namespace std;
main()
{
    int gd = DETECT, gm;

    //init graphics
    initgraph(&gd, &gm, (char*) "");
  int mat[5][7]={
  {100,100,100,200,0,100,100},

  {100,100,200,100,200,100,100},

  {100,100,100,200,100,100,100}
,
  {100,100,200,100,200,100,100}
,
  {100,100,100,200,100,100,100}


  };
int height = 100;
int width = (2 * height) - 1;
  int i, j;
    for (i = 0; i < height; i++) {
         putpixel(i+200,j+100,RED);
        for (j = 0; j < height; j++) {
            if ((i == 0) || (i == height / 2
                            && j <= height / 2))
//                cout <<"*";
                  putpixel(i+200,j+100,RED);
            else
                continue;
        }
        cout <<"\n";
    }

    getch();
    closegraph();
    return 0;
}


