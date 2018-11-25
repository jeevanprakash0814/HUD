//
//  HUD.cpp
//  HeadsUpDisplay
//
//  Created by Jeevan Prakash on 11/24/18.
//  Copyright © 2018 Jeevan Prakash. All rights reserved.
//

#include "HUD.hpp"
#include <iostream>
using namespace std;

class barGraph{
    //color attribute
    
    int x;
    int y;
    int width;
    int height;
    
    barGraph(int _x, int _y, int _width, int _height){
        this->x = _x;
        this->y = _y;
        this->width = _width;
        this->height = _height;
    }
    
    int getWidth(){
        return this->width;
    }
    
    int getHeight(){
        return this->height;
    }
    
    void updateRectangle(int fillAmount){
        drawExternalRectangle(x, y, width, height, fillAmount);
    }
    
    void drawExternalRectangle(int x, int y, int width, int height, int fillAmount){
        //call draw rectangle function in opencv to draw an unfilled rectangle
        drawInternalRectangle(x, y, width, height, fillAmount);
    }
    
    void drawInternalRectangle(int x, int y, int width, int height, int fillAmount){
        //call draw rectangle function in opencv to draw a filled rectangle within the already drawn external rectangle
    }
    
};

/*class Gauge{
 
 double scaleValues;
 int scaleSize;
 int width;
 int height;
 
 Gauge(int _x, int _y, int _lowerRange, int _upperRange){
 this->_xPos = _x;
 this->_yPos = _y;
 //this->lowerRange = _lowerRange;
 //this->upperRange = _upperRange;
 //drawGauge();
 }
 
 void _drawGauge(int value){
 //stuff
 }
 
 void updateGauge(){
 //stuff
 }
 
 
 };
 */

