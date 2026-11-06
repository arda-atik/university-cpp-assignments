#include <iostream>

using namespace std;

void swap(int a, int b) {
    int c = a;
    a = b;
    b = c;
}

void swap(int *pa, int *pb) {
    int c = *pa;
    *pa = *pb;
    *pb = c;
}

const int N = 10;

void initArray(int *arr) {
    for (auto i = 0; i < N; i++) {
        arr[i] = i + 1;
    }
}

void printArray(int *arr) {
    for (auto i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void test(int *arr) {
    for (int *ptr = arr; ptr < &arr[N]; ptr++) {
        *ptr = 0;
    }
}

int main() {
    int array[N];
    initArray(array);
    printArray(array);

    int x = 1;
    int y = 2;
    int i = 41;
    int *ptr = nullptr;

    if (ptr) {
        cout << "Non nullpointer" << endl;
    } else {
        cout << "Nullpointer" << endl;
    }

    cout << "Before swap: ";
    cout << "x =" << x << ", y = " << y << endl;
    swap(&x, &y);
    cout << "After swap: ";
    cout << "x =" << x << ", y = " << y << endl;

    ptr = &i;
    cout << "Address stored in ptr: " << ptr << endl;
    cout << "Value pointed to by ptr (*ptr): " << *ptr << endl;

    (*ptr)++;
    cout << "Value of i after (*ptr)++: " << i << endl;

    test(array);
    cout << "Array after test(): ";
    printArray(array);

    return 0;
}
