#include <iostream>
#include "adt.h"

using namespace std;

int main()
{
    float volume, r, t;
    cout << "Masukkan Jari-jari dan tinggi: ";
    cin >> r >> t;
    volume = kerucut_1301223069(r, t);
    cout << "Bangun ruang kerucut / Volumenya adalah: " << volume;

    return 0;
}
