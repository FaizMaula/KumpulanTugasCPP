#include "trial.h"

void createList_1301223017(List &L){
    first(L) = NULL;
}

adr allocate_1301223017(infotype x) {
    adr P = new element;
    info(P) = x;
    next(P) = NULL;
    return P;
}

void insertFirst_1301223017(List &L,adr P){
    if (first(L) == NULL) {
        first(L) = P;
    } else {
        next(P) = first(L);
        first(L) = P;
    }
}

void printInfo_1301223017(List L){
    adr p = first(L);
    do {
        cout << info(p);
        p = next(p);
    } while(p!= NULL);
    cout <<endl;
}

void insertLast(List &L,adr p){

    adr q = first(L);
    while (next(q) != NULL) {
        q = next(q);
    }
    next(q) = p;
}

void insertAfter(List &L,adr pre, adr P){
    if (pre==NULL){
        cout<<"List kosong";
    }else{
        next(P)=next(pre);
        next(pre)=P;
    }
}

adr deletefirst(List &L, adr p){
    p = first(L);
    first(L) = next(p);
    next(p) = NULL;

    return p;
}
adr deleteAfter(List &L, adr prec,adr P) {
    P = next(prec);
    next(prec) = next(P);
    next(P) = NULL;

    return P;
}
/*
void insertAfter(List &L, adr p) {
    adr prec;
    infotype x;
    cout << "masukkan nilai prec";
    cin >> x;
    do {
        prec = next(prec);
    }while (info(prec) != x);
    next(p) = next(prec);
    next(prec) = p;
}
*/
adr deleteLast(List &L){
    adr p,q;
    q = first(L);
    do {
        q = next(q);
    }while (next(next(q))!= NULL);
    p = next(q);
    next(q) = NULL;
    return p;
}
adr searchInfo(List L, infotype data){
    adr q = first(L);
    while (q != NULL) {
        if (info(q) == data){
            return q;
        }
        q = next(q);
    }
    return NULL;
}
void max_1301223017(List L, infotype maximum){
    maximum = info(first(L));
    adr p = first(L);
    while (p != NULL ){
        if (info(p) > maximum) {
            maximum = info(p);
        }
        p = next(p);
    }
    cout << "angka terbesar adalah " << maximum << endl;
}
void deleteX(List &L, infotype x){
    adr q;
    adr p = searchInfo(L,x);
    if (p == NULL) {
        cout << "elemen tidak ada di dalam list";
    } else if (p == first(L)) {
        deletefirst(L,p);
    } else if (next(p) == NULL and p != first(L)) {
        deleteLast(L);
    } else {
        deleteAfter(L,p,q);
    }
}

