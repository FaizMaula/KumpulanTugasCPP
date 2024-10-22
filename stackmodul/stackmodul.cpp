#include "stackmodul.h"

void createStack_1301223017(stack &S){
    Top(S) = 0;
    info(S)[Top(S)] = 0;
}
bool isEmpty_1301223017(stack S){
    return Top(S) == 0;
}
void push(stack &S, infotype x){
    Top(S) = Top(S) + 1;
    info(S)[Top(S)] = x;
}

infotype pop(stack &S){
    infotype x = info(S)[Top(S)];
    Top(S) = Top(S) - 1;
    return x;
}

void printInfo(stack S){
    cout << "[TOP]" << " ";
    for (int i = Top(S);i > 0;i--){
        cout << info(S)[i] << " ";
    }
}
void balikStack(stack &S){
    stack Q;
    createStack_1301223017(Q);
    infotype x;
    while (!isEmpty_1301223017(S)){
        x = pop(S);
        push(Q,x);
    }
    S = Q;
}
void pushAscending(stack &S, infotype x){
    int i = 1,temp;

    if ( x >= info(S)[Top(S)]) {
        push(S,x);
    } else {
        temp = Top(S);
        while (i < Top(S) and info(S)[i] < x){
            temp = info(S)[i];
            i++;
        }
        info(S)[i+1] = x;

    }
}
