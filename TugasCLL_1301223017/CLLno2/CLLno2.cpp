#include "CLLno2.h"

void createList_1301223017(List &L){
    first(L) = NULL;
}
adr createNewElm_1301223017(string judul, string penyanyi){
    adr p = new elmtList;
    p->judul = judul;
    p->penyanyi = penyanyi;
    return p;
}
void insertLast_1301223017(adr p, List &L){
    if (first(L) == NULL){
        first(L) = p;
        next(p) = p;
        prev(p) = p;
    } else {
        adr q = first(L);
        next(p) = first(L);
        while (next(q)!=first(L)){
            q = next(q);
        }
        prev(p) = q;
        next(q) = p;

    }
}
void add_1301223017(string judul, string penyanyi, List &L){
    adr p = createNewElm_1301223017(judul,penyanyi);
    insertLast_1301223017(p,L);
}
void showLagu_1301223017(List &L){
    adr p = first(L);
    while (next(p) != first(L)) {
        cout << p->judul << " " << p->penyanyi << endl;
        p = next(p);
    }
    cout << p->judul << " " << p->penyanyi << endl;
}
void deleteFirst_1301223017(List &L, adr p){
    adr q = first(L);
    if (next(q) == q) {
        p = first(L);
        next(first(L)) = NULL;
        first(L) = NULL;
    } else {
        p = first(L);
        while (next(q) != first(L)) {
            q = next(q);
        }
        first(L) = next(p);
        next(q) = first(L);
        next(p) = NULL;
    }
}
void deleteAfter_1301223017(adr prec, adr p){
    p = next(prec);
    next(prec) = next(p);
    prev(next(p)) = prec;
    prev(p) = NULL;
    next(p) = NULL;
}
adr searchLagu_1301223017(string judul, string penyanyi, List L){
    adr q = NULL;
    adr p = first(L);
    do {
        if (judul == p->judul and penyanyi == p->penyanyi) {
            q = p;
        }
        p = next(p);
    } while ((p)!= first(L));
    /*if (judul == p->judul and penyanyi == p->penyanyi) {
            q = p;
    }*/
    return q;
}
void moveToEnd_1301223017(string judul,string penyanyi,List &L){
    if (first(L) == NULL) {
        cout << "List Kosong" <<endl;
    } else {
        adr q = first(L);
        adr p = searchLagu_1301223017(judul,penyanyi,L);
        while (next(q)!= first(L) and p != NULL) {
            q = next(q);
        }
        next(prev(p)) = next(p);
        next(q) = p;
        prev(p) = q;
        next(p) = first(L);
    }
}
void playLaguToLagu(string judul1,string penyanyi1, string judul2,  string penyanyi2, List L){
    adr p = first(L);
    cin >> judul1 >> penyanyi1;
    cin >> judul2 >> penyanyi2;
    while ((p->judul) != judul1 and p->penyanyi != penyanyi1 ) {
        p = next(p);
    }
    while ((p->judul) != judul2 and p->penyanyi != penyanyi2 ) {
        cout << p->judul << " " << p->penyanyi << endl;
        p = next(p);
    }
    cout << p->judul << " " << p->penyanyi << endl;
}
