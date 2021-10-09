#pragma once
#include <stdexcept>
#include <cmath>
#include "generator.h"
#include "modlib.h"
#include "lcg.h"
#include "scg.h"

// Marsaglia polar method
class MPM : public Generator {
private:
    bool has_val = false;
    double x1;
    double x2;
    Generator* gen = nullptr;
public:
    MPM(int x);

    virtual double next() override;
};

