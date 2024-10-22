#ifndef MOD8_H_INCLUDED
#define MOD8_H_INCLUDED

#include <iostream>
using namespace std;

#define first(L) L.first
#define next(P) P->next
#define last(L) L.last
#define info(P) P->info
#define prev(P) P->prev


typedef int infotype;
typedef struct ElmList *address;
struct ElmList {
    infotype info;
    address next;
    address prev;
};
struct List {
    address first;
    address last;
};

void createList_1301223017( List &L);
address alokasi_1301223017( infotype x);
void dealokasi_1301223017( address &p);
void insertFirst_1301223017( List &L, address p);
void insertAfter_1301223017( List &L, address Prec , address p );
void insertLast_1301223017( List &L, address p);
address findElm_1301223017( List L, infotype x);
void deleteFirst_1301223017( List &L, address &p) ;
void deleteAfter_1301223017( List &L, address Prec, address &p);
void deleteLast_1301223017( List &L, address &p);
void printInfo_1301223017(List L);
void deleteByValue_1301223017(List &L, infotype x);
void reverseList_1301223017(List L, List &L2);
#endif // MOD8_H_INCLUDED
