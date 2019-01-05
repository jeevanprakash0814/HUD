//
//  textList.cpp
//  HeadsUpDisplay
//
//  Created by Jeevan Prakash on 11/24/18.
//  Copyright © 2018 Jeevan Prakash. All rights reserved.
//

#include "textList.hpp"

using namespace std;
using namespace cv;

    TextList::TextList(){
        string categories[1];
        this->_xPos = 0;
        this->_yPos = 0;
        this->_scaleTextSize = 1;
        this->_heightBorder = 10;
        this->_widthBorder = 10;
        this->_r = 0;
        this->_g = 0;
        this->_b = 0;
    }

    TextList::TextList(int _x, int _y, int _scaleTextSize, int _r, int _g, int _b, int _numOfItems){
        string categories[_numOfItems];
        this->_xPos = _x;
        this->_yPos = _y;
        this->_scaleTextSize = 1;
        this->_heightBorder = 10;
        this->_widthBorder = 10;
        this->_r = _r;
        this->_g = _g;
        this->_b = _b;
    }

    void TextList::drawList(int _accelerationValue, int _manipulatorMode, int _gearNumber, Mat img){
        _drawText(_accelerationValue, _manipulatorMode, _gearNumber, img);
    }
    void TextList::updateMode(int accelerationValue, int manipulatorMode, int gearNumber){
    
    }

    void TextList::_drawText(int _accelerationValue, int _manipulatorMode, int _gearNumber, Mat img){
        string testString = "Hello Bois";
        putText(img, testString, Point(50,50), FONT_HERSHEY_COMPLEX, 0.5, Scalar(0,0,255));//putText puts stuff on the image
    }
    void TextList::_drawBorder(int _widthBorder, int _heightBorder){
    
    }
