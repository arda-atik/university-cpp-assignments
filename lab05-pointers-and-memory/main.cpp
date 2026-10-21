#include <iostream>

using namespace std;

// passing parameters by value
void mySwap(int a, int b) {
    int c = a;
    a = b;
    b = c;
}

// passing parameters by pointer
void pointerSwap(int *a, int *b) {
    int c = *a;
    *a = *b;
    *b = c;
}

int main()
{
    int z;
    int *ptr = nullptr;
    ptr = &z;
    *ptr = 42;
    cout << "z = " << z << ", *ptr = " << *ptr << endl;

    int x = 1;
    int y = 2;

    cout << "\nBefore swap: x = " << x << ", y = " << y << endl;
    mySwap(x, y);
    cout << "After mySwap (by value): x = " << x << ", y = " << y << endl;

    pointerSwap(&x, &y);
    cout << "After pointerSwap (by pointer): x = " << x << ", y = " << y << endl;

    return 0;
}