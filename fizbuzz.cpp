#include <iostream>

void fizzbuzz (int n, int i = 1){
    if (i <= n){
        if (i % 3 == 0){ std::cout << "fizz "; }
        if (i % 5 == 0){ std::cout << "Buzz"; }
        else if (i % 5 != 0 and i % 3 != 0){ std::cout << i; }
        std::cout << std::endl;
        fizzbuzz(n,i+1);
    }
}

int main (){
    int n;
    std::cin >> n;
    fizzbuzz(n);

    return 0;
}