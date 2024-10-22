#include <iostream>

using namespace std;
#define info(P) P->info
#define next(P) P->next
#define prev(P) P->prev
#define first(L) ((L).first)
#define last(L) ((L).last)

typedef int infotype;
typedef struct element *adr;

struct element {
    infotype info;
    adr next;
    adr prev;
};

struct List {
    adr first ;
    adr last;
};
void createNewList_1301223017(List &L) {
    first(L) = NULL;
    last(L) = NULL;
}
void insertLast_1301223017( List &L,adr p) {
    if (first(L) == NULL ) {
        first(L) = p;
        last(L) = p;
    } else {
        adr q = first(L);
        while (next(q) != NULL) {
            q = next(q);
        }
        prev(p) = last(L);
        next(last(L)) = p;
        last(L) = p;
    }
}
adr createNewElm_1301223017(infotype akun){
    adr p = new element;
    info(p) = akun;
    prev(p) = NULL;
    next(p) = NULL;

    return p;
}
int main()
{
    List L;
    infotype x;
    int i = 0;

    createNewList_1301223017(L);
    cin >> x;
    adr p = createNewElm_1301223017(x);
    insertLast_1301223017(L,p);
    cin >> x;
    p = createNewElm_1301223017(x);
    insertLast_1301223017(L,p);
    cin >> x;
    p = createNewElm_1301223017(x);
    insertLast_1301223017(L,p);
    cin >> x;
    p = createNewElm_1301223017(x);
    insertLast_1301223017(L,p);
    cin >> x;
    p = createNewElm_1301223017(x);
    insertLast_1301223017(L,p);

    int c = 7;
    p = first(L);
    while (p != NULL ){
        /*if (info(p) == c) {
            cout <<"true";
        }*/
        i = info(p) + i;
        p = next(p);
    }
    cout << "false";

    cout << i;
}


