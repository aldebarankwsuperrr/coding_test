#include "strukturdata.hpp"
#include <iostream>
// function struktur data

int strukturdata::isempty(){
    return (top <= 0) ? 1 : 0;
}

int strukturdata::isfully(){
    return (top >= ukuran) ? 1 : 0;
}

// function linked list

int linkedlist::isempty(){
    return (current == NULL) ? 1 : 0;
}

void linkedlist::insert(int value){
    node* newnode = new node;
    newnode->value = value;
    newnode->next = current;
    current = newnode;
}

void dlinkedlist::headinsert(int value){
    node* newnode = new node;
    newnode->value = value;
    if (linkedlist::isempty() == 1){
        newnode->prev = NULL;
        newnode->next = NULL;
        tail = newnode;
        current = tail;
    }else{
        newnode->next = current;
        current->prev = newnode;
        newnode->prev = NULL;
        current = newnode;
    }
}

void dlinkedlist::tailinsert(int value){
    node* newnode = new node;
    newnode->value = value;
    if (isempty() == 1){
        newnode->next = NULL;
        newnode->prev = NULL;
        tail = newnode;
        current = tail;
    }else{
        newnode->next = NULL;
        newnode->prev = tail;
        tail->next = newnode;
        tail = newnode;
    }
}

void dlinkedlist::headremove(){
    if (isempty() == 1){
        std::cout << "Maaf List Kosong\n";
    }else if (current == tail){
        std::cout << current->value << " Keluar" << std::endl;
        current = NULL;
        tail = current;
    }
    else{
        std::cout << this->current->value  << " Keluar" << std::endl;
        current = current->next;
        current->prev = NULL;
    }
}

void dlinkedlist::tailremove(){
    if (isempty() == 1){
        std::cout << "Maaf List Kosong\n";
    }else if (tail == current){
        std::cout << tail->value << " Keluar" << std::endl;
        tail = NULL;
        current = tail;
    }
    else{
        std::cout << this->tail->value << " Keluar" << std::endl;
        this->tail = this->tail->prev;
        this->tail->next = NULL;
    }
}

void linkedlist::print(){
    if (isempty() == 1){
        std::cout << "Maaf Kosong\n";
    }
    else{
        std::cout << "Isi List : \n";
        node* newnode = new node;
        newnode = current;
        while (newnode != NULL){   
            std::cout << newnode->value << std::endl;
            newnode = newnode->next;
        }
    }
}

void linkedlist::remove(){
    if (current == NULL){
        std::cout << "Maaf Kosong\n";
    }
    else{
        std::cout << current->value << " Keluar\n";
        current = current->next;
    }
}

// function stack

stack::stack(int ukuran){
    stack::top = 0;
    stack::ukuran = ukuran;
    stack::data = new auto (ukuran);
}

void stack::print(){
    if (isempty() == 1){
        std::cout << "Maaf Kosong\n";
    }else{
        std::cout << "Isi Stack : \n";
        int i = top;
        while(i--){
            std::cout << stack::data[i] << std::endl;
        }
    }
}

void stack::insert(int value){
    if (isfully() == 1){
        std::cout << "Maaf Penuh\n";
    }else{
        stack::data[top] = value;
        top++;
    }
}

void stack::remove(){
    if (strukturdata::isempty() == 1){
        std::cout << "Maaf Kosong\n";
    }else{
        std::cout << data[--top] << " Keluar\n";
    }
}

// function Queue

queue::queue(int ukuran){
    this->top = 0;
    this->ukuran = ukuran;
    this->data = new int (this->ukuran);
}

void queue::insert(int value){
    if (isfully() == 1){
        std::cout << "Maaf Penuh\n";
    }else{
        data[top++] = value;
    }
}

void queue::print(){
    if (isempty() == 1){
        std::cout << "Maaf Kosong\n";
    }else{
        std::cout << "Isi Queue :\n";
        for (int i = 0; i < top;i++){
            std::cout << data[i] << std::endl;
        }
    }
}

void queue::remove(){
    if (isempty() == 1){
        std::cout << "Maaf Kosong\n";
    }else{
        std::cout << data[0] << " Keluar\n";
        int i = 0;
        while(i < top){
            data[i] = data[i+1];
            i++;
        }
        --top;
    }
}
