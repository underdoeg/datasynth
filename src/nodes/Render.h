#ifndef RENDER_H
#define RENDER_H

#include "src/BaseNode.h"

namespace ds {

class RenderWindow: public ofxFensterListener {
public:
	void setup(){
	}
	void draw(){
		ofDrawBitmapString("hello world!",20,20);
	}
};

class Render : public BaseNode
{
  public:
    Render(float _x, float _y, string _name);
    ~Render();

    void process();
    void draw(ofEventArgs & args);

    ofxFenster* win;
    RenderWindow* renderWin;
  protected:
  private:
};

}
#endif // RENDER_H