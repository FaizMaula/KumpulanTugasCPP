#include "stack.h"

using namespace std;

int main()
{
    stack S;
    infotype x;
    int p;
    createStack_1301223017(S);
    for (int i = 0;i < 12;i++) {
        cin >> x;
        push_1301223017(S,x);
    }
    cout << "Stack Awal : " << endl;
    printInfo_1301223017(S);
    balikstack_1301223017(S);
    for (int i = Top(S);i>4;i--) {
        p = pop_1301223017(S);
    }
    balikstack_1301223017(S);
    cout << endl;
    cout << "stack sesudah pop" << endl;
    printInfo_1301223017(S);
}
