#include <iostream>

using namespace std;

const int N = 3;

void readVectorFromStdIn(char name, double v[]) {
    for (auto i = 0; i < N; i++) {
        cout << "Enter " << name << "[" << (i + 1) << "]: ";
        cin >> v[i];
    }
}

void printVector(double v[]) {
    cout << "(";
    for (auto i = 0; i < N; i++) {
        cout << v[i];
        if (i < N - 1) {
            cout << ", ";
        }
    }
    cout << ")";
}

// calculate a*b
double dotProduct(double a[], double b[]) {
    double res = 0;
    for (auto i = 0; i < N; i++) {
        res = res + a[i] * b[i];
    }
    return res;
}

int main() {
    double x[N];
    double y[N];
    double product;

    cout << "Standard dot product calculator" << endl;
    readVectorFromStdIn('x', x);
    readVectorFromStdIn('y', y);
    product = dotProduct(x, y);

    printVector(x);
    cout << " * ";
    printVector(y);
    cout << " = " << product << endl;

    return 0;
}