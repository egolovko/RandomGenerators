#include <bits/stdc++.h>
#include "modlib.h"
#include "generator.h"
#include "lcg.h"
#include "scg.h"
#include "lfg.h"
#include "icg.h"
#include "mmg.h"
#include "tsl.h"
#include "mpm.h"
#include "rmg.h"
#include "lmdg.h"
#include "agdm.h"

using namespace std;



void draw_histogram(vector<double>& v, double l_bound, double r_bound, int count_of_intervals) {
    vector<int> hist_data(count_of_intervals);
    for (auto item : v) {
        if (item < l_bound || r_bound < item) continue;
        int index = (item - l_bound) / (r_bound - l_bound) * count_of_intervals;
        hist_data[index]++;
    }

    int data_item;
    double l;
    double r;

    for (int i = 0; i < hist_data.size(); i++) {
        l = i * (r_bound - l_bound) / count_of_intervals + l_bound;
        r = (i + 1) * (r_bound - l_bound) / count_of_intervals + l_bound;
        data_item = hist_data[i];

        printf("[%.2f; %.2f) \t %.5f\n", l, r, (double)data_item / v.size());
    }

}


void fill_vector(Generator* gen, vector<double>& v) {
    for (int i = 0; i < v.size(); i++) {
        v[i] = gen->next();
    }
}


int main()
{
    int x = 42;

    vector<Generator*> generators = {
        new LCG(x),
        new SCG(x),
        new LFG(x),
        new ICG(x),
        new MMG(x),
        new TSL(x),
        new MPM(x),
        new RMG(x),
        new LMDG(x),
        new AGDM(x)
    };

    cout << "1) LCG" << endl;
    cout << "2) SCG" << endl;
    cout << "3) LFG" << endl;
    cout << "4) ICG" << endl;
    cout << "5) MMG" << endl;
    cout << "6) TSL" << endl;
    cout << "7) MPM" << endl;
    cout << "8) RMG" << endl;
    cout << "9) LMDG" << endl;
    cout << "10) AGDM" << endl;

    int i;
    do { cin >> i;} while (i < 1 && 10 < i);
    --i;

    int n = 100;
    vector<double> numbers(n);

    fill_vector(generators[i], numbers);

    if (0 <= i && i <= 4) draw_histogram(numbers, 0, 1, 10);
    else if (5 <= i && i <= 7) draw_histogram(numbers, -3, 3, 12);
    else if (8 <= i && i <= 10) draw_histogram(numbers, 0, 5, 12);
}
