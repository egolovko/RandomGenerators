#include "tsl.h"

TSL::TSL(int x, double m, double sigma) {
    this->m = m;
    this->sigma = sigma;
    this->gen = new LCG(x);
}

TSL::TSL(int x) : TSL::TSL(x, 0., 1.) {}

double TSL::next() {
    double sum = 0;
    for (int i = 0; i < 12; i++)
        sum += gen->next();

    return m + (sum - 6)*sigma;
}
