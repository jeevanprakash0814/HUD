//
//  HUD.hpp
//  HeadsUpDisplay
//
//  Created by Jeevan Prakash on 11/24/18.
//  Copyright © 2018 Jeevan Prakash. All rights reserved.
//

#ifndef HUD_H
#define HUD_H

#include <stdio.h>

#include "bargraph.hpp"
#include "gauge.hpp"
#include "textList.hpp"
#include <list>

using namespace std;

class HUD{
    
public:
    HUD();
    list<BarGraph> queue1;
    list<Gauge> queue2;
    list<TextList> queue3;
    
private:
    
    
    
};

#endif /* HUD_hpp */
