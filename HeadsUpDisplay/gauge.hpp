//
//  gauge.hpp
//  HeadsUpDisplay
//
//  Created by Jeevan Prakash on 11/24/18.
//  Copyright © 2018 Jeevan Prakash. All rights reserved.
//

#ifndef GAUGE_H
#define GAUGE_H

#include <stdio.h>
#include <iostream>
#include <string>

#include "opencv2/imgproc.hpp"
#include "opencv2/highgui.hpp"

class Gauge
{
    
public:
    Gauge(int _x, int _y, int _lowerRange, int _upperRange, int _size, int _r, int _g, int _b, double _increment, int _startingValue, bool _showMin = false, bool _showMax = false);//done
    Gauge(int _x, int _y, int _lowerRange, int _upperRange, int _size, int _r, int _g, int _b);//done
    void drawGauge(int value, cv::Mat img);//done
    int getX();//done
    int getY();
    void setX(int x);
    void setY(int y);
    int getIncrement();
    void setIncrement(double increment);
    int getGaugeValue();
    void setGaugeValue(int value);//done
    cv::Scalar getBackgroundColor();
    void setBackgroundColor(int r, int g, int b, cv::Mat img);
    cv::Scalar getTickerColor();
    void setTickerColor(int r, int g, int b);
    int getImageWidth();//in pixels
    int getImageHeight();//in pixels
    int getLowerRange();
    void setLowerRange(int lowerRange, cv::Mat img);
    int getUpperRange();
    void setUpperRange(int upperRange, cv::Mat img);
    int getSizeGauge();
    void setSizeGauge(int size, cv::Mat img);
    
    
private:
    int _xPos;
    int _yPos;
    int _lowerRange;
    int _upperRange;
    int _size;
    double _increment;
    int _width;
    int _height;
    int _value;
    int _currentValue;
    int _r;
    int _g;
    int _b;
    int _rTicker;
    int _gTicker;
    int _bTicker;
    
    void _drawInitialGauge(int value, int r, int g, int b);
    void _drawTicker(int value);
    void _updateBackground(int r, int g, int b);//will use current value for redrawing ticker
    
};

#endif // GAUGE_H
