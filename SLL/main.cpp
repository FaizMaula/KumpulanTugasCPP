#include "SLL.h"

using namespace std;

int main()
{
    List L;
    createList_1301223017(L);
    infotype x;
    adr p;

    /*
    cout << "Angka pertama" << endl;
    cin >> x;
    p = allocate_1301223017(x);
    insertFirst_1301223017(L,p);
    */
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

    cout << "angka yang ingin dicari? ";
    cin >> x;
    adr ada = searchInfo(L,x);
    cout << ada << " " << info(ada) << endl;
    max_1301223017(L,x);

    cout<< "List setelah delete first" <<endl;
    deletefirst(L,p);
    printInfo_1301223017(L);

    /*
    cout << "Angka kedua" << endl;
    cin >> x;
    p = allocate_1301223017(x);
    insertFirst_1301223017(L,p);
    printInfo_1301223017(L);

    cout << "Angka ketiga" << endl;
    cin >> x;
    p = allocate_1301223017(x);
    insertFirst_1301223017(L,p);
    printInfo_1301223017(L);


    cout<< "List setelah delete Last :" << endl;
    p = deleteLast(L);
    printInfo(L);

    cout<< "List setelah Insert Last :" << endl;
    cin >> x;
    p = newElement(x);
    insertLast(L,p);
    printInfo(L);

    cout<< "List setelah Insert After :" << endl;
    cin >> x;
    adr prec = next(first(L));
    p = newElement(x);
    insertAfter(L,prec,p);
    printInfo(L);

    cout<< "List setelah Delete After :" << endl;
    prec = next(first(L));
    deleteAfter(L,prec,p);
    printInfo(L);
    */
     return 0;



}
