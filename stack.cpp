#include <iostream>

class stack{
    private:
        int isfully();
        int isempty();

    public:
        stack(int);
        int top;
        int pop;
        int* data;
        int ukuran;
        void insert(int);
        void take();
        void display();
};

int stack::isfully(){
    if (top >= ukuran){
        return 1;
    }
    return 0;
}

int stack::isempty(){
    if (top <= 0){
        return 1;
    }
    return 0;
}

stack::stack(int n){
    this->top = 0;
    this->ukuran = n;
    this->data = new int (this->ukuran);
}

void stack::insert(int i){
    if (isfully() == 1){
        std::cout << "Maaf Tumpukan Penuh\n";
    }
    else{
        data[top++] = i;
    }
}

void stack::take(){
    if (isempty() == 1){
        std::cout << "Maaf Tumpukan Kosong\n";
    }
    else{
        std::cout << data[--top] << std::endl;
    }
}


void stack::display(){
    if (isempty() == 1){
        std::cout << "Maaf Tumpukan Kosong\n";
    }else{
        while (0 < top){
            std::cout << data[--top] <<std::endl; 
        }
    }
}

int main (){
    stack tumpukan = stack (5);
    int a;
    for (int i =0; i < 5;i++){
        tumpukan.insert(i);
    }
    tumpukan.take();
    tumpukan.take();
    tumpukan.take();
    tumpukan.take();
    tumpukan.take();
    std::cout << std::endl;
    tumpukan.take();
    std::cout << std::endl;
    tumpukan.display();


    return 0;
}
