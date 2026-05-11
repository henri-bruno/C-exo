#include <iostream>
using namespace std;

void somme_tableau(float tab[], int taille, float *resultat) {
    *resultat = 0.0f;
    for (int i = 0; i < taille; i++) {
        *resultat += tab[i];
    }
}

int main() {
    float t[] = {1.5, 2.5, 3.0, -1.0, 4.0};
    float s;
    somme_tableau(t, 5, &s);
    cout << "Somme : " << s << endl;
    return 0;
}
