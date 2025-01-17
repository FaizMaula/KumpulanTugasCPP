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
        cout << "NAMA                : " << info(q).nama << endl;
        cout << "NIK                 : " << info(q).NIK << endl;
        cout << "Tanggal Penyewaan   : " << info(q).tPenyewaan << endl;
        cout << "Tanggal Pengembalian: " << info(q).tPengembalian << endl;
        cout << " " << endl;
        q = next(q);
    }
}
void showBarang(listBarang LB){
    adr_barang p = first(LB);
    if (first(LB) == NULL) {
        cout << "List Kosong " <<endl;
    }else {
        while (p != NULL){
            cout << "ID         : " << info(p).ID <<endl;
            cout << "Nama Barang: " <<info(p).namaBarang << endl;
            cout << " " << endl;
            p = next(p);
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
            cout << "NIK : " << info(q).NIK << endl;
            cout << "Tanggal Penyewaan   : " << info(q).tPenyewaan << endl;
            cout << "Tanggal Pengembalian: " << info(q).tPengembalian << endl;
            if (first(barang(q)) != NULL) {
                cout << "Sedang menyewa " << HitungJumlahChild(LP,info(q).NIK) << " barang" << endl;
                showBarang(barang(q));
            }else {
                cout << "Tidak ada barang yang disewa " << endl;
            }
            cout << " " << endl;
            q = next(q);
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

int showAdmin(){
    int pilihan;
    system("cls");
    cout <<"=======================================" << endl;
    cout <<"                  ADMIN                "<< endl;
    cout <<"======================================="<< endl;
    cout <<"1. Memasukan Data Barang "<< endl;
    cout <<"2. Menampilkan List Penyewa "<< endl;
    cout <<"3. Menampilkan List Barang "<< endl;
    cout <<"4. Menampilkan Semua Data "<< endl;
    cout <<"5. Hapus Data "<< endl;
    cout <<"0. Exit " << endl;
    cout <<"======================================="<< endl;
    cout << "Masukan Pilihan menu: ";
    int input = 0;
    cin >> input;
    cout << " " << endl;
    return input;

}

int showCari(){
    int pilihan;
    system("cls");
    cout <<"=======================================" << endl;
    cout <<"               Pencarian               "<< endl;
    cout <<"======================================="<< endl;
    cout <<"1. Mencari Data Penyewa "<< endl;
    cout <<"2. Mencari Data Barang "<< endl;
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
    if (p !=NULL and q !=NULL){
        r = alokasiBarang(info(q));
        L3 = barang(p);
        insertBarang(L3,r);
        barang(p) = L3;
    }
}
void inputAwal(listBarang &B){
    barang x;
    x.ID = 01;
    x.namaBarang = "TV";
    adr_barang P = alokasiBarang(x);
    insertBarang(B,P);
    x.ID = 02;
    x.namaBarang = "HP";
    P = alokasiBarang(x);
    insertBarang(B,P);
    x.ID = 03;
    x.namaBarang = "Laptop";
    P = alokasiBarang(x);
    insertBarang(B,P);
    x.ID = 04;
    x.namaBarang = "PC";
    P = alokasiBarang(x);
    insertBarang(B,P);
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

void deleteFirstBarang(listBarang &LB, adr_barang &b){
    b = first(LB);
    if (next(b) != NULL){
        first(LB) = next(b);
    }else {
        first(LB) = NULL;
    }
}
void deleteFirstPenyewa(listPenyewa &LP, adr_penyewa &p){
    p = first(LP);
    if (next(p) != NULL){
        first(LP) = next(p);
    }else {
        first(LP) = NULL;
    }
}
int HitungJumlahChild(listPenyewa LP,int NIK){
    int count = 0;
    adr_penyewa p = cariPenyewa(LP,NIK);
    adr_barang q = first(barang(p));
    while (q != NULL) {
        q = next(q);
        count++;
    }
    return count;
}
