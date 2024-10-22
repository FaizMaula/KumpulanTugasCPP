#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

#include <iostream>
using namespace std;

#define Nil NULL
#define info(P) P->info
#define next(P) P->next
#define head(Q) ((Q).head)
#define tail(Q) ((Q).tail)



typedef bool boolean;

typedef int infotype;

typedef struct elmQ *address;

struct elmQ {
    infotype info;
    address next;
};
struct queue {
    address head, tail;
};

address alokasi_1301223017(infotype info);
address findElmt_1301223017(queue Q, infotype num);
bool queueEmpty_1301223017(queue Q);
void createQueue_1301223017(queue &Q);
void dealokasi_1301223017(address P);
void enQueue_1301223017(queue &Q, address P);
void deQueue_1301223017(queue &Q, address P);
void printInfo_1301223017(queue Q);
int nbOfElm_1301223017(queue Q);
void ganjilGenap_1301223017(queue &Q, queue &QGanjil, queue &QGenap);

#endif // QUEUE_H_INCLUDED
