#pragma once
#include <stdexcept>
#include "generator.h"
#include "modlib.h"

// Linear congruential generator
class LCG : public Generator {
private:
    int a;
    int c;
    int m;
    int x;
public:
    LCG(int x);
    LCG(int x, int a, int c, int m);

    int get_int();
    void set_m(int m);
    virtual double next() override;
};
