#include "mod5tipe3.h"



int main()
{
    int NUM = 0, pilihan = 0,i = 0,j = 0, k =0 ;
    char c;
    adr hasil;
    infotype x;
    List L;
    adr p;

    createList(L);
    pilihan = selectMenu();
    while (pilihan != 0) {
        switch (pilihan) {
        case 1:
            i = 0,j = 0;
            cout << "Jumlah data yang ingin ditambahkan?  ";
            cin >> i;
            while (j < i) {
                cin >> x;
                p = createNewElement(x);
                insertLast(L,p);
                j++;
            }
            break;
        case 2:
            showAll(L);
            break;
        case 3:
            hasil = longestName(L);
            cout << "Nama terpanjang di dalam list adalah :" << info(hasil) << endl;
            break;
        case 4:
            cout << "tampilkan k pengunjung dengan awalan nama?";
            cin >> k >> c;
            cout << "ShowFirstNameC dari list" << endl;
            showFirstKNameC(L,k,c);
            break;
        }
        cout << "\n";
        pilihan = selectMenu();
    }
    cout << "BYE BYE" <<endl;
    return 0;
}
