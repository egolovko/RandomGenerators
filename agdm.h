#pragma once
#include <stdexcept>
#include <cmath>
#include "generator.h"
#include "modlib.h"
#include "lcg.h"


// Arsen gamma distrubution method
class AGDM : public Generator {
private:
    double a;
    Generator* gen = nullptr;

public:
    AGDM(int x, double a);
    AGDM(int x);

    virtual double next() override;
};
