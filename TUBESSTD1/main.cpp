#include "STD.h"


int main()
{
    listBarang B;
    listPenyewa P;
    createListBarang(B);
    createListPenyewa(P);
    penyewa xp;
    barang xb;
    adr_penyewa p;
    adr_barang b;
    int NIK,ID, pilihan, choose, x, z;
    string y, tPenyewaan, tPengembalian;
    inputAwal(B);
    pilihan = 0;
    pilihan = showMenu();
    while(pilihan != 0){
        if(pilihan == 1){
            cout << "==============================" << endl;
            cout << "  input Nama dan NIK penyewa  " << endl;
            cout << "==============================" << endl;

                cout << "Nama                : ";
                cin >> xp.nama;

                cout << "NIK                 : ";
                cin >> xp.NIK;

                cout << "Tanggal Penyewaan   : ";
                cin >> xp.tPenyewaan;

                cout << "Tanggal Pengembalian: ";
                cin >> xp.tPengembalian;

                cout << " " << endl;
                p = alokasiPenyewa(xp);
                insertPenyewa(P,p,"Awal");

        } else if(pilihan == 2){
            cout << "================================================" << endl;
            cout << "            Barang yang ingin disewa            " << endl;
            cout << "================================================" << endl;
            cout << "NIK: ";
            cin >> NIK;
            cout << "ID : ";
            cin >> ID;
            cout << " " << endl;
            sewaBarang(P,B,NIK,ID);
        } else if(pilihan == 3){
            choose = 0;
            choose = showCari();
            while(choose != 0){
                if(choose == 1){
                    cout << "===================================" << endl;
                    cout << "        Mencari Data Penyewa       " << endl;
                    cout << "===================================" << endl;
                    cout << "Masukan NIK: ";
                    cin >> NIK;
                    cariPenyewa(P, NIK);
                } else if(choose == 2){
                    cout << "===================================" << endl;
                    cout << "        Mencari Data Penyewa       " << endl;
                    cout << "===================================" << endl;
                    cout << "Masukan ID: ";
                    cin >> ID;
                    cariBarang(B, ID);
                }
                cout << "Kembali ke menu Cari Data? (Y/N): ";
                cin >> y;
                while(y != "Y"){
                    cout << "Kembali ke menu Cari Data? (Y/N): ";
                    cin >> y;
                }
                choose = showCari();
            }
            if(choose == 1){
                cout << "===================================" << endl;
                cout << "        Mencari Data Penyewa       " << endl;
                cout << "===================================" << endl;
                cout << "Masukan NIK: ";
                cin >> NIK;
                cariPenyewa(P, NIK);
            } else if(choose == 2){
                cout << "===================================" << endl;
                cout << "        Mencari Data Penyewa       " << endl;
                cout << "===================================" << endl;
                cout << "Masukan ID: ";
                cin >> ID;
                cariBarang(B, ID);
            }
        } else if(pilihan == 4){
            choose = 0;
            choose = showAdmin();

            while(choose != 0){
                y = "N";
                while(y != "Y"){
                if(choose == 1){
                    cout << "===================================" << endl;
                    cout << "  input ID Barang dan nama barang  " << endl;
                    cout << "===================================" << endl;
                    cout << "ID         : ";
                    cin >> xb.ID;
                    cout << "Nama Barang: ";
                    cin >> xb.namaBarang;
                    cout << " " << endl;
                    b = alokasiBarang(xb);
                    insertBarang(B,b);
                } else if(choose == 2){
                    cout << "====================" << endl;
                    cout << "    List Penyewa    " << endl;
                    cout << "====================" << endl;
                    showPenyewa(P);
                    cout << " " << endl;
                } else if(choose == 3){
                    cout << "===============" << endl;
                    cout << "  List Barang  " << endl;
                    cout << "===============" << endl;
                    showBarang(B);
                    cout << " " << endl;
                } else if(choose == 4){
                    cout << "=================" << endl;
                    cout << "  Show All Data  " << endl;
                    cout << "=================" << endl;
                    showAllData(P);
                    cout << " " << endl;
                }
                cout << "Kembali ke menu Admin? (Y/N): ";
                cin >> y;
                }
                choose = showAdmin();
            }
        }
        pilihan = showMenu();
    }
    cout << "ANDA TELAH KELUAR DARI PROGRAM" << endl;
}
