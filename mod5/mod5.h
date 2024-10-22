#ifndef MOD5_H_INCLUDED
#define MOD5_H_INCLUDED

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
adr createElement_1301223017(infotype x);
void insertLast_1301223017(List &L, adr p);
void showAll_1301223017(List L);
adr findMax_1301223017(List L);
void showMiddle_1301223017(List L);
int selectMenu_1301223017();

#endif // MOD5_H_INCLUDED