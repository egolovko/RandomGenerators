#include "icg.h"

ICG::ICG(int x, int a, int c, int p) {
    this->a = a;
    this->c = c;
    this->p = p;
    this->x = x;
}

ICG::ICG(int x) : ICG::ICG(x, 1, 2, 10007) {}

int ICG::inverse(int x) {
    int res = 1;
    for (int deg = p-2; deg; deg /= 2) {
        if (deg % 2)
            res = (res * x) % p;
        x = (x * x) % p;
    }
    return res;
}

int ICG::get_int() {
    x = mod(((long long)a * inverse(x) + c), p);
    return x;
}

double ICG::next() {
    return (double)get_int() / p;
}
