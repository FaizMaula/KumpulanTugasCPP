#include "queue.h"

bool queueEmpty_1301223017(antrianTugas Q) {
    return head(Q) == Nil;
}
void createQueue_1301223017(antrianTugas &Q) {
    head(Q) = Nil;
}

void tambahTugas_1301223017(antrianTugas &Q, adr P){
    if (queueEmpty_1301223017(Q)) { /* kondisi kosong */
        head(Q) = P;
        tail(Q) = P;
    } else { /* kondisi tidak kosong */
        next(tail(Q)) = P;
        tail(Q) = P;
        next(P) = head(Q);
    }

}
void HapusTugas_1301223017(antrianTugas &Q, adr &P){
      if (queueEmpty_1301223017(Q)) { /* kondisi kosong */
        cout << "Queue kosong" << endl;
    } else if (next(head(Q)) == Nil) { /* kondisi satu elemen */
        P = head(Q);
        head(Q) = Nil;
    } else { /* kondisi banyak elemen */
        P = head(Q);
        head(Q) = next(P);
        next(P) = Nil;
    }
}
adr alokasi_1301223017(infotype info) {
    adr p = new elmTugas;
    info(p) = info;
    next(p) = Nil;
    return p;
}
void dailyTask_1301223017(antrianTugas &Q){
    adr P = head(Q);
    int waktu = 0;
    while(info(P).status == "unfinished") {
        info(P).status = "Finished";
        waktu += info(P).waktu;
        info(P).dikerjakan = waktu;
        HapusTugas_1301223017(Q,P);
        tambahTugas_1301223017(Q,P);
        P = next(P);
    }
}
void printInfo_1301223017(antrianTugas Q) {
    adr P;
    int i = 1;
    P = head(Q);
    if (P == Nil) { /* kondisi kosong */
        cout << "Queue kosong" << endl;
    } else {
        do  {
            cout << "Antrian ke-" << i <<" Pekerjaan: "<< info(P).pekerjaan << " waktu: " <<info(P).waktu<<" status: " << info(P).status  << " Total Waktu Pengerjaan: " << info(P).dikerjakan << " Jam." << endl;
            P = next(P);
            i++;
        }while (P != head(Q));
    }
}
