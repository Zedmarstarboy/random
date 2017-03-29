#include "ofApp.h"
#include <vector>
#include <random>
using namespace std;

//--------------------------------------------------------------
void ofApp::setup(){
	random_device rd;
	mt19937 eng(rd()); //random device is used to seed engine
	normal_distribution<> mydist1(1000,15);
	
	for (int i=0; i < 20; i++)
	{
		X.push_back(mydist1(eng)); //same output
	}
	
	normal_distribution<> mydist2(800,15);
	
	for(int x=0; x < 20; x++)
	{
		Y.push_back(mydist2(eng)); //same output
	}
	
	jewel.load("diamond.png");// image to use (must be stored in "random/bin/data" folder)
	X = {500, 1000, 30, 100, 300, 200, 750, 380 };// set of x-coordinates for jewel
	Y = {630, 400, 900,40, 200, 0, 90, 30}; //set of y-coordinates for jewel
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
ofBackground(0);

for(auto i = 0u; i < X.size(); i++)
 {
   jewel.draw(X[i], Y[i]);
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
