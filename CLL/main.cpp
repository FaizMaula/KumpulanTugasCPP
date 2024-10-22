#include "CLL.h"

using namespace std;

int main()
{
    List L1,L2,C;
    createList(L1);
    createList(L2);
    createList(C);
    adr p;
    infotype x;
    int i = 0;

    while (i < 8) {
        cin >> x;
        p = createElement(x);
        insertLast(L1,p);
        i++;
    }
    show(L1);
    cout << " sum info "<< endl;
    cout << sumInfo(L1);
    cout << "move kelipatan 5" << endl;
    moveKelipatan5(L1,C);
    show(C);
    pisahList(L1,L2);
    cout << "hasil setelah dipisah" << endl;
    show(L1);
    cout << "(L2)" << endl;
    show(L2);

}
