#ifndef TUGASCLL_H_INCLUDED
#define TUGASCLL_H_INCLUDED

#include <iostream>
using namespace std;

#define first(L) L.first
#define next(p) p->next
#define last(L) L.last


typedef struct elm *adr;

struct elm {
    string nama;
    string nim;
    int umur;
    adr next;
};
struct List {
    adr last;
    adr first;
};

struct group {
    adr ketua;
    adr bendahara;
};

void createList(List &L);
adr createNewElmt(string nama,string nim, int usia);
bool isEmpty(List L);
void pemilihan(List L, group &G);
void tambahAnggota(List &L,string nim, string nama, int usia);

#endif // TUGASCLL_H_INCLUDED
