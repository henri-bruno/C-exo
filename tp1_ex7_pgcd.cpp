#include <iostream>
using namespace std;

int pgcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    int a, b;
    cout << "Entrez deux entiers : ";
    cin >> a >> b;
    cout << "PGCD(" << a << ", " << b << ") = " << pgcd(a, b) << endl;
    return 0;
}
