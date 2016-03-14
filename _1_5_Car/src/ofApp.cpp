#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    c1.setup();
}

//--------------------------------------------------------------
void ofApp::update(){
    c1.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    c1.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    switch(key){
        case OF_KEY_UP:
            c1.acc.set(0,-1);
            break;
        case OF_KEY_DOWN:
            c1.acc.set(0,1);
            break;
        case OF_KEY_LEFT:
            c1.acc.set(-1,0);
            break;
        case OF_KEY_RIGHT:
            c1.acc.set(1,0);
            break;
    }
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
