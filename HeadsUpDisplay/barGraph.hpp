//
//  barGraph.hpp
//  HeadsUpDisplay
//
//  Created by Jeevan Prakash on 11/24/18.
//  Copyright © 2018 Jeevan Prakash. All rights reserved.
//

#ifndef BARGRAPH_H
#define BARGRAPH_H

#include <stdio.h>

class BarGraph
{
    
public:
    BarGraph();
    void drawGraph();
    void updateGraph(int fill);
    //gotta add all the mat files in maybe an array since you will have a finite amount per bargraph
    //add setters and getters
    
private:
    int _xPos;
    int _yPos;
    int _fill;
    double _scaleValues;
    int _scaleSize;
    int _width;
    int _height;
    
    void _drawGraph(int fill);
    
};

#endif /* barGraph_hpp */
