#include <iostream>
using namespace std;

int compter_occurrences(const char *chaine, char c) {
    int count = 0;
    for (int i = 0; chaine[i] != '\0'; i++) {
        if (chaine[i] == c) count++;
    }
    return count;
}

int main() {
    const char chaine[] = "programmation reseau";
    char c = 'a';
    cout << "Occurrences de '" << c << "' dans \"" << chaine << "\" : "
         << compter_occurrences(chaine, c) << endl;
    return 0;
}
