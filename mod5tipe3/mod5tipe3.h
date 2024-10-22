#ifndef MOD5TIPE3_H_INCLUDED
#define MOD5TIPE3_H_INCLUDED

#include <iostream>
#include <string>
using namespace std;

#define info(P) P->info
#define next(P) P->next
#define first(L) ((L).first)


typedef string infotype;
typedef struct element *adr;

struct element {
    infotype info;
    adr next;
};

struct List {
    adr first ;
};
void createList(List &L);
adr createNewElement(infotype x);
void insertLast(List &L,adr p);
void showAll(List L);
adr longestName(List L);
void showFirstKNameC(List L, int k, char c);
int selectMenu();

#endif // MOD5TIPE3_H_INCLUDED
