#include <iostream>
using namespace std;

double calculer(double a, double b, char op, int &erreur) {
    erreur = 0;
    switch (op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/':
            if (b == 0) { erreur = 1; return 0; }
            return a / b;
        default:
            erreur = 2;
            return 0;
    }
}

int main() {
    double a = 3.5, b = 2.0;
    int err;
    char ops[] = {'+', '-', '*', '/'};
    for (char op : ops) {
        double res = calculer(a, b, op, err);
        if (err == 1)
            cout << a << " " << op << " " << b << " = Erreur: division par zero" << endl;
        else if (err == 2)
            cout << "Operateur invalide" << endl;
        else
            cout << a << " " << op << " " << b << " = " << res << endl;
    }
    return 0;
}
