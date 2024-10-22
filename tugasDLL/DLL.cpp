#include "DLL.h"

void createNewList_1301223017(List &L) {
    first(L) = NULL;
    last(L) = NULL;
}

adr createNewElm_1301223017(infotype akun){
    adr p = new elm;
    info(p) = akun;
    prev(p) = NULL;
    next(p) = NULL;

    return p;
}
infotype createInfotype_1301223017(string name, string pw) {
    infotype x;
    x.username = name;
    x.password = pw;

    return x;
}

void insertLast_1301223017( adr p,List &L ) {
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

adr findAkun_1301223017(string username, List L) {
    if (first(L) == NULL and last(L) == NULL ){
        cout << "List Kosong" <<endl;
    } else {
        adr p = first(L);
        adr q = NULL;
        while (p != NULL) {
            if (info(p).username == username ){
                q = p;
            }
            p = next(p);
        }
        return q;
    }
}

void signUp_1301223017(infotype akun, List &L) {
    adr p = findAkun_1301223017(akun.username,L);
    if (p != NULL and first(L) != NULL) {
        cout << "Account has been registered" <<endl;
    } else {
        p = createNewElm_1301223017(akun);
        insertLast_1301223017(p,L);
    }
}

void deleteFirst_1301223017(List &L, adr p){
    p = first(L);
    if (first(L) != last(L)) {
        first(L) = next(p);
        next(p) = NULL;
        prev(first(L)) = NULL;
    } else {
        first(L) = NULL;
        last(L) = NULL;
    }
}
void deleteAfter_1301223017(adr prec,adr P) {
    P = next(prec);
    next(prec) = next(P);
    prev(next(P)) = prec;
    prev(P) =NULL;
    next(P) = NULL;


}
void deleteLast_1301223017(List &L, adr p){
    adr q = first(L);
    if (first(L) != last(L)) {
        p = last(L);
        last(L) = prev(last(L));
        prev(p) = NULL;
        next(last(L)) = NULL;
    } else {
        first(L) = NULL;
        last(L) = NULL;
    }
}

void removeAkun_1301223017(string username, List &L){
    adr p = findAkun_1301223017(username,L);
    if (p == first(L)) {
        deleteFirst_1301223017(L,p);
    } else if (p == last(L)) {
        deleteLast_1301223017(L,p);
    } else {
        adr q;
        p = prev(p);
        deleteAfter_1301223017(p,q);
    }
}

void showAll_1301223017(List L) {
    adr p = first(L);
    while ( p != NULL) {
        cout << info(p).username <<" " <<info(p).password << endl;
        p = next(p);
    }
    cout <<endl;
}
int selectMenu_1301223017(){
    cout << "============MENU===============" << endl;
    cout << "1. Menambah N data baru" <<endl;
    cout << "2. Menampilkan semua data" <<endl;
    cout << "3. signUp" <<endl;
    cout << "4. Remove Akun" <<endl;
    cout << "0. Exit" <<endl;
    cout << "Pilihan menu: ";

    int input = 0;
    cin >> input;

    return input;
}



