#pragma once
#include <stdexcept>
#include <cmath>
#include "generator.h"
#include "modlib.h"
#include "lcg.h"

// Log-mem distribution generator
class LMDG : public Generator {
private:
    double mu;
    Generator* gen = nullptr;

public:
    LMDG(int x, double mu);
    LMDG(int x);

    virtual double next() override;
};
