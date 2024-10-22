#include "flight.h"

void createListJadwal_1301223017(listJadwal &L){
    first(L) = NULL;
}
adr_jadwalP createElemenJadwal_1301223017(infotype x){
    adr_jadwalP p = new elemenJadwal;
    info(p) = x;
    next(p) = NULL;
    return p;
}
void insertLastJ_1301223017(listJadwal &L, adr_jadwalP P){
    if (first(L) == NULL) {
        first(L) = P;
    }else {
        adr_jadwalP q = first(L);
        while (next(q) != NULL) {
            q = next(q);
        }
        next(q) = P;
    }
}
void showJadwal_1301223017(listJadwal L){
    adr_jadwalP P = first(L);
    if (first(L) == NULL) {
        cout << "List Kosong" << endl;
    } else {
        while (P != NULL) {
            cout<< info(P).kode << " " << info(P).jenis << " " <<info(P).tanggal << " "<< info(P).waktu << " " << info(P).asal << " " << info(P).tujuan << endl;
            P = next(P);
        }
    }
}
void deleteFirstJ_1301223017(listJadwal &L, adr_jadwalP &P){
    adr_jadwalP q = first(L);
    if (first(L) == NULL) {
        cout << "List Kosong" << endl;
    } else if (next(q) == NULL){
        P = first(L);
        first(L) = NULL;
    } else {

        while (next(next(q)) != NULL) {
            q = next(q);
        }
        P = next(q);
        next(q) = NULL;
    }
}
adr_jadwalP searchJ_1301223017(listJadwal L, string dari, string ke, string tanggal){
    adr_jadwalP found = NULL, p = first(L);
    if (first(L) == NULL){
        cout << "List Kosong" << endl;
    } else {
        while (p != NULL and found == NULL ){
            if (dari == info(p).asal and ke == info(p).tujuan and tanggal == info(p).tanggal){
                found = p;
            }
            p = next(p);
        }
    }
    return found;
}
