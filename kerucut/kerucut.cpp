#include "kerucut.h"

void inputK_1301223017(kerucut &k){
    cout << "Masukkan tinggi kerucut: ";
    cin >> k.t ;
    cout << "Masukkan jari-jari kerucut: ";
    cin >> k.r;
}
double volume_1301223017(double r, int t){
    double v;
    v = ( phi * pow(r, 2) * t)/3;
    return v;
}
double luas_1301223017(double r, int s){
    double l;
    l = phi * r * (r+s);
    return l;
}
