#pragma once
#include <stdexcept>
#include <cmath>
#include "generator.h"
#include "modlib.h"
#include "lcg.h"
#include "scg.h"


// Ratio mem generator
class RMG : public Generator {
private:
    Generator* gen = nullptr;
public:
    RMG(int x);

    virtual double next() override;
};
