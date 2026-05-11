#include <iostream>
using namespace std;

void ajouter(int valeur, int &n) {
    n += valeur;
}

int main() {
    int p = 3, n = 10;
    cout << "Avant: n = " << n << endl;
    ajouter(2 * p, n);
    cout << "Apres ajouter(2*p, n): n = " << n << endl;
    return 0;
}
