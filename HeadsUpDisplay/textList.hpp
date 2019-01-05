//
//  textList.hpp
//  HeadsUpDisplay
//
//  Created by Jeevan Prakash on 11/24/18.
//  Copyright © 2018 Jeevan Prakash. All rights reserved.
//

#ifndef TEXTLIST_H
#define TEXTLIST_H

#include <stdio.h>
#include <iostream>
#include <string>

#include "opencv2/imgproc.hpp"
#include "opencv2/highgui.hpp"

class TextList
{
    
public:
    TextList();
    TextList(int _x, int _y, int _scaleTextSize, int _r, int _g, int _b, int _numOfItems);
    void drawList(int _accelerationValue, int _manipulatorMode, int _gearNumber, cv::Mat img);
    void updateMode(int accelerationValue, int manipulatorMode, int gearNumber);
    
private:
    int _xPos;
    int _yPos;
    int _scaleTextSize;
    int _widthBorder;
    int _heightBorder;
    int _r;
    int _g;
    int _b;
    
    //std::string categories[5];//I can have a String array with the length of the number of different things I want to display
    //not sure how to add an array member to this header class without already predefining the length of the array...
    
    void _drawText(int _accelerationValue, int _manipulatorMode, int _gearNumber, cv::Mat img);
    void _drawBorder(int _widthBorder, int _heightBorder);
    
};

#endif /* textList_hpp */
