#include "lcg.h"

LCG::LCG(int x, int a, int c, int m) {
    if (!(0 < m && 0 <= a < m && 0 <= c < m))
        throw std::exception();

    this->a = a;
    this->c = c;
    this->m = m;
    this->x = x;
}

LCG::LCG(int x) : LCG::LCG(x, 3, 9, 10007) {}

void LCG::set_m(int m) {
    this->m = m;
}

int LCG::get_int() {
    x = mod((long long)a*x + c, m);
    return x;
}

double LCG::next() {
    return (double)get_int() / m;
}
