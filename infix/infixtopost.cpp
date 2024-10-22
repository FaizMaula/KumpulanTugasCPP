#include "infixtopost.h"

void createStack_1301223017(stack &S){
    Top(S) = 0;
}
bool isEmpty_1301223017(stack S){
    return Top(S) == 0;
}

bool isFull_1301223017(stack S){
    return Top(S) == 50;
}

void push_1301223017(stack &S, char x){
    if (!isFull_1301223017(S)) {
        Top(S) = Top(S) + 1;
        info(S)[Top(S)] = x;
    }
}
char pop_1301223017(stack &S) {
    char p = info(S)[Top(S)];
    Top(S) = Top(S) - 1;
    return p;

}
int prec(char c)
{
    if (c == '^')
        return 3;
    else if (c == '/' || c == '*')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}

string infixToPostfix(string s, stack &S)
{
    string result;
    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')){
            result += c;
        }else if (c == '('){

            push_1301223017(S,c);
        }else if (c == ')') {
            while (info(S)[Top(S)] != '(') {
                result += info(S)[Top(S)];
                pop_1301223017(S);
            }
            pop_1301223017(S);
        } else {
            while (!isEmpty_1301223017(S) && prec(s[i]) <= prec(info(S)[Top(S)])) {
                result += info(S)[Top(S)];
                pop_1301223017(S);
            }
            push_1301223017(S,c);
        }
    }
    while (!isEmpty_1301223017(S)) {
        result += info(S)[Top(S)];
        pop_1301223017(S);
    }
    return result;
}

int evaluatePostfix(string exp,stack &S)
{
    int i;
    for (i = 0; exp[i]; ++i) {
        if (isdigit(exp[i]))
            push_1301223017(S, exp[i] - '0');
        else {
            int val1 = pop_1301223017(S);
            int val2 = pop_1301223017(S);
            switch (exp[i]) {
            case '+':
                push_1301223017(S, val2 + val1);
                break;
            case '-':
                push_1301223017(S, val2 - val1);
                break;
            case '*':
                push_1301223017(S, val2 * val1);
                break;
            case '/':
                push_1301223017(S, val2 / val1);
                break;
            }
        }
    }
    return pop_1301223017(S);
}
void reverseString(string& str) {
    int start = 0;
    int end = str.length() - 1;
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}
string infixToPrefix(string infix)
{
    stack S;
    int l = infix.size();
    reverseString(infix);
    for (int i = 0; i < l; i++) {

        if (infix[i] == '(') {
            infix[i] = ')';
        }
        else if (infix[i] == ')') {
            infix[i] = '(';
        }
    }
    string prefix = infixToPostfix(infix,S);
    reverseString(prefix);
    return prefix;
}
bool isOperand(char c)
{
    return isdigit(c);
}

int evaluatePrefix(string exp, stack &S)
{
    for (int j = exp.size() - 1; j >= 0; j--) {
        if (isOperand(exp[j]))
            push_1301223017(S,exp[j] - '0');
        else {
            int o1 = info(S)[Top(S)];
            pop_1301223017(S);
            int o2 = info(S)[Top(S)];
            pop_1301223017(S);

            switch (exp[j]) {
            case '+':
                push_1301223017(S,o1+o2);
                break;
            case '-':
                push_1301223017(S,o1 - o2);
                break;
            case '*':
                push_1301223017(S,o1 * o2);
                break;
            case '/':
                push_1301223017(S,o1 / o2);
                break;
            }
        }
    }

    return info(S)[Top(S)];
}
