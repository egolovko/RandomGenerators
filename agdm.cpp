#include "agdm.h"

AGDM::AGDM(int x, double a) {
    if (x < 0 || a < 0)
        throw std::exception();

    this->gen = new LCG(x);
    this->a = a;
}

AGDM::AGDM(int x) : AGDM::AGDM(x, 1.) {}

double AGDM::next() {
    double u;
    double y;
    double x;
    double v;

    while (true) {
        u = gen->next();
        y = tan(M_PI * u);
        x = sqrt(2*a - 1) * y + a - 1;

        if (x < 0) continue;

        v = gen->next();
        if ((v - (1 + y*y) * exp((a - 1)*log(x / (a - 1)) - sqrt(2. * a - 1) * y)) >= 0)
            continue;

        return x;
    }
}

