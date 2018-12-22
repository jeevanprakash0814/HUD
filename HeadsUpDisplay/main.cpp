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

using namespace cv;
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Hello, World!\n";
    Gauge *gauge = new Gauge(5,5,5,5,5,5,5,5);
    cout << gauge->getX();
    Mat image = imread("/Users/jeevanprakash/Desktop/Funny/IMG_0620.PNG");
    gauge->drawGauge(5,image);
    imshow("Test", image);
    waitKey(0);
    delete gauge;
    return 0;
}
