#include <iostream>

using namespace std;

int largestPrimeFactor(int N){
        int i=2;
        while(i*i<=N){
            if(N%i==0){
                N /= i;
            }else {
                i++;
            }
        }
        return N;
}

int main()
{
    int x;
    cin >> x;
    cout << largestPrimeFactor(x);
    return 0;
}

