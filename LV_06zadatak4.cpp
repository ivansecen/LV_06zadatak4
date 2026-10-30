#include <iostream>

using namespace std;

int main() {
    int clan;
    int iznos;

    // Unos podataka (npr. 1 50 ili 0 100)
    cout << "Unesite clanstvo (0 ili 1) i iznos: ";
    cin >> clan >> iznos;

    // Ispravan logicki uvjet s operatorom || (ILI)
    if ((clan == 1 && iznos >= 50) || iznos >= 100) {
        cout << "POPUST" << endl;
    }
    else {
        cout << "BEZ POPUSTA" << endl;
    }

    return 0;
}

