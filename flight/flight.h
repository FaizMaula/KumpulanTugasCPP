#ifndef FLIGHT_H_INCLUDED
#define FLIGHT_H_INCLUDED

#include <iostream>
using namespace std;

#define first(L) (L).first
#define info(P) P->info
#define next(P) P->next


struct jadwalPenerbangan {
    string kode,jenis,tanggal,waktu,asal,tujuan;
    int kapasitas;
};
typedef struct elemenJadwal *adr_jadwalP;
typedef jadwalPenerbangan infotype;
struct elemenJadwal {
    infotype info;
    adr_jadwalP next;
};
struct listJadwal {
    adr_jadwalP first;
};

void createListJadwal_1301223017(listJadwal &L);
adr_jadwalP createElemenJadwal_1301223017(infotype x);
void insertLastJ_1301223017(listJadwal &L, adr_jadwalP P);
void showJadwal_1301223017(listJadwal L);
void deleteFirstJ_1301223017(listJadwal &L, adr_jadwalP &P);
adr_jadwalP searchJ_1301223017(listJadwal L, string dari, string ke, string tanggal);

#endif // FLIGHT_H_INCLUDED
