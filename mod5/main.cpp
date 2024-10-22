#include "mod5.h"

int main()
{int NUM = 0, pilihan = 0,i = 0,j = 0;
    adr hasil;
    infotype x;
    List L;
    adr p;
    char  kembali = 'N';
    createList_1301223017(L);
    pilihan = selectMenu_1301223017();
    while (pilihan != 0) {
        kembali = 'N';
        switch (pilihan) {
        case 1:
            while (kembali == 'N') {
                i = 0,j = 0;
                cout << "Jumlah data yang ingin ditambahkan?  ";
                cin >> i;
                while (j < i) {
                    cin >> x;
                    p = createElement_1301223017(x);
                    insertLast_1301223017(L,p);
                    j++;
                }
                cout << "Kembali ke menu utama (Y/N)?";
                cin >> kembali;
                kembali = toupper(kembali);
            }
            break;
        case 2:
            showAll_1301223017(L);
            break;
        case 3:
            hasil = findMax_1301223017(L);
            cout << "Nilai terbesar di dalam list adalah :" << info(hasil)<< endl;
            break;
        case 4:
            cout << "NIlai tengah dari list" << endl;
            showMiddle_1301223017(L);
            break;
        }
        cout << "\n";
        pilihan = selectMenu_1301223017();
    }
    cout << "BYE BYE" <<endl;
    return 0;
}
