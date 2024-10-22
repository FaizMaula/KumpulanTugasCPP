#include "rakbuku.h"


void createStack_1301223017(rakBuku &S){
    Top(S) = 0;
}
bool isEmpty_1301223017(rakBuku S){
    return Top(S) == 0;
}

bool isFull_1301223017(rakBuku S){
    return Top(S) == 12;
}
void push_1301223017(rakBuku &S, string judul,string penulis){
    if (!isFull_1301223017(S)) {
        Top(S) = Top(S) + 1;
        info(S)[Top(S)].judul = judul;
        info(S)[Top(S)].penulis = penulis;
    }
}

void pop_1301223017(rakBuku &S,string &judul, string &penulis){
    judul = (info(S))[Top(S)].judul;
    penulis = (info(S))[Top(S)].penulis;
    Top(S) = Top(S) - 1;
}

void printInfo_1301223017(rakBuku S){
    int i = 0;
    if (isEmpty_1301223017(S)) {
        cout << "Stack Kosong" << endl;
    } else {
        for (i = 1;i <= Top(S);i++){
            cout << "Judul Buku: "<<(info(S))[i].judul << " Penulis Buku: " << (info(S))[i].penulis <<endl;
        }
    }
}

void Get_1301223017(rakBuku &S, string judul, string &namaPenulis){
    int i = 0;
    namaPenulis = "NONE";
    string j;
    while(info(S)[i].judul != judul and i < 12){
        pop_1301223017(S,j,namaPenulis);
        i++;
    }
    if (info(S)[i].judul == judul){
        namaPenulis = info(S)[i].penulis;
    }
}
