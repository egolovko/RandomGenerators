#include "modlib.h"

template<typename T>
T mod(T x, T m) {
    return ((x % m) + m) % m;
}

template<typename T>
T madd(T a, T b, T m) {
    return mod(mod(a, m) + mod(b, m), m);
}

template<typename T>
T msub(T a, T b, T m) {
    return mod(mod(a, m) - mod(b, m), m);
}


template<typename T>
T mmult(T a, T b, T m) {
    return mod(mod(a, m) * mod(b, m), m);
}
