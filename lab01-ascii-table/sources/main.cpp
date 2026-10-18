#include <iostream>
#include "../headers/characters.h"

using namespace std;

int main() {
    cout << "Size of char: " << sizeof(char) << " byte(s)" << endl;
    // cout << sizeof(wchar_t) << endl; // wide characters

    int i;
    char c = 'x';
    char tab = '\t';
    char newLine = '\n';

    cout << tab << c << newLine << "new line" << endl;
    cout << "C:\\temp\\test.txt" << endl;

    // Karakterden ASCII koduna donusum
    cout << "\nASCII code of character. Enter some char: ";
    cin >> c;
    cout << "Character '" << c << "' has ASCII code " << getAsciiCode(c) << endl;

    // Koddan karaktere donusum
    cout << "\nASCII table lookup. Please enter a code (0-255): ";
    if (cin >> i) {
        if (isValidAsciiCode(i)) {
            cout << "ASCII code " << i << " corresponds to character: '"
                 << getCharacterFromAscii(i) << "'" << endl;
        } else {
            cerr << "Error: You entered invalid ASCII code (must be 0-255)." << endl;
        }
    } else {
        cerr << "Error: Invalid number format." << endl;
    }

    // ASCII tablosunu ekrana bas
    printAsciiTable();

    return 0;
}