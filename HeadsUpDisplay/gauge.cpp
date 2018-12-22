//
//  gauge.cpp
//  HeadsUpDisplay
//
//  Created by Jeevan Prakash on 11/24/18.
//  Copyright © 2018 Jeevan Prakash. All rights reserved.
//

#include "gauge.hpp"

using namespace std;
using namespace cv;
    
    double scaleValues;
    int scaleSize;
    int width;
    int height;


    Gauge::Gauge(int _x, int _y, int _lowerRange, int _upperRange, int _size, int _r, int _g, int _b, int _increment, int _startingValue, bool _showMin, bool _showMax){
        
        }
    Gauge::Gauge(int _x, int _y, int _lowerRange, int _upperRange, int _size, int _r, int _g, int _b){
        this->_xPos = _x;
        this->_yPos = _y;
        //this->lowerRange = _lowerRange;
        //this->upperRange = _upperRange;
        //drawGauge();
    }
    
    void _drawGauge(int value, Mat img){
        string bois = "I know how to code";
        cout<<bois<<endl;
        ellipse(img, Point(150,100), Size(100,70), 70, 200, 270, Scalar(255));
    }
    
    void updateGauge(){
        
    }
    
    void Gauge::_drawInitialGauge(int value, int r, int g, int b){
        
    }

