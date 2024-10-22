#ifndef TBA_H_INCLUDED
#define TBA_H_INCLUDED

#include<bits/stdc++.h>
#include <iostream>
using namespace std;

#define Top(S) (S).Top
#define info(S) (S).info
#define MAX_KALIMAT_LEN 120  // Maximum length of your address can't be more than 120


typedef string infotype;
struct struktur {
    infotype info[10];
    int Top;
};

void createStack_1301223017(struktur &s);
bool isEmpty_1301223017(struktur S);
bool isFull_1301223017(struktur S);
void push_1301223017(struktur &S, infotype x);
infotype pop_1301223017(struktur &S);
void printInfo_1301223017(struktur S);
void balikstack_1301223017(struktur &S);


#endif // TBA_H_INCLUDED
