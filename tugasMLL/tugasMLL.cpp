#include "tugasMLL.h"

adrSales searchSales(listSales mll, string namaSales){
    adrSales p = first(mll);
    while (p != NULL) {
        if (info(p).nama == namaSales){
            return p;
        }
        p = next(p);
    }
    return NULL;
}
void insertLastSales(listSales &mll, adrSales S){
    if (first(mll) == NULL) {
        first(mll) = S;
    } else {
        adrSales p = first(mll);
        while (next(p) != NULL) {
            p = next(p);
        }
        next(p) = S;
    }
}
void createList(listSales &mll){
    first(mll) = NULL;
}
/*void createListJual(listJual &J){
    first(J) = NULL;
}*/
void newElmSales(sales info, adrSales &S){
    S = new elmSales;
    next(S) = NULL;
    info(S) = info;
    nextJual(S) = NULL;
}
void newElmJual(int info, adrJual &J){
    J = new elmJual;
    next(J) = NULL;
    info(J) = info;
}
void insertNewPenjualan(listSales &mll, adrSales p, adrJual J){
    adrJual q = nextJual(p);
    if (q == NULL){
        nextJual(p) = J;
    } else{
        while (next(q) != NULL){
            q = next(q);
        }
        next(q)= J;
    }
}
void deleteFirstPenjualan(listSales &mll, adrSales S, adrJual &J);
void showDataSales(listSales mll){
    adrSales p1 = first(mll);
    adrJual p2;
    while (p1 != NULL){
        cout << info(p1).nama << endl;
        p2 = nextJual(p1);
        while (p2 != NULL) {
            cout << info(p2) << " ";
            p2 = next(p2);
        }
        p1 = next(p1);
        }
}


