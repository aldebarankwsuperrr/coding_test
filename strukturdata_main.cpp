#include <iostream>

#include "strukturdata.hpp"
int main (){
    
    // stack
    stack data1 = stack(5);

    for (int i = 0; i < 5;i++){
        data1.insert(i);
    }

    std::cout << "\n=========";
    std::cout << "\nSTACK";
    std::cout << "\n=========\n";
    data1.print();
    std::cout << std::endl;
    data1.remove();
    std::cout << std::endl;
    data1.print();
    
    // queue
    queue* data = new queue(5);

    for (int i = 0; i < 5;i++){
       data->insert(i);
    }

    std::cout << "\n=========\n";
    std::cout << "QUEUE";
    std::cout << "\n=========\n";
    data->print();
    std::cout << std::endl;
    data->remove();
    std::cout << std::endl;
    data->print();

    // single linked list

    linkedlist* data2 = new linkedlist;

    for (int i = 1; i > 0;i--){
        data2->insert(i);
    }
    
    std::cout << "\n=========\n";
    std::cout << "Single Linked List";
    std::cout << "\n=========\n";
    data2->print();
    std::cout << "\n";
    data2->remove();
    std::cout << "\n";
    data2->print();

    return 0;
}
