#include <iostream>
#include <string>

bool seimbang (bool value, short low, short high, std::string a){
    if (low <= high and a.length() % 2 == 0 and value == true){
        if ((a[low] == a[high]+1) || (a[low] == a[high]+2)){ return seimbang ( true, low+1, high-1, a); }
        
    }
    return value;
}

int main (){
    std::string a;
    short n;
    std::cin >> n;
    bool value;
    for (short i = 0; i < n;i++){
        std::cin >> a;
        value = (a.length() % 2 == 1) ? false : true;
        std::cout << ((seimbang(value, 0, a.length()-1, a) == true) ? "seimbang" : "tidak seimbang") << std::endl;
    }

    return 0;
}