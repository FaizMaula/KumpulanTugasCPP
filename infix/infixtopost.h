#ifndef INFIXTOPOST_H_INCLUDED
#define INFIXTOPOST_H_INCLUDED

#include <iostream>
using namespace std;

#define Top(S) (S).Top
#define info(S) (S).info

struct stack {
    char info[50];
    int Top;
};

void createStack_1301223017(stack &S);
bool isEmpty_1301223017(stack S);
bool isFull_1301223017(stack S);
void push_1301223017(stack &S, char x);
int prec(char c);
string infixToPostfix(string s,stack &S);
char pop_1301223017(stack &S);
int evaluatePostfix(string exp, stack &S);
string infixToPrefix(string infix);
void reverseString(string& str);
bool isOperand(char c);
int evaluatePrefix(string exp, stack &S);

#endif // INFIXTOPOST_H_INCLUDED
