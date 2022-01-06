#include <iostream>

short i = 0;

short solve (short x, short y){
    if (x != y){
        i++;
        if (x+2 >= y * 3){
            return solve(x, y*3);
        }else {
            
            return solve(x,y-1);
        }
    }
    return i;
}

int main (){
    short x,y;

    std::cin >> x >> y;

    std::cout << solve(x,y);


    return 0;
}