#include <iostream>

using namespace std;

int cekPrima(int N, int i){
    if (i*i<=N) {
        if (N%i == 0) {
            N /= i;
            cekPrima(N,i);
        }else {
            cekPrima(N,i+1);
        }
    }else {
        return N;
    }
}
int main()
{
    int N,i = 2;
    cin >> N;
    cout << (cekPrima(N,i));

}
