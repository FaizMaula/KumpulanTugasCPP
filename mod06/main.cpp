#include "mod06.h"

using namespace std;

int main()
{
    List L1,L2,L3;
    adr p,q;
    infotype x;
    string judul,penyanyi;

    int j = 0,i =0, pilihan = 4,input = 0;
    createList_1301223017(L1);
    createList_1301223017(L2);
    createList_1301223017(L3);

    while (pilihan != 0) {
        pilihan = selectMenu();
        switch (pilihan) {
        case 1 :

            cout << "Input untuk list 1/2? ";
            cin >> input;
            if (input == 1) {
                cout << "Berapa jumlah data yang ingin diinput?";
                cin >> i;
                for ( j = 0;j<i;j++){
                    cout << "Judul Lagu: ";
                    cin >> judul;
                    cout << "Nama Penyanyi: " ;
                    cin>> penyanyi;
                    x = createInfotype_1301223017(judul,penyanyi);
                    p = createNewElmt_1301223017(x,p);
                    insertFirst_1301223017(L1,p);
                }
            } else if (input == 2) {
                cout << "Berapa jumlah data yang ingin diinput?";
                cin >> i;
                for ( j = 0;j<i;j++){
                    cout << "Judul Lagu: ";
                    cin >> judul;
                    cout << "Nama Penyanyi: " ;
                    cin >> penyanyi;
                    x = createInfotype_1301223017(judul,penyanyi);
                    p = createNewElmt_1301223017(x,p);
                    insertFirst_1301223017(L2,p);
                }
            }

            break;
        case 2:

            cout << "Judul lagu yang ingin dihapus?";
            cin >> judul;
            cout << "Lagu berada di list ke ? (1/2)";
            cin >> input;
            if (input == 1) {
                removeLagu_1301223017(judul,L1);
            }else if (input == 2) {
                removeLagu_1301223017(judul,L2);

            }

            break;
        case 3:

            cout << "1.ShowList L1" << endl;
            cout << "2.ShowList L2" << endl;
            cout << "3.ShowList L3" << endl;
            concat_1301223017(L1,L2,L3);
            cin >> input;

            if (input == 1) {
                showAll(L1);
            } else if (input == 2) {
                showAll(L2);
            }else if (input == 3) {
                showAll(L3);
            }

            while (first(L3) != NULL ) {
                deleteFirst_1301223017(L3,p);
            }
            break;
        }

}
}
