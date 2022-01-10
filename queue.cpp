#include <iostream>

class queue{
    private:
        int isempty();
        int isfully();

    public:
        int top;
        int* data;
        int ukuran;
        void insert(int);
        void out();
        void display();
        queue(int);
};

int queue::isempty(){
    if (top <= 0){
        return 1;
    }
    return 0;
}

int queue::isfully(){
    if (top >= ukuran){
        return 1;
    }
    return 0;
}

queue::queue(int n){
    top = 0;
    ukuran = n;
    data = new int (ukuran);
}

void queue::insert(int i){
    if (isfully() == 1){
        std::cout << "Maaf Antrian Penuh\n";
    }
    else{
        data[top++] = i;
    }
}

void queue::out(){
    if (isempty() == 1){
        std::cout << "Maaf Antrian Kosong\n";
    }else{
        int i = 0;
        std::cout << data[0] << " Keluar\n";
        while (i < top){
            data[i] = data[i+1];
            i++;
        }
        top--;
    }
}

void queue::display(){
    if (isempty() == 1){
        std::cout << "Maaf Antrian Kosong\n";
    }
    else{
        int i = 0;
        while (i < top){
            std::cout << data[i++] << std::endl;
        }
    }
}

int main (){
    queue antrian = queue(5);

    for (int i = 0; i < 0;i++){
        antrian.insert(i);
    }
    antrian.out();
    antrian.out();
    antrian.out();
    antrian.out();
    antrian.out();
    std::cout << std::endl;


    antrian.display();

    return 0;
}
