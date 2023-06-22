/*C graphics program to draw .*/
#include<bits/stdc++.h>
#include <graphics.h>
main()
{
    int gd = DETECT, gm,Bitmap;

    //init graphics
    initgraph(&gd, &gm, (char*) "");


Bitmap:Bitmap(1,11);

    getch();
    closegraph();
    return 0;
}


