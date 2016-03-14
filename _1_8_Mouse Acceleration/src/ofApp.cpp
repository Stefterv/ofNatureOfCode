#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    for(int i = 0; i<50; i++){
        Mover mInst;
        mInst.setup();
        mList.push_back(mInst);
    }
}

//--------------------------------------------------------------
void ofApp::update(){
    for(Mover &mInst : mList){
        mInst.update();
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    for(Mover &mInst : mList){
        mInst.draw();
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
