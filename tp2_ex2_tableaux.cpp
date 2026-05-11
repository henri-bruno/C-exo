#include <iostream>
using namespace std;

int main() {
    float t1[10] = {3.5, -1.2, 7.0, 2.1, -5.0, 8.3, 0.5, -3.7, 4.4, 1.1};
    float t2[10] = {-2.0, 4.5, -1.0, 3.3, 7.7, -0.5, 2.2, -4.1, 5.0, -3.3};

    float min = t1[0], max = t1[0];
    for (int i = 1; i < 10; i++) {
        if (t1[i] < min) min = t1[i];
        if (t1[i] > max) max = t1[i];
    }
    cout << "Min de t1 : " << min << endl;
    cout << "Max de t1 : " << max << endl;

    int idx = 0;
    for (int i = 0; i < 10; i++) {
        if (t2[i] > 0) {
            t1[idx++] = t2[i];
        }
    }
    while (idx < 10) t1[idx++] = 0.0f;

    cout << "t1 apres recopie des positifs de t2 : ";
    for (int i = 0; i < 10; i++) cout << t1[i] << " ";
    cout << endl;
    return 0;
}
