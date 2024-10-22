#include "tugasMLL.h"

using namespace std;

int main()
{
    mll S;
    createList(S);
    sales x;
    adrSales elmS;
    adrJual J;
    int info;
    string nama;
    for (int i = 0;i < 3; i++){
        cin >> x.nama >> x.gol;
        newElmSales(x,elmS);
        insertLastSales(S,elmS);
    }
    for (int i = 0;i<3;i++){
        cin >> info;
        cin >> nama;
        elmS = searchSales(S,nama);
        newElmJual(info,J);
        insertNewPenjualan(S,elmS,J);
    }
    showDataSales(S);
}
