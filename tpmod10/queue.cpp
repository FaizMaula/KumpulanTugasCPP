#include "queue.h"

address alokasi_1301223017(infotype info) {
    address p = new elmQ;
    info(p) = info;
    next(p) = Nil;
    return p;
}
address findElmt_1301223017(queue Q, infotype num) {
    address P;
    boolean found;
    P = head(Q);
    found == false;
    while (P != Nil && found == false) {
        if (info(P) == num) {
            found = true;
        } else {
            P = next(P);
        }
    }
    return P;
}
bool queueEmpty_1301223017(queue Q) {
    return head(Q) == Nil;
}
void createQueue_1301223017(queue &Q) {
    head(Q) = Nil;
}
void dealokasi_1301223017(address P)
{
    delete P;
}
void enQueue_1301223017(queue &Q, address P) {
    if (queueEmpty_1301223017(Q)) { /* kondisi kosong */
        head(Q) = P;
        tail(Q) = P;
    } else { /* kondisi tidak kosong */
        next(tail(Q)) = P;
        tail(Q) = P;
    }
}
void deQueue_1301223017(queue &Q, address P) {
    if (queueEmpty_1301223017(Q)) { /* kondisi kosong */
        cout << "Queue kosong" << endl;
    } else if (next(head(Q)) == Nil) { /* kondisi satu elemen */
        P = head(Q);
        head(Q) = Nil;
        dealokasi_1301223017(P);
    } else { /* kondisi banyak elemen */
        P = head(Q);
        head(Q) = next(P);
        next(P) = Nil;
    }
}

void printInfo_1301223017(queue Q) {
    address P;
    int i = 1;
    P = head(Q);
    if (P == Nil) { /* kondisi kosong */
        cout << "Queue kosong" << endl;
    } else {
        while (P != Nil) {
            cout << "Antrian ke-" << i <<": "<< info(P) << endl;
            P = next(P);
            i++;
        }
    }
}
int nbOfElm_1301223017(queue Q) {
    int numOfElmt = 0;
    address P;
    P = head(Q);
    while (P != Nil) {
        numOfElmt++;
        P = next(P);
    }
    return numOfElmt;
}

void ganjilGenap_1301223017(queue &Q, queue &QGanjil, queue &QGenap){
    address P = head(Q);
    while(P != Nil) {
        if (info(P) % 2 == 0) {
            enQueue_1301223017(QGenap,alokasi_1301223017(info(P)));
        } else {
            enQueue_1301223017(QGanjil,alokasi_1301223017(info(P)));
        }
        P = next(P);
    }
}
