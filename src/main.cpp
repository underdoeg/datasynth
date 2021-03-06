#include "ofMain.h"
#include "Core.h"
#include "ofxFensterManager.h"

using namespace ds;

//========================================================================
int main( ){
	ofSetupOpenGL(ofxFensterManager::get(), 640 ,720, OF_WINDOW);			// <-------- setup the GL context
	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofPtr<ofBaseApp> ptr = ofPtr<ofBaseApp>(new Core());
	ofRunApp(ptr);
}
