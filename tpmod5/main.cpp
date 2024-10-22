#include "tpmod5.h"

int main()
{
    int NUM = 0, pilihan = 0,k,i = 0,j = 0;
    double hasil;
    infotype x;
    List L;
    adr p;
    char kembali = 'N';

    pilihan = selectMenu_1301223017();
    while (pilihan != 0) {
        kembali = 'N';
        switch (pilihan) {
        case 1:
            while (kembali == 'N') {
                i = 0,j = 0;
                cout << "Jumlah data yang ingin ditambahkan? ";
                cin >> i;
                while (j < i) {
                    cin >> x;
                    x = tolower(x);
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
            hasil = vocalPercentage_1301223017(L);
            cout << "Persentase huruf vokal di dalam list adalah :" << hasil * 100 << "%" << endl;
            break;
        case 4:
            cout << "Input Nilai k";
            cin >> k;
            showLastK_1301223017(L,k);
            break;
        }
        cout << "\n";
        pilihan = selectMenu_1301223017();
    }
    cout << "BYE BYE" <<endl;
    return 0;
}
