//
//  birds.cpp
//  Birds
//
//  Created by Nicolas on 11/16/17.
//

#include "birds.hpp"


void  birds::setup(){
    position.x = ofRandomWidth();
    position.y = ofRandomHeight();
    velocity.x = ofRandom(-4, 4);
    velocity.y = ofRandom(-4, 4);
    
    drag = ofRandom(0.97, 0.998);
    force = ofPoint(0, 0);
    
}

void birds::attraction(){
    
    ofPoint attractPoint = ofPoint(ofGetMouseX(), ofGetMouseY());
    force = attractPoint - position;
    force.normalize();
    
    velocity *= drag;
    velocity += force * 0.6;
    
}


void birds::repulsion(){
    
    ofPoint repelPoint = ofPoint(ofGetMouseX(), ofGetMouseY());
    force = repelPoint - position;
    
    float distance = force.length();
    force.normalize();
    
    if(distance < 100){
         velocity -= force * 0.6;
    }
 
}


void  birds::update(){
    if(isAttraction){
        
        attraction();
        
    }else{
        
        repulsion();
    }
    
    position += velocity;
    
}

void  birds::draw(){
    
    if(isAttraction){
        
        ofSetColor(230, 100, 250);
        
    }else{
        
        ofSetColor(200, 255, 60);
    }
    
    ofDrawCircle(position.x, position.y, 2.0);
    
}

void  birds::toggleMode(){
    
    isAttraction = !isAttraction;
    
}


