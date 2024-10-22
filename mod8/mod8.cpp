#include "mod8.h"


void createList_1301223017(List &L) {
    first(L) = NULL;
    last(L) = NULL;
}

address alokasi_1301223017(infotype x){
    address p = new ElmList;
    info(p) = x;
    next(p) = NULL;
    return p;
}

void insertFirst_1301223017(List &L, address p) {
    if (first(L) == NULL) {
        first(L) = p;
        last(L) = p;
        next(p) = first(L);
        prev(p) = first(L);
    } else {
        next(last(L)) = p;
        next(p) = first(L);
        prev(next(p)) = p;
        prev(p) = last(L);
        first(L) = p;
    }
}
void insertAfter_1301223017(List &L, address Prec, address P) {
    next(P) = next(Prec);
    prev(next(P)) = P;
    prev(P) = Prec;
    next(Prec) = P;
}

void insertLast_1301223017(List &L, address p) {
    if (first(L) == NULL) {
        first(L) = p;
        last(L) = p;
        next(p) = first(L);
        prev(p) = first(L);
    } else {
        next(last(L)) = p;
        next(p) = first(L);
        prev(p) = last(L);
        last(L) = p;
    }
}

address findElm_1301223017(List L, infotype x) {
    address q = NULL;
    address p = first(L);
    do {
        if (info(p) == x) {
            return p;
        }
        p = next(p);
    }while (p != first(L));
    return q;
}

void deleteFirst_1301223017(List &L, address &p) {
    p = first(L);
    if (first(L) == NULL) {
        cout << "List Kosong" << endl;
    } else {
        first(L) = next(p);
        prev(first(L)) = last(L);
        next(last(L)) = first(L);
        next(p) = NULL;
        prev(p) = NULL;
    }
}

void deleteAfter_1301223017(List &L, address Prec, address &p){
    p = next(Prec);
    next(Prec) = next(p);
    prev(next(Prec)) = Prec;
    next(p) = NULL;
    prev(p) = NULL;
}

void deleteLast_1301223017(List &L, address &p) {
    p = last(L);
    if (first(L) == NULL) {
        cout << "List Kosong" << endl;
    } else {
        last(L) = prev(p);
        next(p) = NULL;
        next(last(L)) = first(L);
    }
}

void deleteByValue_1301223017(List &L, infotype x) {
    address p = findElm_1301223017(L,x);
    if (p != NULL) {
        if (p == first(L)) {
            deleteFirst_1301223017(L,p);
        } else if (p == last(L)) {
            deleteLast_1301223017(L,p);
        } else {
            deleteAfter_1301223017(L,prev(p) ,p);
        }
    }
}
void printInfo_1301223017(List L) {
    address p = first(L);
    do {
        cout << info(p) << ", ";
        p = next(p);
    } while (p != first(L));
    cout << endl;
}
void reverseList_1301223017(List L, List &L2) {
    address p = first(L);
    do {
        insertFirst_1301223017(L2,alokasi_1301223017(info(p)));
        p = next(p);
    }while (p != first(L));
}

