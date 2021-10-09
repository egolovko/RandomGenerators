#pragma once
#include <stdexcept>
#include "generator.h"
#include "modlib.h"

// Lagged Fibonacci generator
class LFG : public Generator {
    int m;
    int x1, x2;
public:
    LFG(int x1, int x2, int m);
    LFG(int x1, int x2);
    LFG(int x);

    virtual double next() override;
    int get_int();
};
