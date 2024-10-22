#include "DLL.h"

using namespace std;

int main()
{
    List L;
    infotype x;
    string nama,pw;
    createNewList_1301223017(L);
    adr p;
    int pilihan = 0;

    pilihan = selectMenu_1301223017();
    while (pilihan != 0) {
        switch(pilihan){
        case 1:
            cout << "nama dan pw" << endl;
            cin >> nama >> pw;
            x = createInfotype_1301223017(nama,pw);
            p = createNewElm_1301223017(x);
            insertLast_1301223017(p,L);
            break;
        case 2:
            showAll_1301223017(L);
            break;
        case 3:
            cout << "nama dan pw" << endl;
            cin >> nama >> pw;
            x = createInfotype_1301223017(nama,pw);
            signUp_1301223017(x,L);
            break;
        case 4:
            cin >> nama;
            removeAkun_1301223017(nama,L);
            break;
        }

        pilihan = selectMenu_1301223017();
    }


}
