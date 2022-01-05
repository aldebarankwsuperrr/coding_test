#include <bits/stdc++.h>
using namespace std;

int get (int low, int high){
    if (low < high){
        int total = high - low; 
        int temp = total/2;
        if (total % 2 == 1){
            temp+=1;
        }
        if (temp % 2 == 1){
            return get (low+temp, high);
        }
        if (temp % 2 == 0){
            return get (low, low+temp);
        }
    }
    return low;
}

int main (){
    int  n;
    cin >> n;
    int* x;
    x = new int  (n);
    
    for(int i = 0; i < n;i++) {
        cin >> x[i];
    }
    int pos = get(0,n);
    cout << x[pos-1];


    return 0;
}