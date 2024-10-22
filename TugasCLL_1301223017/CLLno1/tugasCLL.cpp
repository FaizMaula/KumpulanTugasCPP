#include "tugasCLL.h"

void createList(List &L){
    first(L) = NULL;
    last(L) = NULL;
}
adr createNewElmt(string nama,string nim, int usia) {
    adr p = new elm;
    p->nama = nama;
    p->nim = nim;
    p->umur = usia;
    next(p) = NULL;
    return p;
}

bool isEmpty(List L){
    return first(L) == NULL and last(L) == NULL;
}


void pemilihan(List L, group &G){
    adr p = first(L);
    if (isEmpty(L)) {
        cout << "List is empty." << endl;
    }
    G.ketua = p;
    G.bendahara = p;

    while (next(p) != first(L)) {
        if (G.ketua->umur < p->umur) {
            G.ketua = p;
        }
        if (G.bendahara->umur > p->umur) {
            G.bendahara = p;
        }
        p = next(p);
    }
}

void tambahAnggota(List &L,string nim, string nama, int usia){
    adr p = createNewElmt(nama,nim,usia);
    if (isEmpty(L)) {
        first(L) = p;
        next(p) = first(L);
        last(L) = p;
    } else {
        adr q = first(L);
        next(p) = first(L);
        while (next(q) != first(L)) {
            q = next(q);
        }
        next(q) = p;
        first(L) = p;

    }

}
