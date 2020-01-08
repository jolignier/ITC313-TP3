#include <iostream>
#include "Encrypt.h"

using namespace std;

int main() {

    Encrypt e;

    //e.read(true, "../plain.txt");
    e.read(false, "../plain.txt");

    //cout << e.get_plain() << endl;
    cout << e.get_cipher() << endl;

    return 0;
}
