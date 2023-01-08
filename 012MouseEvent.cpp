/**
 * 在图片上用鼠标画线
*/
#include <iostream>
#include <stdio.h>
#include "opencv2/opencv.hpp"
#include "opencv2/highgui/highgui_c.h"
#define WINDOW "原图"
using namespace cv;
using namespace std;

Mat g_srcImage, g_dstImage;
Point previousPoint;
void on_mouse(int event,int x,int y,int flags,void*);

int main(){
    g_srcImage = imread("../img/ter.jpg",1);
    imshow(WINDOW,g_srcImage);
    setMouseCallback(WINDOW,on_mouse,0);
    
    waitKey(0);
    system("pause");
    return 0;
}

void on_mouse(int event,int x,int y,int flags,void*){
    if(event==EVENT_LBUTTONDOWN){
        previousPoint = Point(x,y);
    }
    else if(event == EVENT_MOUSEMOVE && (flags & EVENT_FLAG_LBUTTON)){
        Point pt(x,y);
        line(g_srcImage,previousPoint,pt,Scalar(0,0,255),2,5,0);
        previousPoint = pt;
        imshow(WINDOW,g_srcImage);
    }
}