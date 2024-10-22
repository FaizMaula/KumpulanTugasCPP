#include "mod06.h"

void createList_1301223017(List &L){
    first(L) = NULL;
    last(L) = NULL;
}
infotype createInfotype_1301223017(string judul, string penyanyi)
{
    infotype x;
    x.judul = judul;
    x.penyanyi = penyanyi;
    return x;
}
adr createNewElmt_1301223017(infotype x, adr p){
    p = new elmtList;
    info(p) = x;
    next(p) = NULL;
    prev(p) = NULL;
    return p;
}
bool isEmpty_1301223017(List L) {
    return first(L) == NULL && last(L) == NULL;
}
void insertFirst_1301223017(List &L, adr p) {
    if (isEmpty_1301223017(L) ){
        first(L) = p;
        last(L) = p;
    } else {
        next(p) = first(L);
        prev(first(L)) = p;
        first(L) = p;
    }
 }

 void insertAfter_1301223017(List &L, adr prec, adr p) {
    next(p) = next(prec);
    prev(p) = prec;
    prev(next(prec)) = p;
    next(prec) = p;
 }

 void insertLast_1301223017(List &L, adr p){
    if (isEmpty_1301223017(L) ) {
        first(L) = p;
        last(L) = p;
    } else {
        prev(p) = last(L);
        next(last(L)) = p;
        last(L) = p;
    }
 }

void deleteFirst_1301223017(List &L, adr p)
{
    p = first(L);
    if (first(L) != last(L)) {
        first(L) = next(p);
        next(p) = NULL;
        prev(first(L)) = NULL;
    } else {
        first(L) = NULL;
        last(L) = NULL;
    }
}
void deleteAfter_1301223017(List &L, adr prec, adr p)
{
    p = next(prec);
    next(prec) = next(p);
    prev(next(p)) = prec;
    prev(p) = NULL;
    next(p) = NULL;
}

void concat_1301223017(List L1, List L2, List &L3) {
    adr p = first(L1);
    adr q = first(L2);
    adr c;

        while (p != NULL) {
            c = createNewElmt_1301223017(info(p),c);
            insertLast_1301223017(L3,c);
            p = next(p);
        }
        while (q != NULL) {
            c = createNewElmt_1301223017(info(q),c);
            insertLast_1301223017(L3,c);
            q = next(q);
        }
}
void deleteLast_1301223017(List &L, adr p)
{
    p = last(L);
    last(L) = prev(last(L));
    prev(p) = NULL;
    next(last(L)) = NULL;
}


adr findLagu_1301223017(string judul, List L) {
    adr p = first(L);
    adr q = NULL;
    while (p != NULL) {
        if (info(p).judul == judul) {
            q = p;
        }
        p = next(p);
    }
    return q;

}

void removeLagu_1301223017(string judul, List &L){
    adr p = findLagu_1301223017(judul,L);
    if (p == first(L)) {
        deleteFirst_1301223017(L,p);
    } else if (p == last(L)) {
        deleteLast_1301223017;
    } else {
        adr prec = prev(p);
        deleteAfter_1301223017(L,prec,p);
    }

}

void showAll(List &L) {
    adr P = first(L);

    if (first(L) != NULL && last(L) != NULL) {
        while (P != NULL) {
            cout << info(P).judul << " " << info(P).penyanyi << endl;
            P = next(P);
        }
    }else {
        cout << "List Kosong" << endl;
    }
}
int selectMenu() {
    cout << "=====" << "MENU" << "=====" << endl;
    cout << "1. Menambah Data List" << endl;
    cout << "2. Hapus Data" << endl;
    cout << "3. Tampilkan Data" << endl;
    cout << "0. Exit" << endl;

    int inputUser = 0;
    cout << "Masukan Anda : " ;
    cin >>inputUser;

    return inputUser;

};
