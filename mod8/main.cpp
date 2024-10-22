#include "mod8.h"

int main()
{
    List L,L2;

    createList_1301223017(L);
    createList_1301223017(L2);
    insertLast_1301223017(L, alokasi_1301223017(5));
    insertLast_1301223017(L, alokasi_1301223017(15));
    insertLast_1301223017(L, alokasi_1301223017(25));
    insertLast_1301223017(L, alokasi_1301223017(35));
    insertLast_1301223017(L, alokasi_1301223017(45));
    insertLast_1301223017(L, alokasi_1301223017(55));
    insertLast_1301223017(L, alokasi_1301223017(65));
    insertLast_1301223017(L, alokasi_1301223017(75));
    insertLast_1301223017(L, alokasi_1301223017(85));
    printInfo_1301223017(L);
    deleteByValue_1301223017(L,5);
    deleteByValue_1301223017(L,100);
    deleteByValue_1301223017(L,45);
    deleteByValue_1301223017(L,85);
    printInfo_1301223017(L);
    cout << "Hasil Reverse" << endl;
    reverseList_1301223017(L,L2);
    printInfo_1301223017(L2);
}
