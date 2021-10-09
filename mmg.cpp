#include "mmg.h"

MMG::MMG(int x1, int x2, int m1, int m2) {
    this->m1 = m2;
    this->m2 = m2;

    lcg = new LCG(x1);
    scg = new SCG(x2);
    lcg->set_m(m1);
    scg->set_m(m2);
}

MMG::MMG(int x1, int x2) : MMG::MMG(x1, x2, 10007, 10007) {}

MMG::MMG(int x) : MMG(x, x) {}

int MMG::get_int() {
    int Xn, Yn;
    Xn = lcg->get_int();
    Yn = scg->get_int();
    return msub(Xn, Yn, std::max(m1, m2));
}

double MMG::next() {
    return (double)get_int() / m2;
}
