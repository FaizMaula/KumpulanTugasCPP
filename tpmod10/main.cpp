#include "queue.h"

int main()
{
    queue Q,QGanjil,QGenap;
    createQueue_1301223017(Q);
    infotype x;
    address P;
    for (int i = 1;i<=10;i++){
        cin >> x;
        P = alokasi_1301223017(x);
        enQueue_1301223017(Q,P);
    }
    cout << "Kondisi awal" << endl;
    printInfo_1301223017(Q);

    createQueue_1301223017(QGenap);
    createQueue_1301223017(QGanjil);
    ganjilGenap_1301223017(Q,QGanjil,QGenap);
    P = head(Q);
    do  {
        P = next(P);
        deQueue_1301223017(Q,P);

    }while (P != Nil);
    cout << "Kondisi akhir" << endl;
    cout << "\n Queue Utama" << endl;
    printInfo_1301223017(Q);

    cout << "\n Queue Ganjil" << endl;
    printInfo_1301223017(QGanjil);
    cout << "\n Queue Genap" << endl;
    printInfo_1301223017(QGenap);

}
