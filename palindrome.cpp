#include <iostream>
#include <string>

bool ispalindrome (bool value, std::string a, int low, int high){
    if (low <= high){
        return (a[low] == a[high]) ? ispalindrome (value, a, low + 1, high - 1) : false;
    }
    return value;
}

int main (){
    std::string a;
    std::getline(std::cin, a);
    std::cout << ((ispalindrome(true, a, 0, a.length()-1) == true) ? "Palindrome" : "No");
    return 0;
}
