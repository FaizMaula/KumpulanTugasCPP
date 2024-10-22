#ifndef TUGASMLL_H_INCLUDED
#define TUGASMLL_H_INCLUDED

#include <iostream>
using namespace std;

#define first(L) L.first
#define info(P) P->info
#define next(p) p->next
#define nextJual(p) p->nextJual

typedef struct elmJual *adrJual;
struct elmJual {
    int info;
    adrJual next;
};
struct sales {
    string nama,gol;
};
typedef struct elmSales *adrSales;

struct elmSales{
    sales info;
    adrSales next;
    adrJual nextJual ;
};
struct mll {
    adrSales first;
};

typedef mll listSales;

adrSales searchSales(listSales mll, string namaSales);
void insertLastSales(listSales &mll, adrSales S);
void createList(listSales &mll);
void newElmSales(sales info, adrSales &S);
void newElmJual(int info, adrJual &J);
void insertNewPenjualan(listSales &mll, adrSales S, adrJual J);
void deleteFirstPenjualan(listSales &mll, adrSales S, adrJual &J);
void showDataSales(listSales mll);

#endif // TUGASMLL_H_INCLUDED
