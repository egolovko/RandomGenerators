#include "rmg.h"

RMG::RMG(int x) {
    this->gen = new LCG(x);
}

double RMG::next() {
    double x;
    double u;
    double v;
    double x2;
    double temp_real;

    while (true) {
        u = gen->next();
        v = gen->next();

        if (fabs(u) < 0) continue;

        x = sqrt(8 / exp(1)) * (v - 0.5) / u;
        x2 = x*x;


        if ((x2 - (5. - 4.*exp(0.25)*u)) <= 0.)
            return x;


        if ((x2 - (4. * exp(-1.35) / u + 1.4)) >= 0.)
            continue;


        if ((x2 - (-4. * log(u))) <= 0.)
            return x;
    }
}
