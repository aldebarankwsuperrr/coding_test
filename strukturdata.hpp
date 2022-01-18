#ifndef __STRUKTURDATA
#define __STRUKTURDATA
#include <cstddef>
class strukturdata{
    protected:
        int* data;
        int ukuran;
        int top;
        int isfully();
        int isempty();
        void insert(int);

};

class node{
    public:
        node* next;
        int value;
};

class linkedlist : public strukturdata{
    private:
        node* current = NULL;
        int isempty();
    public:
        void insert(int);
        void print();
        void remove();
};

class stack : public strukturdata{
    public:
        void insert(int);
        stack (int);
        void print();
        void remove();
};

class queue : public strukturdata{
    public:
        queue(int);
        void insert(int);
        void print();
        void remove();
};
#endif
