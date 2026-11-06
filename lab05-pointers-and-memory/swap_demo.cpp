#include <iostream>

using namespace std;

void mySwap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void swapByPointer(int *a, int *b) {
    int c = *a;
    *a = *b;
    *b = c;
}

void swapByRef(int &a, int &b) {
    int c = a;
    a = b;
    b = c;
}

int main() {
    int x = 1;
    int y = 2;
    int z;
    int &rz = z;
    int *ptr = nullptr;
    ptr = &z;
    *ptr = 42;

    cout << "z = " << z << " " << *ptr << " " << rz << endl;

    cout << "Before swap: x= " << x << ", y = " << y << endl;
    mySwap(x, y);
    cout << "After mySwap (value): x= " << x << ", y = " << y << endl;

    swapByPointer(&x, &y);
    cout << "After swapByPointer: x= " << x << ", y = " << y << endl;

    swapByRef(x, y);
    cout << "After swapByRef: x= " << x << ", y = " << y << endl;

    return 0;
}
