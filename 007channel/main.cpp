#include <iostream>
#include "opencv2/opencv.hpp"

using namespace std;
using namespace cv;

int main(){
    Mat src  = imread("../../img/lena.jpg",IMREAD_COLOR);

    if(src.empty()){
        printf("can not find this img");
        return -1;
    }

    imshow("input",src);

    vector<Mat> mv;
    split(src,mv);
    int size = mv.size();
    printf("number of channels: %d\n",size);
    imshow("blue channel",mv[0]);
    imshow("green channel",mv[1]);
    imshow("red channel",mv[2]);
    
    bitwise_not(mv[0],mv[0]);

    Mat dst;
    mv[2] = Scalar(0);
    merge(mv,dst);
    imshow(" - red",dst);


    // ROI
    Rect roi;
    roi.x = 100;
    roi.y = 100;
    roi.width = 250;
    roi.height = 200;
    Mat sub = src(roi);
    bitwise_not(sub,sub);

    rectangle(src,roi,Scalar(0,255,0),1,8);

    imshow("src",src);
    imshow("roi",sub);
    waitKey(0);
    destroyAllWindows();
    
    return 0;
}