#include "mod5.h"

void createList_1301223017(List &L){
    first(L) = NULL;
}
adr createElement_1301223017(infotype x) {
    adr p = new element;
    info(p) = x;
    next(p) = NULL;
    return p;
}

void showAll_1301223017(List L){
    adr p = first(L);
    while ( p != NULL) {
        cout << info(p) << " ";
        p = next(p);
    }
    cout <<endl;
}

void insertLast_1301223017(List &L, adr p) {
    if (first(L) == NULL ) {
        first(L) = p;
    } else {
        adr q = first(L);
        while (next(q) != NULL) {
            q = next(q);
        }
        next(q) = p;
    }
}

adr findMax_1301223017(List L) {
    adr p = first(L);
    adr q = first(L);
    while (q != NULL) {
        if (info(q) > info(p)) {
            p = q;
        }
        q = next(q);
    }
    return p;
}

void showMiddle_1301223017(List L){
    adr p = first(L);
    int i = 0,j = 0;
    while (p != NULL) {
        i++;
        p = next(p);
    }
    p = first(L);
    while(j < (i/2)) {
        p = next(p);
        j++;
    }
    cout << info(p);
}
int selectMenu_1301223017(){
    cout << "============MENU===============" << endl;
    cout << "1. Menambah N data baru" <<endl;
    cout << "2. Menampilkan semua data" <<endl;
    cout << "3. Fungsi FindMax" <<endl;
    cout << "4. Fungsi ShowMiddle" <<endl;
    cout << "0. Exit" <<endl;
    cout << "Pilihan menu: ";

    int input = 0;
    cin >> input;

    return input;
}
