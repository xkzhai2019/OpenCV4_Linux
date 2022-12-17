#include <iostream>

#include "opencv2/opencv.hpp"

using namespace std;
using namespace cv;

int main(){
    Mat canvas  = Mat::zeros(Size(512,512),CV_8UC3);


    imshow("canvas",canvas);
    
    putText(canvas,"Hello Opencv",Point(100,50),FONT_HERSHEY_SIMPLEX,1.0,Scalar(0,255,0),2,8);
    
    // 相关绘图API演示
    line(canvas,Point(10,10),Point(400,400),Scalar(0,0,255),1,LINE_4);
    imshow("line",canvas);

    Rect rect(100,100,200,200);
    rectangle(canvas,rect,Scalar(255,0,0),1,LINE_8);
    imshow("rect",canvas);

    circle(canvas,Point(256,256),100,Scalar(0,255,0),1,LINE_8);
    imshow("circle",canvas);

    RotatedRect rrt;
    rrt.center = Point(256,256);
    rrt.angle = 45;
    rrt.size  = Size(100,200);
    ellipse(canvas,rrt,Scalar(0,255,255),-1,LINE_8); // -1表填充
    imshow("rrt",canvas);

    Mat img  = Mat::zeros(Size(512,512),CV_8UC3);
    int x1 = 0,y1 = 0;
    int x2 = 0,y2 = 0;
    RNG rng(12345);


    while(true){
        x1 = (int)rng.uniform(0,512);
        x2 = (int)rng.uniform(0,512);
        y1 = (int)rng.uniform(0,512);
        y2 = (int)rng.uniform(0,512);

        int w = abs(x2-x1);
        int h = abs(y2-y1);
        rect.x = x1;
        rect.y = y1;
        rect.width = w;
        rect.height = h;

        img = Scalar(0,0,0);

        rectangle(img,rect,Scalar(rng.uniform(0,256),rng.uniform(0,256),rng.uniform(0,256)),1,LINE_8);
        //line(img,Point(x1,y1),Point(x2,y2),Scalar(rng.uniform(0,256),rng.uniform(0,256),rng.uniform(0,256)),1,LINE_4);   
        imshow("img",img);
        char c = waitKey(10);
        if(c == 27){
            break;
        }
    }

    waitKey(0);
    destroyAllWindows();
    
    return 0;
}