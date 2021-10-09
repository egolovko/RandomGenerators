#include "lmdg.h"

LMDG::LMDG(int x, double mu) {
    if (x < 0)
        throw std::exception();

    this->gen = new LCG(x);
    this->mu = mu;
}

LMDG::LMDG(int x) : LMDG::LMDG(x, 1.) {}

double LMDG::next() {
    return -mu * log(gen->next());
}
