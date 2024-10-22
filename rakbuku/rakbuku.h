#ifndef RAKBUKU_H_INCLUDED
#define RAKBUKU_H_INCLUDED

#include <iostream>
using namespace std;

#define Top(S) (S).Top
#define info(S) (S).info



struct infotype{
    string judul;
    string penulis;
};
struct rakBuku {
    infotype info[200];
    int Top;
};

void createStack_1301223017(rakBuku &s);
bool isEmpty_1301223017(rakBuku S);
bool isFull_1301223017(rakBuku S);
void push_1301223017(rakBuku &S, string judul,string penulis);
void pop_1301223017(rakBuku &S,string &judul, string &penulis);
void Get_1301223017(rakBuku &S, string judul, string &namaPenulis);
void printInfo_1301223017(rakBuku S);


#endif // RAKBUKU_H_INCLUDED
