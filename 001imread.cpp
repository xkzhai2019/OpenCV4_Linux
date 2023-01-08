#include <iostream>
#include "opencv2/opencv.hpp"

using namespace cv;

int main(int argc,char **argv){
    // Mat src = imread("../../img/lena.jpg",IMREAD_GRAYSCALE);
    // Mat src = imread("../../img/lena.jpg",IMREAD_ANYCOLOR);
    
    // 四通道
    //Mat src = imread("../../img/opencv-logo.png",IMREAD_COLOR);
    
    Mat src = imread("../../img/opencv-logo.png",IMREAD_UNCHANGED);
    
    if(src.empty()){
        printf("can not find this img");
        return -1;
    }
    //namedWindow("input",WINDOW_AUTOSIZE);
    namedWindow("input",WINDOW_FREERATIO);
    
    imshow("input",src);

    // 保存后看到透明效果
    imwrite("../testone.png",src);
    waitKey(0);
    destroyAllWindows();
    
    return 0;
}