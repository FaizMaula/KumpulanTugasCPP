#ifndef STD_H_INCLUDED
#define STD_H_INCLUDED


#include <iostream>
using namespace std;

#define first(L) (L).first
#define info(P) (P)->info
#define next(P) (P)->next
#define barang(P) (P)->barang

struct penyewa{
    string nama, tPenyewaan, tPengembalian;
    int NIK;
};

struct barang{
    string namaBarang;
    int ID, kuantitas;
};

typedef struct elmPenyewa *adr_penyewa;
typedef struct elmBarang *adr_barang;
typedef struct elmrelation *adr_relation;

struct listPenyewa{
    adr_penyewa first;
};

struct listBarang{
    adr_barang first;
};

struct listRelation{
    adr_relation first;
};
/*
struct elmrelation{
    adr_barang nextB;
    adr_relation next;
};
*/
struct elmPenyewa{
    penyewa info;
    adr_penyewa next;
    listBarang barang;
};

struct elmBarang{
    barang info;
    adr_barang next;
};

void createListPenyewa(listPenyewa &LP);
void createListBarang(listBarang &LB);
adr_penyewa alokasiPenyewa(penyewa x);
adr_barang alokasiBarang(barang x);
void insertPenyewa(listPenyewa &LP, adr_penyewa P,string posisi);
void insertBarang(listBarang &LB, adr_barang P);
void showPenyewa(listPenyewa LP);
void showAllData(listPenyewa LP);
void showBarang(listBarang LB);
int showMenu();
int showCari();
int showAdmin();
adr_penyewa cariPenyewa(listPenyewa P, int NIK);
adr_barang cariBarang(listBarang B, int ID);
void sewaBarang(listPenyewa &P, listBarang B, int NIK, int ID);



#endif // STD_H_INCLUDED
