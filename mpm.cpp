#include "mpm.h"
#include <iostream>

using namespace std;

MPM::MPM(int x) {
    this->has_val = false;
    this->gen = new LCG(x);
}

double MPM::next() {
    if (has_val) {
        has_val = false;
        return x2;
    }

    double u1;
    double u2;
    double v1;
    double v2;
    double s = 2.;

    while (s >= 1) {

        u1 = gen->next();
        u2 = gen->next();

        v1 = 2*u1 - 1;
        v2 = 2*u2 - 1;
        s = v1*v1 + v2*v2;
    }

    x1 = v1 * sqrt(-2*log(s) / s);
    x2 = v2 * sqrt(-2*log(s) / s);

    has_val = true;
    return x1;
}
