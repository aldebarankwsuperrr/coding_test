#include <iostream> 
#include <cmath>

// merubah bilangan bulat ke bilangan biner dalam bentuk string
// secara terbalik
std::string toBiner (int n){
    if (n == 0){
        return "0";
    }
    std::string temp;
    while (n > 0){
        if (n & 1){
            temp += '1';
        }else{
            temp += '0';
        }
        n >>= 1;
    }
    return temp;
}

// mengeliminasi angka 1 dan 0 yang berhimpitan pada string
std::string eliminasi (std::string a, int low, int high){
    if (low < high){
        if (a[low] == '1'){
            if(a[low+1] == '0'){
                a.erase(low,1);
                a.erase(low,1);
                low = 0;
            }else if (a[low-1] == '0'){
                a.erase(low-1,1);
                a.erase(low-1,1);
                low = 0;
            }else{
                low++;
            }
            
        }else{
            low++;
        }
        return eliminasi (a, low, a.length());
    }
    return a;
}

// merubah string bilangan biner yang telah dieliminasi ke bilangan decimal baru

int todecimal (std::string a){
    int pos = a.find('1');
    if (pos < 0){
        return a.length();
    }
    int temp = 0;
    for (int i = 0; i < a.length();i++){
        if (a[i] == '1'){
            temp += std::pow (2,i);
        }
    }
    return temp;
}

int main (){
    int n;
    std::cin >> n;
    std::string temp = toBiner (n);
    temp = eliminasi (temp, 0 , temp.length());
    std::cout << todecimal(temp);
    return 0;
}
