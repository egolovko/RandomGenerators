#include "lfg.h"

LFG::LFG(int x1, int x2, int m) {
    this->x1 = x1;
    this->x2 = x2;
    this->m = m;
}


LFG::LFG(int x1, int x2) : LFG::LFG(x1, x2, 10007) {}

LFG::LFG(int x) : LFG::LFG(x, x) {}

int LFG::get_int() {
    int temp = mod(((long long)x1 + x2), m);
    x1 = x2;
    x2 = temp;
    return x2;
}

double LFG::next() {
    return (double)get_int() / m;
}
