#include <iostream>
#include "tui.h"
#include "files.h"

int main()
{
    char c;
    do {
        c = menu();
        /*
        if (c == 'N') {
            newFile();
        } else if (c == 'O') {
            openFile();
        } else if (c == 'C'){
            closeFile();
        } else if (c == 'Q') {
            quit();
        } else {
            error();
        }*/
        switch (c) {
            case 'N':
                //case 'n':
                newFile();
                break;
            case 'O':
                openFile();
                break;
            case 'C':
                closeFile();
                break;
            case 'Q':
                quit();
                break;
            default:
                error();
        }
    } while (c != 'Q');
    return 0;
}