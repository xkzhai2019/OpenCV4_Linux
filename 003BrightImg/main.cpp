#include <iostream>

#include "opencv2/opencv.hpp"

using namespace cv;

int main(int argc,char **agrv){
    

    // Mat src1 = imread("../../img/WindowsLogo.jpg",IMREAD_UNCHANGED);
    // Mat src2 = imread("../../img/LinuxLogo.jpg",IMREAD_UNCHANGED);
 
    // if(src1.empty() || src2.empty()){
    //     printf("can not find this img");
    //     return -1;
    // }
    
    // imshow("input1",src1);
    // imshow("input2",src2);

    // Mat dst1;
    // add(src1,src2,dst1);
    // imshow("add-demo",dst1);
    
    // Mat dst2;
    // subtract(src1,src2,dst2);
    // imshow("sub-demo",dst2);
    
    // Mat dst3;
    // multiply(src1,src2,dst3);
    // imshow("mul-demo",dst3);
    
    // Mat dst4;
    // divide(src1,src2,dst4);
    // imshow("div-demo",dst4);


    Mat src  = imread("../../img/lena.jpg");
    if(src.empty()){
        printf("can not find this img");
        return -1;
    }

    imshow("input",src);

    Mat black = Mat::zeros(src.size(),src.type());
    black = Scalar(127,127,127);

    Mat dst;
    subtract(src,black,dst);
    imshow("result",dst);
    
    Mat dst2;
    addWeighted(src,1.5,black,-0.2,0.0,dst2);
    imshow("dst2",dst2);

    waitKey(0);
    destroyAllWindows();

    return 0;
}