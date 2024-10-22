#included "TBA.h"
#include "Node.cpp"


void createStack_1301223017(stack &S){
    Top(S) = 0;
}
bool isEmpty_1301223017(stack S){
    return Top(S) == 0;
}

bool isFull_1301223017(stack S){
    return Top(S) == 15;
}

void push_1301223017(stack &S, infotype x){
    if (!isFull_1301223017(S)) {
        Top(S) = Top(S) + 1;
        info(S)[Top(S)] = x;
    }
}

infotype pop_1301223017(stack &S) {
    infotype x = info(S)[Top(S)];
    Top(S) = Top(S) - 1;
    return x;
}

void balikstack_1301223017(stack &S) {
    int TopBaru = Top(S) + 1;
    infotype arrayBaru[15];

    for (int i = 0;i<TopBaru;i++){
        arrayBaru[i] = pop_1301223017(S);
    }
    for (int q = 0;q < TopBaru;q++){
        push_1301223017(S,arrayBaru[q]);
    }

}

void printInfo_1301223017(stack S){
    int i = 0;
    if (isEmpty_1301223017(S)) {
        cout << "Stack Kosong" << endl;
    } else {
        for (i = 1;i <= Top(S);i++){
            cout << info(S)[i] << " ";
        }
    }
}
