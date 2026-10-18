#include "../headers/characters.h"
#include <iostream>

using namespace std;

void printAsciiTable() {
    cout << "\n--- ASCII Table (Printable Characters: 32 - 126) ---" << endl;
    cout << "Dec\tChar" << endl;
    cout << "---\t----" << endl;

    for (int i = 32; i <= 126; ++i) {
        cout << i << "\t" << (char)i << endl;
    }
    cout << "-----------------------------------------------------\n" << endl;
}

bool isValidAsciiCode(int code) {
    return (code >= 0 && code <= 255);
}

int getAsciiCode(char c) {
    return static_cast<unsigned char>(c);
}

char getCharacterFromAscii(int code) {
    return static_cast<char>(code);
}