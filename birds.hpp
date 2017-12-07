//
//  birds.hpp
//  Birds
//
//  Created by Nicolas on 11/16/17.
//

#ifndef birds_hpp
#define birds_hpp

#include <stdio.h>
#include "ofMain.h"

class birds{
public:
    
    void setup();
    void update();
    void draw();
    
    void attraction();
    void repulsion();
    
    void toggleMode();
    
    ofPoint position;
    ofPoint velocity;
    
    ofPoint force;
    float drag;
    
    bool isAttraction = true;
    
    
};


#endif /* birds_hpp */
