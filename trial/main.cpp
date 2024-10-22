#include "trial.h"

using namespace std;

int main()
{
    List L;
    createList_1301223017(L);
    infotype x;
    adr p;

    for (int i = 1;i <= 10;i++) {
        if (first(L) == NULL ) {
            cin >> x;
            p = allocate_1301223017(x);
            insertFirst_1301223017(L,p);
        } else {
            cout << "digit ke " << i << " " ;
            cin >> x;
            p = allocate_1301223017(x);
            insertLast(L,p);
        }
    }
    printInfo_1301223017(L);
    cout<< "cari data untuk dihapus";
    cin >> x;
    deleteX(L,x);
}
