#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void fillArray(int *arr, int size) {
    for (auto i = 0; i < size; i++) {
        arr[i] = rand() % 100 + 1;
    }
}

int findMin(int *arr, int size) {
    int min = arr[0];   //INT_MAX
    for (auto i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

void printArray(int *arr, int size) {
    for (auto i = 0; i < size; i++) {
        cout << "| " << arr[i] << " | ";
    }
    cout << endl;
}

int main()
{
    srand(time(nullptr)); // Seed once at program start

    int N;
    cout << "Enter size of array: ";
    cin >> N;

    if (N <= 0) {
        cerr << "Invalid array size." << endl;
        return 1;
    }

    int *array = new(nothrow) int[N];
    if (!array) {   //(array == nullptr)
        cerr << "Failed to allocate memory." << endl;
        return -1;
    }

    fillArray(array, N);
    printArray(array, N);
    cout << "Minimum: " << findMin(array, N) << endl;

    delete [] array;
    array = nullptr;

    return 0;
}
