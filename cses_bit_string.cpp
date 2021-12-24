#include <iostream>

using namespace std;
#define ll long long 
#define m 1000000007
ll pow (long long a,long long b){
    ll temp = 1;
    while ( b > 0){
        if (b & 1){
            temp = (temp*a) % m;
        }
        a = (a*a) % m;
        b>>=1;
    }
    return temp % m;
}

int main (){        
    ll n;
    cin >> n;
    cout << pow(2, n);



    return 0;
}