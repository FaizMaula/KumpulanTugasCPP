#include "tpmod5.h"

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

double vocalPercentage_1301223017(List L){
    double v = 0,k = 0 ,i = 0;
    double hasil = 0;
    adr p = first(L);
    while (p != NULL) {
        if ((info(p) >= 'a' && info(p) <= 'z') && (info(p) != 'a' && info(p) != 'e' && info(p) != 'i' && info(p) != 'o' && info(p) != 'u')){
            k++;
        } else if (info(p) >= 'a' && info(p) <= 'z') {
            v++;
        }
        p = next(p);
        i++;
    }
    if (v == k ){
        hasil = 0.5;
    } else {
        hasil = v/i;
    }
    return hasil;

}

void showLastK_1301223017(List L, int k){
    adr q, p = first(L);
    int k2 = 1;
    while (p != NULL ) {
        if (k2 % k == 0) {
            q = p;
        }
        p = next(p);
        k2++;
    }
    cout << info(q) << endl;

}

int selectMenu_1301223017(){
    cout << "============MENU===============" << endl;
    cout << "1. Menambah N data baru" <<endl;
    cout << "2. Menampilkan semua data" <<endl;
    cout << "3. Fungsi Vocal Percentage" <<endl;
    cout << "4. Fungsi ShowLastK" <<endl;
    cout << "0. Exit" <<endl;
    cout << "Pilihan menu: ";

    int input = 0;
    cin >> input;

    return input;
}
