#include <iostream>

#define swap(a,b) a = b - a + (b = a)

short tanda = 0;

short cek (short a[], short x, short n, short i){
    if (x > i){
        if (n + a[i] >= 0){
            return cek (a, x, n + a[i], i+1);
        }
        
        if (a[i+1] + n + a[i] >= 0){
            swap(a[i], a[i+1]);
            return cek (a, x, n+a[i], i+1);
        }

        else{
            tanda++;
            return cek (a, x, n, i+1);
        }
        


    }
    return n;
}

int main (){
    short n, x;
    short* a;
    
    std::cin >> x >> n;
    
    a = new short (x);

    for (short i = 0; i < x;i++){
       std::cin >> a[i];
    }

   std::cout << cek (a, x, n, 0) << " " << tanda;

    return 0;
}