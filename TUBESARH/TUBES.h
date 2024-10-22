#ifndef MLL_H_INCLUDED
#define MLL_H_INCLUDED

#include <iostream>

using namespace std;

#define first(L) L.first
#define next(p) p->next
#define info(p) p->info
#define passenger(p) p->passenger
#define nextPass(p) p->nextpass

struct flight {
    string asal, tujuan, maskapai, tanggal, waktu;
    int ID;
};
struct passenger {
    string nama, usia, gen;
    int NIK;
};

typedef struct elmF *adrF;
typedef struct elmP *adrP;
typedef struct elmR *adrR;

struct listF{
    adrF first;
};
struct listP{
    adrP first;
};
struct listR{
    adrR first;
};

struct elmR {
    adrP nextpass;
    adrR next;
};
struct elmF {
    flight info;
    adrF next;
    listR passenger;
};
struct elmP {
    passenger info;
    adrP next;
};

void inputAwal(listF &LF);
void createListflight(listF &LF);
void createListPas(listP &LP);
void createListRelasi(listR &LR);
adrF createElmFlight(flight x);
adrP createElmPas(passenger x);
adrR createElmRelasi();
void insertFirstFlight(listF &LF, adrF p); //string posisi);
void insertFirstPassenger(listP &LP, adrP p);
void insertFirstRelasi(listR &LP, adrR p);
void showFlight(listF LF);
void showPass(listP LP);
void showRelation(listR LR);
adrF findID(int ID, listF LF);
adrP findNIK(int NIK, listP LP);
void addRelation(listF &LF, listP LP, int NIK, int ID);
void showAllData(listF LF);
int countPassenger(listF LF, int ID);
//void DeleteFlight
//

#endif // MLL_H_INCLUDED
