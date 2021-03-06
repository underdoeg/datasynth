#include "Constant.h"
using namespace ds;

Constant::Constant(float _x, float _y, string _name)
{
    value = 0.0;
    Spread temp(new SpreadStruct);
    temp->name = "none";
    temp->data.push_back(value);
    output.push_back(new Pin(temp, color));
    x = _x;
    y = _y;
    name = _name;
    TextInputPtr t(new TextInput(&x, &y, name, &value, &bIsActive));
    textinput = t;
    SliderPtr s(new Slider(&x, &y, name, &value, &bIsActive));
    slider = s;
    bValueIsSaveable = true;
    height = 40;
}

Constant::~Constant()
{
    output.clear();
}

void Constant::init()
{
    //cout << "init from constant: " << output[0]->value << endl;
    slider->setValue(value);
}

string Constant::getValueAsString()
{
    return ofToString(value);
}

void Constant::setValueFromString(string _val)
{
    value = ofToFloat(_val);
}

void Constant::process()
{
    output[0]->value->data[0] = value;
    //cout << "process from Constant()\n";
    //cout << "output pin: " << output[0]->value.data[0] << endl;
}

void Constant::draw()
{
    textinput->draw();
    slider->draw();
}
