#ifndef MOD06_H_INCLUDED
#define MOD06_H_INCLUDED

#include <iostream>

using namespace std;

#define first(L) L.first
#define info(p) p->info
#define next(p) p->next
#define prev(p) p->prev
#define last(L) L.last

struct lagu {
    string judul;
    string penyanyi;
};

typedef lagu infotype;
typedef struct elmtList *adr;

struct elmtList {
    infotype info;
    adr prev;
    adr next;
};
struct List {
    adr first;
    adr last;
};

void createList_1301223017(List &L);
bool isEmpty_1301223017(List L);
infotype createInfotype_1301223017(string judul, string penyanyi);
adr createNewElmt_1301223017(infotype x, adr p);
void insertFirst_1301223017(List &L, adr p);
void insertAfter_1301223017(List &L,adr prec,adr p);
void insertLast_1301223017(List &L, adr p);
void deleteFirst_1301223017(List &L, adr p);
void deleteAfter_1301223017(List &L, adr prec, adr p);
void deleteLast_1301223017(List &L, adr p);
void concat_1301223017(List L1, List L2, List &L3);
adr findLagu_1301223017(string judul, List L);
void removeLagu_1301223017(string judul, List &L);
void showAll(List &L);
int selectMenu();

#endif // MOD06_H_INCLUDED
