#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double val;
    while (true) {
        cout << "Entrez une valeur positive (0 pour terminer) : ";
        cin >> val;
        if (val == 0) {
            cout << "Fin du programme." << endl;
            break;
        } else if (val < 0) {
            cout << "Erreur, la valeur ne peut pas etre negative." << endl;
        } else {
            cout << "La racine de " << val << " est : " << sqrt(val) << "." << endl;
        }
    }
    return 0;
}
