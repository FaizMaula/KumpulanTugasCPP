#include "TUBES.h"

void createListflight(listF &LF){
    first(LF) = NULL;
}
void createListPas(listP &LP){
    first(LP) = NULL;
}

void createListRelasi(listR &LR){
    first(LR) = NULL;
}

adrF createElmFlight(flight x){
    adrF p = new elmF;
    next(p) = NULL;
    info(p) = x;
    createListRelasi(passenger(p));
    return p;
}

adrP createElmPas(passenger x){
    adrP p = new elmP;
    next(p) = NULL;
    info(p) = x;

    return p;
}

adrR createElmRelasi(adrP x){
    adrR p = new elmR;
    next(p) = NULL;
    nextPass(p) = x;

    return p;
}

void insertFirstFlight(listF &LF, adrF p){//, string posisi){
    /*if (first(LF) == NULL){
        first(LF) = p;
    }else {//if (posisi == "Awal"){
        next(p) = first(LF);
        first(LF) = p;
    }/*else{
        adrF q = first(LF);
        while (q != NULL){
            next(q) = q;
            q = next(q);
        }
    }*/
    if (first(LF) == NULL){
        first(LF) = p;
    }else{
        next(p) = first(LF);
        first(LF) = p;
    }
}

void insertFirstPassenger(listP &LP, adrP p){
    if (first(LP) == NULL){
        first(LP) = p;
    }else{
        next(p) = first(LP);
        first(LP) = p;
    }
}

void insertFirstRelasi(listR &LR, adrR p){
    if (first(LR) == NULL){
        first(LR) = p;
    }else{
        next(p) = first(LR);
        first(LR) = p;
    }
}

void showFlight(listF LF){ // parent
    adrF p = first(LF);
    if (first(LF) == NULL){
        cout << "List Kosong" << endl;
    }else{
        while (p != NULL){
            cout << "ID     : " << info(p).ID << endl;
            cout << "Asal   : " << info(p).asal << endl;
            cout << "Tujuan : " << info(p).tujuan << endl;
            cout << "Waktu  : " << info(p).waktu << endl;
            cout << "Tanggal: " << info(p).tanggal << endl;
            p = next(p);
        }
        cout << endl;
    }
}

void showPass(listP LP){ // child
    adrP q = first(LP);
    if (first(LP) == NULL){
        cout << "Belum ada penumpang" << endl;
    }else{
        while (q != NULL){
            cout << "NIK           : " << info(q).NIK << endl;
            cout << "Nama          : " << info(q).nama << endl;
            cout << "Usia          : " << info(q).usia << endl;
            cout << "Jenis Kelamin : " << info(q).gen << endl;
            q = next(q);
        }
        cout << endl;
    }
}

void showRelation(listR LR){
    adrR p = first(LR);
    if (first(LR) == NULL){
        cout << "Belum ada penumpang" << endl;
    }else{
        while (p != NULL){
            cout << "NIK           : " << info(nextPass(p)).NIK << endl;
            cout << "Nama          : " << info(nextPass(p)).nama << endl;
            cout << "Usia          : " << info(nextPass(p)).usia << endl;
            cout << "Jenis Kelamin : " << info(nextPass(p)).gen << endl;
            p = next(p);
        }
        cout << endl;
    }
}

void showAllData(listF LF){
    adrF p = first(LF);
    while (p != NULL){
        cout << "ID     : " << info(p).ID << endl;
        cout << "Asal   : " << info(p).asal << endl;
        cout << "Tujuan : " << info(p).tujuan << endl;
        cout << "Waktu  : " << info(p).waktu << endl;
        cout << "Tanggal: " << info(p).tanggal << endl;
        if (first(passenger(p)) != NULL){
            cout << "Jumlah penumpang dalam penerbangan ini: " << countPassenger(LF,info(p).ID) << endl;
            showRelation(passenger(p));
        }else{
            cout << "Tidak ada yang menaiki penerbangan ini" << endl;
        }
        cout << endl;
        p = next(p);
    }
}

adrF findID(int ID, listF LF){
    adrF f = first(LF);
    adrF x = NULL;

    while (f != NULL){
        if (ID == info(f).ID){
            x = f;
        }
        f = next(f);
    }
    return x;
}

adrP findNIK(int NIK, listP LP){
    adrP p = first(LP);
    adrP x = NULL;
    while (p != NULL){
        if (NIK == info(p).NIK){
            x = p;
        }
        p = next(p);
    }
    return x;
}

void addRelation(listF &LF, listP LP, int NIK, int ID){
    adrF p;
    adrP q;
    adrR r;
    listR L3;

    p = findID(ID,LF);
    q = findNIK(NIK,LP);
    if (p != NULL && q != NULL){
        r = createElmRelasi(q);
        L3 = passenger(p);
        insertFirstRelasi(L3,r);
        passenger(p) = L3;
    }
}

int countPassenger(listF LF, int ID){
    int count = 0;
    adrF p = findID(ID,LF);
    adrR q = first(passenger(p));
    while (q != NULL){
        q = next(q);
        count++;
    }
    return count;
}

void inputAwal(listF &LF){
    flight x;
    x.ID = 737;
    x.maskapai = "Lion";
    x.asal = "Bandung";
    x.tujuan = "Padang";
    x.waktu = "12:45";
    x.tanggal = "8-Desember-2023";
    adrF p = createElmFlight(x);
    insertFirstFlight(LF,p);

    x.ID = 456;
    x.maskapai = "Batik";
    x.asal = "Sabang";
    x.tujuan = "Marauke";
    x.waktu = "1:30";
    x.tanggal = "5-Maret-2023";
    p = createElmFlight(x);
    insertFirstFlight(LF,p);

    x.ID = 300;
    x.maskapai = "Super";
    x.asal = "Makassar";
    x.tujuan = "Jakarta";
    x.waktu = "7:30";
    x.tanggal = "12-April-2023";
    p = createElmFlight(x);
    insertFirstFlight(LF,p);

}
