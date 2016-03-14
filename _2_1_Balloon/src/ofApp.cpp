#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    for(int i = 0; i<50; i++){
        Balloon bInst;
        bInst.setup();
        bList.push_back(bInst);
    }
}

//--------------------------------------------------------------
void ofApp::update(){
    for(Balloon &bInst : bList){
        bInst.addForce(ofVec2f(0,-0.1));
        bInst.addForce(ofVec2f(ofNoise(bInst.loc.x,bInst.loc.y)-0.5,ofNoise(bInst.loc.x,bInst.loc.y+1000)-0.5));
        bInst.update();
    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    for(Balloon &bInst : bList){
        bInst.draw();
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
