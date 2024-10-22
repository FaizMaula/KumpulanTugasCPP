#ifndef SLL_H_INCLUDED
#define SLL_H_INCLUDED

#include <iostream>

using namespace std;

#define info(P) P->info
#define next(P) P->next
#define first(L) ((L).first)

typedef int infotype;
typedef struct element *adr;

struct element {
    infotype info;
    adr next;
};

struct List {
    adr first ;
};

void createList_1301223017(List &L);
adr allocate_1301223017(infotype x);
void insertFirst_1301223017(List &L, adr p);
void printInfo_1301223017(List L);
adr deleteLast(List &L);
adr deletefirst(List &L, adr p);
void insertLast(List &L, adr p);
void insertAfter(List &L,adr prec, adr p);
adr deleteAfter(List &L,adr prec, adr p);
adr searchInfo(List L, infotype p);
void max_1301223017(List L, infotype maximum);

#endif // SLL_H_INCLUDED
