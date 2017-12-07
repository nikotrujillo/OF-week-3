#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    int numflock = 1500;
    
    for(int i=0; i<numflock; i++){
        birds newbirds;
        newbirds.setup();
        flock.push_back(newbirds);
        
    
    }
}

//--------------------------------------------------------------
void ofApp::update(){
    
    for (int i = 0; i < flock.size(); i++) {
        flock[i].update();
    }
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetBackgroundColor(0, 0, 0);
    
    for (int i = 0; i < flock.size(); i++) {
        ofSetColor(230, 100, 250);
        flock[i].draw();
        
    }
    
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
    for (int i = 0; i < flock.size(); i++) {
        flock[i].toggleMode();
        
    }
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
