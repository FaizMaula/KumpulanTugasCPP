#include "adt.h"

void tampil_pelajaran(pelajaran pel){
    cout << "nama pelajaran: " << pel.namaMapel << endl;
    cout << "nilai: " << pel.kodeMapel;
}

pelajaran create_pelajaran(string namapel, string kodepel) {
    pelajaran pel;
    pel.namaMapel = namapel;
    pel.kodeMapel = kodepel;
    return pel;
}
