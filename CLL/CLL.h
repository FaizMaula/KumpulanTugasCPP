#ifndef CLL_H_INCLUDED
#define CLL_H_INCLUDED


#include <iostream>
using namespace std;

#define first(L) L.first
#define next(p) p->next
#define info(p) p-> info

typedef struct elm *adr;

typedef int infotype;
struct elm {
    infotype info;
    adr next;
};
struct List {
    adr first;
};


void createList(List &L);
bool isEmpty(List L);
adr createElement(infotype data);
void insertLast(List &L, adr p);
int countElement(List L);
void pisahList(List &L1, List &L2);
void show(List L);
void moveKelipatan5(List L1,List &C);
int sumInfo(List L);

#endif // CLL_H_INCLUDED
