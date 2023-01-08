#include <iostream>
#include <stdio.h>
#include "opencv2/opencv.hpp"
#include "opencv2/highgui/highgui_c.h"

using namespace cv;
using namespace std;

int main(){

    vector<Mat> srcImage(1);
    char szName[50] = "";
    int width = 240, height = 120;
    sprintf(szName,"../img/%d.jpg",1);
    srcImage[0] = imread(szName); 

    if(srcImage[0].empty()){
        cout << "read" << szName << "error" << endl;
        return -1; 
    }
        //单窗口显示图像
    namedWindow(szName,WINDOW_NORMAL);
    imshow(szName,srcImage[0]);
    resizeWindow(szName,width,height); // 调整窗口代码

    waitKey(0);
    system("pause");
    return 0;
}