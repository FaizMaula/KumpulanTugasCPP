#include <iostream>
#include <string>

using namespace std;

double nilaiakhir(double uts, double uas, double t) {
    double nilai;
    nilai = (0.3 * uts) + (0.4*uas) + (0.3*t);
    return nilai;
}

struct mahasiswa {
    string nama;
    int nim;
    double uts,uas,t,NA;
};

int main (){
    mahasiswa tab[10];
    int i;
    do {
        cin >> tab[0].nama >> tab[i].nim >> tab[i].uts >> tab[i].uas;
        tab[i].NA = nilaiakhir(tab[i].uts, tab[i].uas, tab[i].t);
        i++;
    } while (i < 10);
}


