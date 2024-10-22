#include "TBA.h"

void createStack_1301223017(struktur &S){
    Top(S) = 0;
}
bool isEmpty_1301223017(struktur S){
    return Top(S) == 0;
}

bool isFull_1301223017(struktur S){
    return Top(S) == 15;
}

void push_1301223017(struktur &S, infotype x){
    if (!isFull_1301223017(S)){
        Top(S) = Top(S) + 1;
        info(S)[Top(S)] = x;
    }

}

infotype pop_1301223017(struktur &S) {
    infotype x = info(S)[Top(S)];
    Top(S) = Top(S) - 1;
    return x;
}

void printInfo_1301223017(struktur S){
    int i = 0;
    if (isEmpty_1301223017(S)) {
        cout << "Stack Kosong" << endl;
    } else {
        for (i = 1;i <= Top(S);i++){
            cout << info(S)[i] << " ";
        }
    }
}
