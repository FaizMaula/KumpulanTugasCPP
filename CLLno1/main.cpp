#include "tugasCLL.h"

int main()
{
    List L;
    string nama,nim;
    int usia;
    group G;

    createList(L);

    cin >> nama >> nim >> usia;
    tambahAnggota(L,nim,nama,usia);
    cin >> nama >> nim >> usia;
    tambahAnggota(L,nim,nama,usia);
    cin >> nama >> nim >> usia;
    tambahAnggota(L,nim,nama,usia);
    adr p = first(L);
    pemilihan(L,G);


    cout << "hasil pemilihan " ;
    cout << "Ketua adalah : "<< G.ketua->nama << endl;
    cout << "bendahara adalah " << G.bendahara->nama << endl;


}
