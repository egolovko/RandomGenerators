#pragma once
#include <stdexcept>
#include "generator.h"
#include "modlib.h"

// Square congruential generator
class SCG : public Generator {
    int d;
    int a;
    int c;
    int m;
    int x;
public:
    SCG(int x, int d, int a, int c, int m);
    SCG(int x);

    void set_m(int m);
    virtual double next() override;
    int get_int();
};
