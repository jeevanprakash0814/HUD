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
    Gauge(int _x, int _y, int _lowerRange, int _upperRange, int _size, int _r, int _g, int _b, int _increment, int _startingValue, bool _showMin = false, bool _showMax = false);//done
    Gauge(int _x, int _y, int _lowerRange, int _upperRange, int _size, int _r, int _g, int _b);//done
    void drawGauge(int value, cv::Mat img);//done
    void updateGaugeValue(int value);//done
    int getX();//done
    int getY();
    void setX(int x);
    void setY(int y);
    int getIncrement();
    void setIncrement(int increment);
    int getGaugeValue();
    void updateBackground(int r, int g, int b);
    void setBackgroundColor(int r, int g, int b);
    void setTickerColor(int r, int g, int b);
    //putText puts stuff on the image
    
    
private:
    int _xPos;
    int _yPos;
    double _increment;
    int _pxWidth;
    int _pxHeight;
    int _value;
    
    void _drawInitialGauge(int value, int r, int g, int b);
    void _drawTicker(int value, int r, int g, int b);
    void _updateBackground(int r, int g, int b);//will use current value for redrawing ticker
    
};

#endif // GAUGE_H
