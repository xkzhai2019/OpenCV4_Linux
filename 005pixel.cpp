#include <iostream>

#include "opencv2/opencv.hpp"

using namespace cv;
using namespace std;

int main(int argc,char **agrv){

    Mat src  = imread("../img/lena.jpg",IMREAD_GRAYSCALE);

    if(src.empty()){
        printf("can not find this img");
        return -1;
    }

    int w = src.cols;
    int h = src.rows;

    int ch = src.channels();

    printf("W:%d,h:%d,channels:%d\n",w,h,ch);

    // 像素值统计
    vector<int> hist(256);
    for (int i=0;i<256;i++){
        hist[i] = 0;
    }
    for(int row = 0; row < h; row++){
        for(int col = 0; col < w; col++){
            int pv = src.at<uchar>(row,col);
            hist[pv]++;
        }
    }

    // 最大最小值
    // double min_val;
    // double max_val;
    // Point minloc;
    // Point maxloc;
    // minMaxLoc(src,&min_val,&max_val,&minloc,&maxloc);
    // printf("min:%.2f,max:%.2f\n",min_val,max_val);

    // 均值与方差
    // Scalar s = mean(src);
    // // printf("value:%.2f\n",s[0]);
    // printf("mean:%.2f,%.2f,%.2f\n",s[0],s[1],s[2]);

    // Mat mm,mstd;
    // meanStdDev(src,mm,mstd);
    // int rows = mstd.rows;

    // printf("stddev:%.2f,%.2f,%.2f\n",mstd.at<double>(0,0),mstd.at<double>(1,0),mstd.at<double>(2,0));
    
    imshow("input",src);
    waitKey(0);
    destroyAllWindows();

    return 0;
}