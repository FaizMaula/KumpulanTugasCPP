#ifndef TPMOD06_H_INCLUDED
#define TPMOD06_H_INCLUDED

#define first(L) L.first
#define info(p) p->info
#define next(p) p->next

typedef int infotype;
typedef struct elmtList *adr;
struct elmtList {
    infotype info;
    adr prev;
    adr next;
};
struct list {
    adr first;
    adr last;
};

void createList_1301223017(List &L);
bool isEmpty_1301223017(List L);
createNewElmt(infotype x, adr p);
void insertFirst_1301223017(List &L, adr p);
void insertAfter_1301223017(List &L,adr prec,adr p);
void insertLast_1301223017(List &L, adr p);
void deleteFirst_1301223017(List &L, adr p);
void deleteAfter_1301223017(List &L, adr prec, adr p);
void deleteLast_1301223017(List &L, adr p);
void concat_1301223017(List L1, List L2, List L3);
adr findLagu_1301223017(string judul, List L);
void removeLagu_1301223017(string judul, List &L);



#endif // TPMOD06_H_INCLUDED
