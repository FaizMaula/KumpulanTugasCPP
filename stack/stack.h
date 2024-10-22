#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include <iostream>
using namespace std;

#define Top(S) (S).Top
#define info(S) (S).info


typedef char infotype;
struct stack {
    infotype info[15];
    int Top;
};

void createStack_1301223017(stack &s);
bool isEmpty_1301223017(stack S);
bool isFull_1301223017(stack S);
void push_1301223017(stack &S, infotype x);
infotype pop_1301223017(stack &S);
void printInfo_1301223017(stack S);
void balikstack_1301223017(stack &S);

#endif // STACK_H_INCLUDED
