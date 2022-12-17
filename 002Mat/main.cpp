#include <iostream>

#include "opencv2/opencv.hpp"

using namespace cv;

int main(int argc,char **agrv){
    Mat src = imread("../../img/lena.jpg",IMREAD_COLOR);
    
    if(src.empty()){
        printf("can not find this img");
        return -1;
    }
    //namedWindow("input",WINDOW_AUTOSIZE);
    // 可调整窗口大小
    namedWindow("input",WINDOW_FREERATIO);
    
    imshow("input",src);

    int width = src.cols;
    int heigth = src.rows;
    int dim = src.channels();

    int dep = src.depth();
    int type = src.type();

    // CV_8U 深度
    //3U 通道数
    if(type == CV_8UC3){
        printf("widht: %d, height:%d, dim:%d, depth: %d, type:%d \n",width,heigth,dim,dep,type);
    }

    // create mat
    Mat t1 = Mat(256,256,CV_8UC3);
    t1 = Scalar(0,0,255);
    imshow("t1",t1);

    Mat t2 = Mat(Size(512,512),CV_8UC3);
    t2 = Scalar(255,0,255);
    imshow("t2",t2);

    Mat t3 = Mat::zeros(Size(256,256),CV_8UC3);
    imshow("t3",t3);

    // create from src
    Mat t4 = src;
    // t4 = Scalar(0,255,0);
    Mat t5 = src.clone();
    t5 = Scalar(0,255,0);
    imshow("t5",t5);
    imshow("src",src);
    
    Mat t6;
    src.copyTo(t6);
    imshow("t6",t6);
    t6 = Scalar(0,255,0);
    imshow("src2",src);
  

    Mat t7 = Mat::zeros(src.size(),src.type());
    imshow("t7",t7);


    // visit each pixel
    // int height = src.rows;
    // width = src.cols;
    // int ch = src.channels();
    // for(int row = 0; row < height; row++){
    //     for(int col = 0; col < width; col++){
    //         if(ch==3){
    //             Vec3b pixel = src.at<Vec3b>(row,col);
    //             int blue = pixel[0];
    //             int green = pixel[1];
    //             int red = pixel[2];
    //             src.at<Vec3b>(row,col)[0] = 255 - blue;
    //             src.at<Vec3b>(row,col)[1] = 255 - green;
    //             src.at<Vec3b>(row,col)[2] = 255 - red;
    //         }
    //         if(ch==1){
    //             int pv = src.at<uchar>(row,col);
    //             src.at<uchar>(row,col) = 255 - pv;      
    //         }
    //     }
    // }
    // imshow("pixel",src);

    int height = src.rows;
    width = src.cols;
    int ch = src.channels();

    Mat result = Mat::zeros(src.size(),src.type());
    for(int row = 0; row < height; row++){
        uchar* curr_row = src.ptr<uchar>(row);
        uchar* result_row = result.ptr<uchar>(row);
        for(int col = 0; col < width; col++){
            if(ch==3){
                int bule = *curr_row++;
                int green = *curr_row++;
                int red = *curr_row++;

                *result_row++  = bule ;
                *result_row++ = green;
                *result_row++ = red;
            }
            if(ch==1){
                int pv = *curr_row++;     
                *result_row++ = pv;
            }
        }
    }
    imshow("pixel",result);

    waitKey(0);
    destroyAllWindows();
    return 0;
}