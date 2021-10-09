#pragma once
#include <stdexcept>
#include "generator.h"
#include "modlib.h"
#include "lcg.h"
#include "scg.h"

// Merge-memes genarator
class MMG : public Generator {
private:
    int m1;
    int m2;

    LCG* lcg = nullptr;
    SCG* scg = nullptr;
public:
    MMG(int x1, int x2, int m1, int m2);
    MMG(int x1, int x2);
    MMG(int x);

    virtual double next() override;
    int get_int();
};
