#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255);
    ofSetBackgroundAuto(false);
}

//--------------------------------------------------------------
void ofApp::update(){
    ofSetWindowTitle(to_string(ofGetFrameRate()));
}

//--------------------------------------------------------------
void ofApp::draw(){
    
}

void ofApp::drawSplatter(int x, int y){
    ofSetColor(ofRandom(255),ofRandom(255),ofRandom(255));
    ofFill();
    for(int i = 0; i<150; i++){
        float splatterx = std::normal_distribution<float>(50, 35)(generator);
        float splattery = std::normal_distribution<float>(50, 35)(generator);
        float size = std::normal_distribution<float>(25, 50)(generator);
        
        ofDrawEllipse(x + splatterx, y + splattery, size, size);
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
    drawSplatter(x, y);
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    drawSplatter(x, y);
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
