#include "scg.h"


SCG::SCG(int x, int d, int a, int c, int m) {
    this->d = d;
    this->a = a;
    this->c = c;
    this->m = m;
    this->x = x;
}

SCG::SCG(int x) : SCG(x, 3, 9, 11, 10007) {}

void SCG::set_m(int m) {
    this->m = m;
}

int SCG::get_int() {
    x = mod((d*x*x + a*x + c), m);
    return x;
}

double SCG::next() {
    return (double)get_int() / m;
}
