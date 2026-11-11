#include "stack.h"

Stack::Stack(int size)
    : capacity(size),
      array(new Data[size]),
      sp(-1)
{
}

Stack::~Stack() {
    delete [] array;
}

void Stack::pop() {
    sp--;
}

Data Stack::top() const {
    return array[sp];
}

void Stack::push(Data d) {
    sp++;
    array[sp] = d;
}
