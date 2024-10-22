#ifndef KERUCUT_H_INCLUDED
#define KERUCUT_H_INCLUDED

#include <iostream>
#include <math.h>

using namespace std;

struct kerucut {
    int t,s;
    double r,v,l;
};
const double phi = 22.0/7.0;

void inputK_1301223017(kerucut &k);
double volume_1301223017(double r, int t);
double luas_1301223017(double r,int s);


#endif // KERUCUT_H_INCLUDED
