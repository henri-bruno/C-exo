#include <iostream>
using namespace std;

void compter() {
    static int count = 0;
    count++;
    cout << "Appel de fonction numero " << count << endl;
}

int main() {
    compter();
    compter();
    compter();
    compter();
    return 0;
}
