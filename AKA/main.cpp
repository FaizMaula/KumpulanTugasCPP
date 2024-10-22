#include <iostream>

using namespace std;
const long long mod = 1e9+7;
long long power(int N,int R)
    {
       //Your code here
        long long x = N;
        long long res = 1;
        while(R != 0)
        {
            if(R&1)
            {
                res = ((res%mod)*(x%mod))%mod;
            }
            x = (x*x)%mod;
            R /= 2;
        }
        return res;
    }
    long long power(int N,int R)
    {
       //Your code here
       if(R==0){
           return 1;
       }
       if(R==1){
           return N;
       }
       if(R%2==0){
           long long pow = power(N,R/2);
           return (pow*pow)%1000000007;
       }else{
           return (power(N,R-1)*N)%1000000007;
       }
    }
}
int main()
{
   int N, R;
   cin >> N >> R;
   cout << power(N,R);
}



