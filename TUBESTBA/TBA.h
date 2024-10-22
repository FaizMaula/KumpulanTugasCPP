#ifndef TBA_H_INCLUDED
#define TBA_H_INCLUDED

#include <iostream>
#include <stdlib.h>

using namespace std;

string subjek = ["Anak", "Guru", "Dokter", "Petani", "Pelukis"];
string predikat = ["membaca", "mengajar", "merawat", "menanam", "melukis"];
string objek = ["buku", "siswa", "pasien", "padi", "kanvas"];
string keterangan = ["di sekolah", "dengan baik", "setiap hari", "di sawah", "dengan hati-hati"];
5
typedef string infotype;




struct stack {
    infotype info[5];
    int Top;
};

void createStack_1301223017(stack &s);
bool isEmpty_1301223017(stack S);
bool isFull_1301223017(stack S);
void push_1301223017(stack &S, infotype x);
infotype pop_1301223017(stack &S);
void printInfo_1301223017(stack S);
void balikstack_1301223017(stack &S);


#endif // TBA_H_INCLUDED
