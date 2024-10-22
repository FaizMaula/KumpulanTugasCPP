#ifndef SEWA_H_INCLUDED
#define SEWA_H_INCLUDED

#include <iostream>
using namespace std;

#define first(L) (L).first
#define info(P) (P)->info
#define next(P) (P)->next
#define nextBarang(P) (P)->nextBarang
#define barangP(P) (P)->barangP

struct penyewa{
    string nama, alamat;
    int umur;
};

struct barang{
    string namaBarang;
    int tgl_penyewaan, tgl_pengembalian;
};

typedef struct elmPenyewa *adr_penyewa;
typedef struct elmBarang *adr_barang;

struct listPenyewa{
    adr_penyewa first;
};

struct listBarang{
    adr_barang first;
};

struct elmPenyewa{
    penyewa info;
    adr_penyewa next;
    listRelation barangP;
};

struct elmBarang{
    barang info;
    adr_barang next;
};

void createListPenyewa(listPenyewa &LP);
void createListBarang(listBarang &LB);
adr_penyewa alokasiPenyewa(penyewa x);
adr_barang alokasiBarang(barang x);
void insertPenyewa(listPenyewa &LP, adr_penyewa P);
void insertBarang(listBarang &LB, adr_barang P);
void showPenyewa(listPenyewa &LP);

#endif // SEWA_H_INCLUDED
