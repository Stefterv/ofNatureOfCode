#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    loc.set(0,0,0);
    vel.set(1,2,3);
    cam.setDistance(200);
}

//--------------------------------------------------------------
void ofApp::update(){
    loc += vel;
    if(loc.x < -100 || loc.x > 100){
        vel.x *= -1;
    }
    if(loc.y < -100 || loc.y > 100){
        vel.y *= -1;
    }
    if(loc.z < -100 || loc.z > 100){
        vel.z *= -1;
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    cam.begin();
    ofNoFill();
    ofColor(255);
    ofDrawBox(0, 0, 0, 200);
    
    ofFill();
    ofDrawSphere(loc,10);
    cam.end();
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
