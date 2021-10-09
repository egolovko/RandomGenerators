#pragma once

template<typename T1, typename T2>
T1 mod(T1 x, T2 m) {
    return ((x % m) + m) % m;
}

template<typename T1, typename T2, typename T3>
T1 madd(T1 a, T2 b, T3 m) {
    return mod(mod(a, m) + mod(b, m), m);
}

template<typename T1, typename T2, typename T3>
T1 msub(T1 a, T2 b, T3 m) {
    return mod(mod(a, m) - mod(b, m), m);
}

template<typename T1, typename T2, typename T3>
T1 mmult(T1 a, T2 b, T3 m) {
    return mod(mod(a, m) * mod(b, m), m);
}
