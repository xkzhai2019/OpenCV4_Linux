#include <iostream>
#include <stdio.h>
#include "opencv2/opencv.hpp"

using namespace std;
using namespace cv;

// void eh_demo();
void hist_compare();
int main(){
    Mat src  = imread("../img/lena.jpg",IMREAD_COLOR);

    if(src.empty()){
        printf("can not find this img");
        return -1;
    }

    imshow("input",src);

    vector<Mat> mv;
    split(src,mv);

    // 统计直方图
    int histSize = 256;
    Mat b_hist,g_hist,r_hist;
    float range[] = {0,255};
    const float* histRanges = {range};
    calcHist(&mv[0],1,0,Mat(),b_hist,1,&histSize,&histRanges,true,false);
 
    calcHist(&mv[1],1,0,Mat(),g_hist,1,&histSize,&histRanges,true,false);
    calcHist(&mv[2],1,0,Mat(),r_hist,1,&histSize,&histRanges,true,false);
 
    Mat result = Mat::zeros(Size(600,400),CV_8UC3);
    int margin = 50;

    int nm = result.rows - 2*margin;
    normalize(b_hist,b_hist,0,nm,NORM_MINMAX,-1,Mat());
    normalize(g_hist,g_hist,0,nm,NORM_MINMAX,-1,Mat());
    normalize(r_hist,r_hist,0,nm,NORM_MINMAX,-1,Mat());
    float step = 500.0 / 256.0;
    
    for(int i=0;i<255;i++){
        float bh_1 = b_hist.at<float>(i,0);
        float bh_2 = b_hist.at<float>(i+1,0);
        line(result,Point(step*i,50+nm - bh_1),Point(step*(i+1),50+nm - bh_2),Scalar(255,0,0),2,8,0);

    }
    imshow("hist",result);


    // 直方图均衡化
    src = imread("../img/flower.png");

    Mat gray, dst;
    cvtColor(src,gray,COLOR_BGR2GRAY);
    imshow("src",src);
    equalizeHist(gray,dst);
    imshow("eh-demo",dst);

    waitKey(0);
    destroyAllWindows();
    
    hist_compare();
    return 0;
}


// void eh_demo(){
//     Mat src = imread("../../img/flower.png",IMREAD_ANYCOLOR);
//     Mat gray, dst;
//     cvtColor(src,gray,COLOR_BayerBG2BGR);
//     imshow("gray",gray);
//     equalizeHist(gray,dst);
//     imshow("eh-demo",dst);

// }

void hist_compare(){
    Mat src1 = imread("../img/lena.jpg",IMREAD_COLOR);
    Mat src2 = imread("../img/flower.png",IMREAD_COLOR);

    imshow("src1",src1);
    imshow("src2",src2);

    // 统计直方图
    int histSize[] = {256,256,256};
    Mat hist1,hist2;
    float c1[] = {0,255};
    float c2[] = {0,255};
    float c3[] = {0,255};
    int channels[] = {0,1,2};
    const float* histRanges[] = {c1,c2,c3};
    calcHist(&src1,1,channels,Mat(),hist1,3,histSize,histRanges,true,false);
    calcHist(&src2,1,channels,Mat(),hist2,3,histSize,histRanges,true,false);

    // 归一化;
    normalize(hist1,hist1,0,1.0,NORM_MINMAX,-1,Mat());
    normalize(hist2,hist2,0,1.0,NORM_MINMAX,-1,Mat());
    
    // 比较巴氏距离
    double h11 = compareHist(hist1,hist1,HISTCMP_BHATTACHARYYA);
    double h12 = compareHist(hist1,hist2,HISTCMP_BHATTACHARYYA);
    printf("h11:%.2f,h12:%.2f\n",h11,h12);


    // 比较相关性
    double c11 = compareHist(hist1,hist1,HISTCMP_CORREL);
    double c12 = compareHist(hist1,hist2,HISTCMP_CORREL);
    printf("c11:%.2f,c12:%.2f\n",c11,c12);

    waitKey(0);
    destroyAllWindows();
}