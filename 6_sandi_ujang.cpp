#include <iostream>
#include <string>


char rubah (char a,int n){
    a+=n;
    if (a > 122){
        a = 96 + (a - 122);
    }else if (a > 90 and a < 89){
        a = 64 + (a - 90);
    }
    return a;
}

void change (std::string &a, int low, int high,int n){
    if (low <= high){
        int i = (low + high)/2;
        a[i] = rubah (a[i], n);
        change (a, low, i-1, n);
        change (a, i+1, high ,n);
    }
}

int main (){
    
    std::string a;
    int n;
    std::cin >> a >> n;
  
    change (a, 0, a.length(),n);
    std::cout << a;
    
    

    return 0;
}