#include <iostream>

class strukturdata{
    protected:
        int isfully();
        int isempty();
        int* data;
        int ukuran;
        int top;

    public:
        void set(int);
        void display();
        void insert(int);
};

class queue: public strukturdata{
    private:
        void geser();
    public:
        void out();
};

class stack: public strukturdata{
    public:
        void out();
};

void strukturdata::set(int n){
    this->top = 0;
    this->ukuran = n;
    this->data = new int (this->ukuran);
}

int strukturdata::isfully(){
    if (top >= ukuran){
        return 1;
    }
    return 0;
}

int strukturdata::isempty(){
    if (top <= 0){
        return 1;
    }
    return 0;
}

void strukturdata::insert(int i){
    if (isfully() == 1){
        std::cout << "Maaf Data Penuh\n";
    }
    else{
        data[top++] = i;
    }
}

void strukturdata::display(){
    if (isempty() == 1){
        std::cout << "Maaf Tidak Ada Data\n";
    }else{
        std::cout << "Data :\n";
        int i = 0;
        while (i < top){
            std::cout << data[i++] << std::endl;
        }
    }
}

void queue::geser (){
    int i = 0;
    while (i < top){
        data[i] = data[i+1];
        i++;
    }
    --top;
}

void queue::out() {
    if (isempty() == 1){
        std::cout << "Maaf Tidak Ada Data\n";
    }else{
        std::cout << "Data : " << data[0] << " Keluar\n";
        geser();
    }
}

void stack::out(){
    if(isempty() == 1){
        std::cout << "Maaf Tidak Ada Data\n";
    }else{
        std::cout << "Data : " << data[--top] << " Keluar\n";
    }
}

int main (){
    
    stack data1;
    data1.set(4);

    queue data2;
    data2.set(4);

    for (int i = 0; i < 4;i++){
        data2.insert(i);
        data1.insert(i);
    }

    std::cout << "Stack\n";
    data1.display();
    data1.out();
    data1.out();
    data1.out();
    data1.out();
    data1.out();
    std::cout << std::endl;

    std::cout << "Queue\n";
    data2.display();
    data2.out();
    data2.out();
    data2.out();
    data2.out();
    data2.out();
    std::cout << std::endl;

    return 0;
}
