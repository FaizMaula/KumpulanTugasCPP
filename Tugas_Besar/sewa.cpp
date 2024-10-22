#include "sewa.h"

void createListPenyewa(listPenyewa &LP){
    first(LP) = NULL;
}

void createListBarang(listBarang &LB){
    first(LB) = NULL;
}

adr_penyewa alokasiPenyewa(penyewa x){
    adr_penyewa P = new elmPenyewa;
    info(P) = x;
    next(P) = NULL;
    createListBarang(barangP(P));

    return P;
}

adr_barang alokasiBarang(barang x){
    adr_barang P = new elmBarang;
    info(P) = x;
    next(P) = NULL;

    return P;
}

void insertPenyewa(listPenyewa &LP, adr_penyewa P){
    adr_penyewa Q = first(LP);
    if(first(LP) == NULL){
        first(LP) = P;
    }else{
        while(next(Q) != NULL){
            Q = next(Q);
        }
        next(Q) = P;
    }
}

void insertBarang(listBarang &LB, adr_barang P){
    adr_barang Q = first(LB);
    if(first(LB) == NULL){
        first(LB) = P;
    }else{
        while(next(Q) != NULL){
            Q = next(Q);
        }
        next(Q) = P;
    }
}

adr_penyewa cariPenyewa(listPenyewa LP, string nama){
    adr_penyewa P = new elmPenyewa;
    while(P != NULL){
        if(info(P).nama == nama){
            return P;
        }
        P = next(P);
    }
    return NULL;
}

void showPenyewa(listPenyewa &LP){
    adr_penyewa P = first(LP);
    while (P != NULL) {
        cout << "Nama: " << info(P).nama << ", Alamat: " << info(P).alamat << ", Umur: " << info(P).umur << endl;

        adr_relation R = first(barangP(P));
        while (R != NULL) {
            cout << "Barang: " << info(nextBarang(R)).namaBarang << ", Tgl Sewa: " << info(nextBarang(R)).tgl_penyewaan << ", Tgl Kembali: " << info(nextBarang(R)).tgl_pengembalian << endl;
            R = next(R);
        }

        P = next(P);
    }
}
