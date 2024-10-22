#include "queue.h"

using namespace std;

int main()
{
    antrianTugas Q;
    createQueue_1301223017(Q);
    infotype x;
    adr P;
    for (int i = 0;i <4;i++){
        cin >> x.pekerjaan >> x.waktu;
        P = alokasi_1301223017(x);
        tambahTugas_1301223017(Q,P);
    }
    printInfo_1301223017(Q);

    cout << "Kondisi Setelah Daily TASK" << endl;
    dailyTask_1301223017(Q);
    printInfo_1301223017(Q);
}
