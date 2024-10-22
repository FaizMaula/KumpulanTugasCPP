#include "CLL.h"

void createList(List &L){
    first(L) = NULL;
}


bool isEmpty(List L){
    return first(L) == NULL ;
}

adr createElement(infotype data){
    adr p = new elm;
    info(p) = data;
    next(p) = NULL;
    return p;
}

void insertLast(List &L, adr p) {
    adr q = first(L);
    if (isEmpty(L)) {
        cout << "List Kosong" << endl;
        first(L) = p;
        next(p) = first(L);
        /*
    } else if (next(q) == q) {
        next(p) = first(L);
        next(q) = p;
        */
    } else {
        next(p) = first(L);
        while (next(q) != first(L)) {
            q = next(q);
        }
        next(q) = p;
    }
}

int countElement(List L){
    int jml = 0;
    adr q = first(L);
   do {
        q = next(q);
        jml++;
    } while ((q) != first(L));

    return jml;
}

void pisahList(List &L1, List &L2) {
    int half = countElement(L1)/2 ,i =0;
    cout << "inihalf: " << half << endl;
    if (half % 2 != 0) {
        half--;
    }
    adr temp1 = first(L1);
    while (i != half-1) {
        temp1 = next(temp1);
        i++;
    }
    adr temp2 = next(temp1);
    first(L2) = temp2;
    while (next(temp2) != first(L1)) {
        temp2 = next(temp2);
    }
    next(temp1) = first(L1);
    next(temp2) = first(L2);
}

void show(List L){
    adr p = first(L);
     do {
        cout << info(p) << " ";
        p = next(p);
    }while ((p) != first(L));

}
int sumInfo(List L) {
    int jml = 0;
    adr p = first(L);
    do {
        jml = jml + info(p);
        p = next(p);
    } while (p != first(L));
    return jml;
}
void moveKelipatan5(List L1,List &C){
    adr p = first(L1);
    do {
        if (info(p) % 5 == 0) {
            insertLast(C,createElement(info(p)));
        }
        p = next(p);
    }while ((p) != first(L1));
}
