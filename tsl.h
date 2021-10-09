#pragma once
#include <stdexcept>
#include "generator.h"
#include "modlib.h"
#include "lcg.h"

// Three-sigma limits
class TSL : public Generator {
private:
    double m;
    double sigma;
    Generator* gen = nullptr;
public:
    TSL(int x, double m, double sigma);
    TSL(int x);

    virtual double next() override;
};
