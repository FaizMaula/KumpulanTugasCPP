#include <iostream>
#include <cmath>
using namespace std;
int largestPrimeFactor(int N){
       int maxi = 2;
       while(N%2 == 0) {
           N/=2;
           maxi = 2;
       }
       for(int i=3  ;i*i<=N;i+=2) {
           while(N%i == 0) {
               maxi = i;
               N/=i;
           }
       }
       if(N > 2){
            return N;
       }
       return maxi;
}
int main()
{
    int N = 0;
    cin >> N;
    cout << largestPrimeFactor(N);

}
