#include <iostream>

#include "opencv2/opencv.hpp"

using namespace cv;

int main(int argc,char **agrv){

    Mat src  = imread("../../img/lena.jpg");
    if(src.empty()){
        printf("can not find this img");
        return -1;
    }

    imshow("input",src);

    // 图像取反
    Mat m1;
    Mat mask = Mat::zeros(src.size(),CV_8UC1);
    
    Mat mask2 = Mat::zeros(src.size(),CV_8UC1);

    int w = src.cols/2;
    int h = src.rows/2;
    for(int row = 50; row < h+100; row++){
        for(int col = 50; col < w+100; col++){
            mask.at<uchar>(row,col) = 127;
            mask2.at<uchar>(row,col) = 0;
            
        }
    }
    imshow("mask",mask);
    imshow("mask2",mask2);
    
    bitwise_not(src,m1,mask);
    imshow("bitwise not",m1);
    
    // 与 操作
    Mat m2;
    bitwise_and(src,src,m2,mask);
    imshow("bitwise and",m2);
    
    // 或 操作
    Mat m3;
    // bitwise_or(src,src,m3,mask);
    bitwise_or(mask,mask2,m3);
    imshow("bitwise or",m3);
    
    waitKey(0);
    destroyAllWindows();

    return 0;
}