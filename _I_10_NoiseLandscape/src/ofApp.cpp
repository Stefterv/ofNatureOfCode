#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    cam.setDistance(100);
}

//--------------------------------------------------------------
void ofApp::update(){
    i++;
}

//--------------------------------------------------------------
void ofApp::draw(){
    cam.begin();
    ofDrawGridPlane();
    for(float x = 0; x<100; x++){
    for(float y = 0; y<100; y++){
        ofNoFill();
        ofSetColor(255);
        ofBeginShape();
        drawVertex(x/10,y/10);
        drawVertex(x/10 - 0.1,y/10);
        drawVertex(x/10 - 0.1,y/10 - 0.1);
        drawVertex(x/10,y/10 - 0.1);
        ofEndShape(true);
    
    }
    }
    cam.end();
}
void ofApp::drawVertex(float x, float y){
    float h = ofNoise(x,y,i/100)*ofMap(mouseY,0,ofGetHeight(),100,0);
    ofVertex(x*100,h,y*100);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    switch(key) {
        case 'F':
        case 'f':
            ofToggleFullscreen();
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
