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
    
    double scaleValues;//not sure what this variable is for

    Gauge::Gauge(int _x, int _y, int _lowerRange, int _upperRange, int _size, int _r, int _g, int _b, double _increment, int _startingValue, bool _showMin, bool _showMax){
        this->_xPos = _x;
        this->_yPos = _y;
        this->_lowerRange = _lowerRange;
        this->_upperRange = _upperRange;
        this->_size = _size;
        this->_r = _r;
        this->_g = _g;
        this->_b = _b;
        this->_rTicker = _r;
        this->_gTicker = _g;
        this->_bTicker = _b;
        this->_increment = _increment;
        this->_currentValue = _startingValue;
    }
    Gauge::Gauge(int _x, int _y, int _lowerRange, int _upperRange, int _size, int _r, int _g, int _b){
        this->_xPos = _x;
        this->_yPos = _y;
        this->_lowerRange = _lowerRange;
        this->_upperRange = _upperRange;
        this->_size = _size;
        this->_r = _r;
        this->_g = _g;
        this->_b = _b;
        this->_rTicker = _r;
        this->_gTicker = _g;
        this->_bTicker = _b;
        this->_increment = 1.0;
        this->_currentValue = 0;
    }
    
    void Gauge::drawGauge(int value, Mat img){
        cout<<img.size().width<<endl;
        this->_width = img.size().width;
        this->_height = img.size().height;
        int thickness = 10;
        int shift = 0;
        int lineType = LINE_8;
        int angleIncrement = 0;
        int startAngle = 0;
        int endAngle = 90;
        cout<<getImageWidth()<<endl;//why does this print out 0800 instead of 800?
        cout<<getImageHeight()<<endl;
        
        ellipse(img, Point((getImageWidth()/3)-20,(getImageHeight()/3)+70), Size(getSizeGauge(),getSizeGauge()), angleIncrement, startAngle, endAngle, getBackgroundColor(), thickness, lineType, shift);//Scalar(b,g,r)
        //ellipse(img, Point((getImageWidth()/3)-40,(getImageHeight()/3)+70), Size(50,50), angleIncrement+77, startAngle, endAngle, Scalar(b,g,r), thickness, lineType, shift);
        
        _drawTicker(value);
    }
    
    void Gauge::_drawInitialGauge(int value, int r, int g, int b){
        //what was the purpose of this again
    }
    
    void Gauge::_drawTicker(int value){
        //need a drawLine function here
    }

    void Gauge::_updateBackground(int r, int g, int b){
        //not sure what this one is meant to do
    }

    int Gauge::getX(){
        return this->_xPos;
    }

    int Gauge::getY(){
        return this->_yPos;
    }

    void Gauge::setX(int x){
        this->_xPos = x;
    }

    void Gauge::setY(int y){
        this->_yPos = y;
    }

    int Gauge::getLowerRange(){
        return this->_lowerRange;
    }

    void Gauge::setLowerRange(int lowerRange, Mat img){
        this->_lowerRange = lowerRange;
        drawGauge(getGaugeValue(), img);
    }

    int Gauge::getUpperRange(){
        return this->_upperRange;
    }

    void Gauge::setUpperRange(int upperRange, Mat img){
        this->_upperRange = upperRange;
        drawGauge(getGaugeValue(), img);
    }

    int Gauge::getIncrement(){
        return this->_increment;
    }

    void Gauge::setIncrement(double increment){
        this->_increment = increment;
    }

    int Gauge::getGaugeValue(){
        return this->_currentValue;
    }

    void Gauge::setGaugeValue(int value){
        this->_currentValue = value;
    }

    Scalar Gauge::getBackgroundColor(){
        return Scalar(this->_b,this->_g,this->_r);
    }

    void Gauge::setBackgroundColor(int r, int g, int b, Mat img){
        this->_r = r;
        this->_g = g;
        this->_b = b;
        drawGauge(getGaugeValue(), img);
    }

    Scalar Gauge::getTickerColor(){
        return Scalar(this->_bTicker, this->_gTicker, this->_rTicker);
    }

    void Gauge::setTickerColor(int r, int g, int b){
        this->_rTicker = r;
        this->_gTicker = g;
        this->_bTicker = b;
        _drawTicker(0);
    }

    int Gauge::getImageWidth(){
        return this->_width;
    }

    int Gauge::getImageHeight(){
        return this->_height;
    }

    int Gauge::getSizeGauge(){
        return this->_size;
    }

    void Gauge::setSizeGauge(int size, Mat img){
        this->_size = size;
        drawGauge(getGaugeValue(), img);
    }
