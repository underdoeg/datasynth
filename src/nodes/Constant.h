#ifndef CONSTANT_H
#define CONSTANT_H

#include "src/BaseNode.h"
#include "src/Slider.h"

namespace ds {

class Constant : public BaseNode
{
  public:
    Constant();
    ~Constant();
    Slider* slider;
    void process();
    void draw(ofEventArgs & args);
  protected:
  private:
};

}
#endif // CONSTANT_H
