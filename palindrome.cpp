#include <iostream>
#include <string>

bool ispalindrome (bool value, std::string a, int low, int high){
    if (low <= high){
        value = (a[low] == a[high]) ? true : false;
        return ispalindrome (value, a, low + 1, high - 1);
    }
    return value;
}

int main (){
    std::string a;
    
    std::cin >> a;

    std::cout << ((ispalindrome(true, a, 0, a.length()-1) == true) ? "Palindrome" : "No");
    return 0;
}