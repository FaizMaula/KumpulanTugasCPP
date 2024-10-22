#include "TUBES.h"

using namespace std;

int main()
{
    listF LF;
    listP LP;
    listR LR;
    flight f;
    passenger p;
    adrF aF;
    adrP aP;
    string posisi;
    int ID, NIK;

    createListflight(LF);
    createListPas(LP);
    /*cout << "ID, Maskapai, Asal, Tujuan, Waktu, Tanggal" << endl;
    for (int i = 0; i < 3; i++){
        cin >> f.ID >> f.maskapai >>f.asal >> f.tujuan >> f.waktu >> f.tanggal;
        aF = createElmFlight(f);
        insertFirstFlight(LF, aF);
    }*/
    inputAwal(LF);
    cout << "==================================" << endl;
    for (int i = 0; i < 3; i++){
        cin >> p.NIK >> p.nama >> p.usia >> p.gen;
        aP = createElmPas(p);
        insertFirstPassenger(LP,aP);
    }
    cout << "==================================" << endl;
    cout << "Flight" << endl;
    showFlight(LF);
    cout << "==================================" << endl;
    cout << "Passenger" << endl;
    showPass(LP);

    cout << "==================================" << endl;
    cout << "Add relation" << endl;
    cout << "ID - NIK" << endl;
    cin >> ID;
    cin >> NIK;
    addRelation(LF,LP,NIK,ID);
    cout << "==================================" << endl;
    showAllData(LF);
}
