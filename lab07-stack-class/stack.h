#ifndef STACK_H
#define STACK_H

typedef int Data;

class Stack
{
    int capacity;
    Data *array;
    int sp;

public:
    Stack(int size);
    ~Stack();

    void push(Data d);
    void pop();
    Data top() const;

    bool isEmpty() const {
        return sp == -1;
    }

    bool isFull() const {
        return sp == capacity - 1;
    }
};

#endif // STACK_H
