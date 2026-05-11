#include <iostream>
#include <string>
using namespace std;

int main() {
    int h;
    cout << "Hauteur de l'arbre : ";
    cin >> h;

    int total = 2 * h - 1;
    for (int i = 1; i <= h; i++) {
        int nb_etoiles = 2 * i - 1;
        int nb_egaux = total - nb_etoiles;
        int gauche = nb_egaux / 2;
        int droite = nb_egaux - gauche;
        cout << string(gauche, '=') << string(nb_etoiles, '*') << string(droite, '=') << endl;
    }
    return 0;
}
