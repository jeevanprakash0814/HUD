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
    
    void Gauge::drawGauge(int value, Mat img){
        int thickness = 10;
        int shift = 0;
        int lineType = LINE_8;
        int angleIncrement = 0;
        int startAngle = 0;
        int endAngle = 90;
        int width = img.size().width;
        int height = img.size().height;
        cout<<width<<endl;
        cout<<height<<endl;
        
        ellipse(img, Point(width/3-20,height/3+70), Size(50,50), angleIncrement, startAngle, endAngle, Scalar(220,248,255), thickness, lineType, shift);
        ellipse(img, Point(width/3-40,(height/3)+70), Size(50,50), angleIncrement+77, startAngle, endAngle, Scalar(220,248,255,0.4), thickness, lineType, shift);
    }
    
    void Gauge::updateGaugeValue(int value){
        
    }
    
    void Gauge::_drawInitialGauge(int value, int r, int g, int b){
        
    }
    
    void Gauge::_drawTicker(int value, int r, int g, int b){
        
    }

    void Gauge::_updateBackground(int r, int g, int b){
        
    }

    int Gauge::getX(){
        return 0;
    }

    int Gauge::getY(){
        return 0;
    }
    void Gauge::setX(int x){
    
    }
    void Gauge::setY(int y){
    
    }
    int Gauge::getIncrement(){
        return 0;
    }
    void Gauge::setIncrement(int increment){
    
    }
    int Gauge::getGaugeValue(){
        return 0;
    }
    void Gauge::updateBackground(int r, int g, int b){
    
    }
    void Gauge::setBackgroundColor(int r, int g, int b){
    
    }
    void Gauge::setTickerColor(int r, int g, int b){
    
    }
