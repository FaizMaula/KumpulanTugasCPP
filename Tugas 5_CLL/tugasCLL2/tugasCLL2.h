#ifndef TUGASCLL2_H_INCLUDED
#define TUGASCLL2_H_INCLUDED

#include <iostream>

using namespace std;

#define first(L) L.first
#define info(p) p->info
#define next(p) p->next
#define prev(p) p->prev


typedef struct elmtList *adr;

struct elmtList {
    string judul;
    string penyanyi;
    adr prev;
    adr next;
};
struct List {
    adr first;
};

void createList_1301223017(List &L);
adr createNewElm_1301223017(string judul, string penyanyi);
void insertLast_1301223017(adr p, List &L);
void add_1301223017(string judul, string penyanyi, List &L);
void deleteFirst_1301223017(List &L, adr p);
void deleteAfter_1301223017(adr prec, adr p);
void showLagu_1301223017(List &L);
adr searchLagu_1301223017(string judul, string penyanyi, List L);
void moveToEnd_1301223017(string judul,string penyanyi,List &L);
void playLaguToLagu(string judul1,string penyanyi1, string judul2,  string penyanyi2, List L);


#endif // TUGASCLL2_H_INCLUDED
