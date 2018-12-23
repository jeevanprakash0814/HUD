//
//  main.cpp
//  HeadsUpDisplay
//
//  Created by Jeevan Prakash on 11/24/18.
//  Copyright © 2018 Jeevan Prakash. All rights reserved.
//

#include "opencv2/imgproc.hpp"
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"
#include <iostream>
#include <fstream>
#include <unistd.h>
#include <tuple>
#include "gauge.hpp"
#include "textList.hpp"

using namespace cv;
using namespace std;

int main(int argc, const char * argv[]) {
    Gauge *gauge = new Gauge(5,5,5,5,5,5,5,5);
    TextList *list = new TextList();
    
    cout << gauge->getX();
    Mat image = imread("/Users/jeevanprakash/Desktop/Funny/IMG_0620.PNG");
    Mat overlay(image.size().height, image.size().width, CV_8UC4);
    
    image.copyTo(overlay);
    gauge->drawGauge(5,overlay);
    list->drawList(5, 5, 5, overlay);
    double alpha = 0.3;
    addWeighted(overlay, alpha, image, 1 - alpha, 0, image);
    
    imshow("Test", image);
    waitKey(0);
    delete gauge;
    delete list;
    return 0;
}
