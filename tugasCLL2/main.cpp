#include "tugasCLL2.h"

using namespace std;

int main()
{
    List L;
    string penyanyi,judul,judul2,penyanyi2;
    adr p;

    createList_1301223017(L);
    for (int i=0;i < 10;i++) {
        cin >> judul >> penyanyi;
        add_1301223017(judul,penyanyi,L);
    }

    showLagu_1301223017(L);
    cout << "Pindahkan Lagu Ke Akhir" <<endl;
    cin >> judul >> penyanyi;
    moveToEnd_1301223017(judul,penyanyi,L);
    showLagu_1301223017(L);
    cout << "\n Play Lagu Mulai dari" <<endl;
    playLaguToLagu(judul,penyanyi,judul2,penyanyi2,L);

     cout << "\n Hapus lagu di awal" <<endl;
    deleteFirst_1301223017(L,p);
    showLagu_1301223017(L);

}
