#include "rakbuku.h"

using namespace std;

int main()
{
    rakBuku S;
    string judul,penulis,namaPenulis;
    createStack_1301223017(S);
     for (int i = 0;i < 12;i++) {
        cin >> judul >> penulis;
        push_1301223017(S,judul,penulis);
    }
    cout << "\n Stack Awal" << endl;
    printInfo_1301223017(S);
    pop_1301223017(S,judul,penulis);

    cout << "\n Stack setelah Pop" << endl;
    printInfo_1301223017(S);

    cout << "Cari buku berjudul: " <<endl;
    cin >> judul;
    Get_1301223017(S,judul,namaPenulis);
    cout << "Buku ditulis oleh "<<namaPenulis;
}
