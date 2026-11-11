#include <iostream>
#include "stack.h"

using namespace std;

int main()
{
    Stack s(10);
    int i = 0;

    while (!s.isFull()) {
        s.push(i++);
    }

    while (!s.isEmpty()) {
        cout << s.top() << " ";
        s.pop();
    }

    cout << endl;
    return 0;
}
