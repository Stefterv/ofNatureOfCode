#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundAuto(false);
    ofBackground(0);
    for(int i = 0; i<50; i++){
        Balloon bInst;
        bInst.setup();
        bList.push_back(bInst);
    }
}

//--------------------------------------------------------------
void ofApp::update(){
    wind = ofVec2f(ofNoise(ofGetFrameNum()/100.0,1)-0.5,ofNoise(ofGetFrameNum()/100.0,1000)-0.5);
    for(Balloon &bInst : bList){
        bInst.addForce(wind);
        bInst.update(&bList);
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
//    wind *= 125;
//    ofPushMatrix();
//    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
//    ofDrawLine(0,0,wind.x,wind.y);
//    ofPopMatrix();
    
    for(Balloon &bInst : bList){
        bInst.draw(&bList);
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if(key == 's'){
        ofBackground(0);
        ofBeginSaveScreenAsPDF("screenshot-"+ofGetTimestampString()+".pdf");
    }
    if(key == 'f'){
        ofBackground(0);
    }
    if(key == 'd'){
        ofEndSaveScreenAsPDF();
        exit();
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
