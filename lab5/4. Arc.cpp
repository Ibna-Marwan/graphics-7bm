
// Cpp prog for ARC

#include<bits/stdc++.h>
#include <graphics.h>

using namespace std;
#define PI 3.141592

void Cir_arc(const int x_cen,const int y_cen,
                  const int start_ang,const int end_ang,const int rad)
{
       float ang=(((start_ang<=end_ang)?start_ang:end_ang)*(PI/180));
       float range=(((end_ang>start_ang)?end_ang:start_ang)*(PI/180));
       float x=(rad*cos(ang));
       float y=(rad*sin(ang));
       do
       {
            putpixel((int)(x_cen+x+0.5),(int)(y_cen-y+0.5),CYAN);
            ang+=0.001;
            x=(rad*cos(ang));
            y=(rad*sin(ang));
       }
       while(ang<=range);
}

int main(){
    int x_cen,y_cen,rad,start_ang,end_ang;
    cout<<"Enter centre's x_coordinate:";
    cin>>x_cen;
    cout<<"Enter centre's y_coordinate:";
    cin>>y_cen;

    cout<<"Enter start angle of arc:";
    cin>>start_ang;
    cout<<"Enter end angle of arc:";
    cin>>end_ang;
     cout<<"Enter radius of arc:";
    cin>>rad;
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    Cir_arc(x_cen,y_cen,start_ang,end_ang,rad);
    getch();
    closegraph();
    return 0;
}

