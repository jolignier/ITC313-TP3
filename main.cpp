#include <iostream>
#include <string>
#include "Caesar.h"

using namespace std;

int main() {

    Caesar algo(3);

    string message = "LES sanglots longs des violons de l'automne blessent mon coeur d'une langueur monotone.";
    algo.setPlainMessage(message);

    algo.encode();

    cout << algo.getCipher() << endl;
    return 0;
}
