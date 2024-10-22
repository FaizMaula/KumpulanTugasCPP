#include "STD.h"

void createListPenyewa(listPenyewa &LP){
    first(LP) = NULL;
}
void createListBarang(listBarang &LB){
    first(LB) = NULL;
}

adr_penyewa alokasiPenyewa(penyewa x) {
    adr_penyewa P = new elmPenyewa;
    next(P) = NULL;
    info(P) = x;
    createListBarang(barang(P));
    return P;
}

adr_barang alokasiBarang(barang x){
    adr_barang P = new elmBarang;
    next(P) = NULL;
    info(P) = x;
    return P;
}
void insertPenyewa(listPenyewa &LP,adr_penyewa P,string posisi){
    if(first(LP) == NULL) {
        first(LP) = P;
    } else if (posisi == "Awal"){
        next(P) = first(LP);
        first(LP) = P;
    } else {
        adr_penyewa q = first(LP);
        while (next(q) != NULL) {
            q = next(q);
        }
        next(q) = P;
    }
}
void insertBarang(listBarang &LB, adr_barang P){
    if (first(LB) == NULL){
        first(LB) = P;
    } else {
        adr_barang q = first(LB);
        while (next(q) != NULL) {
            q = next(q);
        }
        next(q) = P;
    }
}
void showPenyewa(listPenyewa LP){
    adr_penyewa q = first(LP);
    while (q != NULL){
        cout << "NAMA: " << info(q).nama << endl;
        cout << "NIK: " << info(q).NIK << endl;
        q = next(q);
        cout << " ======================= " << endl;
    }
}
void showBarang(listBarang LB){
    adr_barang p = first(LB);
    int i = 1;
    if (first(LB) == NULL) {
        cout << "List Kosong " <<endl;
    }else {
        while (p != NULL){
            cout << "Barang ke-" << i << " : ";
            cout << info(p).ID <<" " << info(p).namaBarang << endl;
            p = next(p);
            i++;
        }
        cout << endl;
    }
}
void showAllData(listPenyewa LP){
    adr_penyewa q = first(LP);
    if (first(LP) == NULL) {
        cout << "List Kosong " <<endl;
    }else {
        while (q != NULL){
            cout << "NAMA: " << info(q).nama << endl;
            cout << "NIK: " << info(q).NIK << endl;
            showBarang(barang(q));
            q = next(q);
            cout << " ======================= " << endl;
        }
    }
}
int showMenu() {
    int pilihan;
    system("cls");
    cout <<"=======================================" << endl;
    cout <<"   APLIKASI TRI DHARMA PERGURUAN TINGGI    "<< endl;
    cout <<"           TELKOM UNIVERSITY           "<< endl;
    cout <<"======================================="<< endl;
    cout <<"1. Masukan data penyewa"<< endl;
    cout <<"2. Barang yang ingin disewa "<< endl;
    cout <<"3. Cari Data "<< endl;
    cout <<"4. Admin "<< endl;
    cout <<"0. Exit" << endl;
    cout <<"======================================="<< endl;
    cout << "Masukan Pilihan menu: ";

    int input = 0;
    cin >> input;

    cout << " " << endl;

    return input;

}

void sewaBarang(listPenyewa &P, listBarang B, int NIK, int ID){
    adr_penyewa p;
    adr_barang q,r;
    listBarang L3;
    p = cariPenyewa(P,NIK);
    q = cariBarang(B,ID);
    //cout << info(p).name << " " << info(q).course_name;
    if (p !=NULL and q !=NULL){
        r = alokasiBarang(info(q));
        L3 = barang(p);
        insertBarang(L3,r);
        barang(p) = L3;
    }
}

adr_penyewa cariPenyewa(listPenyewa P, int NIK){
    adr_penyewa p = first(P);
    while (p!=NULL){
        if (info(p).NIK == NIK){
            return p;
        }
        p = next(p);
    }
    return NULL;
}


adr_barang cariBarang(listBarang B, int ID){
    adr_barang p = first(B);
    while (p!=NULL){
        if (info(p).ID == ID){
            return p;
        }
        p = next(p);
    }
    return NULL;
}
