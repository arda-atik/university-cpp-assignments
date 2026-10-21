#include <iostream>

using namespace std;

const int N = 32;

unsigned int stringLength(const char s[]) {
    unsigned int l = 0;

    while (s[l] != '\0') {
        l++;
    }

    return l;
}

char toUpper(char c) {
    int delta = 'a' - 'A';  //difference in positions in ASCII table
    if ('a' <= c && c <= 'z') {
        return c - delta;
    }
    return c;
}

void toUpper(char s[]) {
    unsigned int i = 0;
    while (s[i]){
        s[i] = toUpper(s[i]);
        i++;
    }
}

int str2int(char s[]) {
    int res = 0;
    int digit;
    for (auto i = 0; s[i] != '\0'; i++){
        if ('0' <= s[i] && s[i] <= '9'){
            digit = s[i] - '0';  //distance from character '0' in ASCII table
            res = res * 10 + digit;
        }
        else{
            return -1; //invalid input string format
        }
    }
    return res;
}

int main() {
    char s1[N] = {'h', 'e', 'l', 'l', 'o', '\0'}; //zero terminated string
    char s2[N] = "Ahoj"; //no need to append trailing zero
    char name[N];
    char num[10] = "2026"; // Farkli bir test degeri

    cout << s1 << endl;
    cout << s2 << endl;
    cout << "What is your name: ";
    cin.getline(name, N);
    cout << "Length of your name: " << stringLength(name) << "\n";
    cout << "Pleased to meet you, " << name << endl;

    toUpper(name);
    cout << "Uppercase name: " << name << endl;

    cout << "Converted string to int: " << str2int(num) << endl;

    return 0;
}