#pragma once
#include <stdexcept>
#include "generator.h"
#include "modlib.h"

// Inversive congruential generator
class ICG : public Generator {
private:
    int a;
    int c;
    int p;
    int x;

    int inverse(int x);
public:
    ICG(int x, int a, int c, int p);
    ICG(int x);

    virtual double next() override;
    int get_int();
};
