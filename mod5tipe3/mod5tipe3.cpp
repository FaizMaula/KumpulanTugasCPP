#include "mod5tipe3.h"

void createList(List &L) {
    first(L) = NULL;
}

adr createNewElement(infotype x) {
    adr p = new element;
    info(p) = x;
    next(p) = NULL;

    return p;
}

void insertLast(List &L, adr p) {
    if (first(L) == NULL){
        first(L) = p;
    } else {
        adr q = first(L);
        while (next(q) != NULL) {
            q = next(q);
        }
        next(q) = p;
    }
}

void showAll(List L){
    adr p = first(L);
    while (p != NULL) {
        cout << info(p) << endl;
        p = next(p);
    }
}

adr longestName(List L) {
    adr p = first(L);
    adr q = first(L);
    while (q != NULL) {
        if (info(p) < info (q)) {
            p = q;
        }
        q = next(q);
    }
    return p;
}

void showFirstKNameC(List L, int k, char c) {
    adr p = first(L);
    int i = 0;
    while (p != NULL && i  < k) {
        if (info(p)[0] == c ) {
            cout << info(p) << endl;
        }
        p = next(p);
        i++;
    }
}


int selectMenu()
{
    cout << "============MENU===============" << endl;
    cout << "1. Menambah N data baru" <<endl;
    cout << "2. Menampilkan semua data" <<endl;
    cout << "3. LongestName" <<endl;
    cout << "4. ShowLastNameC" <<endl;
    cout << "0. Exit" <<endl;
    cout << "Pilihan menu: ";

    int input = 0;
    cin >> input;

    return input;
}
