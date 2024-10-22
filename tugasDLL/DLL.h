#ifndef DLL_H_INCLUDED
#define DLL_H_INCLUDED

#include <iostream>
using namespace std;

#define info(P) P->info
#define next(P) P->next
#define prev(P) P->prev
#define first(L) ((L).first)
#define last(L) ((L).last)

struct akun {
    string username ;
    string password;
};
typedef akun infotype;
typedef struct elm *adr;

struct elm{
    infotype info;
    adr next;
    adr prev;
};

struct List{
    adr first;
    adr last;
};

void createNewList_1301223017(List &L);
adr createNewElm_1301223017(infotype akun);
void insertLast_1301223017(adr p, List &L);
adr findAkun_1301223017(string username,List L);
infotype createInfotype_1301223017(string name, string pw);
void signUp_1301223017(infotype akun, List &L);
void deleteFirst_1301223017(List &L, adr p);
void deleteAfter_1301223017(adr prec,adr P);
void deleteLast_1301223017(List &L, adr p);
void showAll_1301223017(List L);
void removeAkun_1301223017(string username, List &L);
int selectMenu_1301223017();

#endif // DLL_H_INCLUDED
