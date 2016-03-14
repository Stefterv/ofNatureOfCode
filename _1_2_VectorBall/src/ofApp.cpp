#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    location.set(100,100);
    velocity.set(2.5,5);
}

//--------------------------------------------------------------
void ofApp::update(){
    location += velocity;
    if(location.x > ofGetWidth() || location.x<0){
        velocity.x *= -1;
    }
    if(location.y > ofGetHeight() || location.y<0){
        velocity.y *= -1;
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofFill();
    ofSetColor(255, 0, 0);
    ofDrawEllipse(location, 50, 50);
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
