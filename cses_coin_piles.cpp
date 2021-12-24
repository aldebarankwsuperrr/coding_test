#include <iostream>

using namespace std;
#define ll long long
bool cek(ll a, ll b){
    bool tes = false;
    if ((a+b)%3 == 0){
        if ((a == b) or (min(a,b) >= (max(a,b)/2))){
            tes = true;
        }
    }
    return tes;
}

int main (){
    ll a, b, n;
    cin >> n;

    for (ll i = 0; i < n;i++){
        cin >> a >> b;
        if (cek (a,b)){
            cout << "YES";
        }else{
            cout << "NO";
        }
        cout << endl;

    }
    return 0;
}