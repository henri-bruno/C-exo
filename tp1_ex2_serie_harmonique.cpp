#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Entrez n : ";
    cin >> n;
    double somme = 0.0;
    for (int k = 1; k <= n; k++) {
        somme += 1.0 / k;
    }
    cout << "Somme des " << n << " premiers termes : " << somme << endl;
    return 0;
}
