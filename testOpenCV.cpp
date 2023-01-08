#include <iostream>
#include "opencv2/core/core.hpp"
#include "opencv2/opencv.hpp"
#include "opencv2/highgui/highgui.hpp"
using namespace std; 
using namespace cv; 
int main() {     
        Mat img = imread("../img/apple.jpg");     
        namedWindow("test");     
        imshow("test", img);     
        waitKey();     
        return 0; 
}