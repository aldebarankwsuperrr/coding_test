#include <iostream>

using namespace std;

long long cek (long long n){
    int i = 0;
    while (n > 4){
        i+=n/5;
        n/=5;
    }
    return i;
}

int main (){
    long long n;
    cin >> n;
    

    cout << cek(n);

    return 0;
}