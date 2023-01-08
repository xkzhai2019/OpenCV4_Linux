#include <iostream>
#include <stdio.h>
#include "opencv2/opencv.hpp"
#include "opencv2/highgui/highgui_c.h"

using namespace cv;
using namespace std;

int main(){

    vector<Mat> srcImage(3);
    char szName[50] = "";
    for(int i=0;i<srcImage.size();i++){
        sprintf(szName,"../img/%d.jpg",i+1);
        srcImage[i] = imread(szName);
        if(srcImage[i].empty()){
            cout << "read" << szName << "error" << endl;
            return -1; 
        }
        //单窗口显示图像
        namedWindow(szName,WINDOW_AUTOSIZE);
        imshow(szName,srcImage[i]);
        // waitKey(5000); // 等待5秒，程序自动推出。为0表示不自动退出
        //destroyWindow(szName);
    }

    waitKey(0);
    destroyAllWindows();
    cout << "all windows are destoryed" << endl;
    system("pause");
    return 0;
}