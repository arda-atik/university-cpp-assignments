#include <iostream>
#include <cstdlib>

using namespace std;

void sieveOfEratosthenes(int *arr, int n) {
    arr[0] = 0;
    if (n > 1) {
        arr[1] = 0;
    }

    for (int i = 2; i < n; i++) {
        arr[i] = 1;
    }

    for (int i = 2; i * i < n; i++) {
        if (arr[i] == 1) {
            for (int j = i * i; j < n; j += i) {
                arr[j] = 0;
            }
        }
    }
}

void printPrimes(int *arr, int n) {
    int count = 0;

    for (int i = 2; i < n; i++) {
        if (arr[i] == 1) {
            cout << i << " ";
            count++;
        }
    }
    cout << endl;
    cout << count << endl;
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        cout << "Error: No number given!" << endl;
        return 1;
    }

    int n = atoi(argv[1]);

    if (n <= 0) {
        cout << "Error: Invalid number!" << endl;
        return 1;
    }

    int *arr = new int[n];

    sieveOfEratosthenes(arr, n);
    printPrimes(arr, n);

    delete[] arr;

    return 0;
}
