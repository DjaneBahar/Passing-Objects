#ifndef Foo_h
#define Foo_H

#include "Arduino.h"
#include "Bar.h"

class Foo{
    public:
      Foo(Bar *bar) { this->bar = bar; }

      void action() { bar->action(); }

      Bar* bar;


};

#endif