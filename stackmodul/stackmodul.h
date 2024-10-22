#ifndef STACKMODUL_H_INCLUDED
#define STACKMODUL_H_INCLUDED

#include <iostream>

using namespace std;

#define Top(S) S.top
#define info(S) S.info


typedef int infotype; // type infotype : integer
struct stack { // type struct <
    infotype info[20]; // info : array [20] of integer
    int top; // top : integer
}; // >

void createStack_1301223017(stack &S); // procedure createStack(in/out S: stack)
void push(stack &S, infotype x);
infotype pop(stack &S);
void printInfo(stack S);
void balikStack(stack &S);
bool isEmpty_1301223017(stack S);
void pushAscending(stack &S, infotype x);


#endif // STACKMODUL_H_INCLUDED
