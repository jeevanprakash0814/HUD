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
    
    }

    void TextList::drawList(int _accelerationValue, int _manipulatorMode, int _gearNumber, Mat img){
        _drawText(_accelerationValue, _manipulatorMode, _gearNumber, img);
    }
    void TextList::updateMode(int accelerationValue, int manipulatorMode, int gearNumber){
    
    }

    void TextList::_drawText(int _accelerationValue, int _manipulatorMode, int _gearNumber, Mat img){
        string testString = "Hello Bois";
        putText(img, testString, Point(507,707), FONT_HERSHEY_COMPLEX, 0.5, Scalar(0,0,255));
    }
    void TextList::_drawBorder(int _widthBorder, int _heightBorder){
    
    }
