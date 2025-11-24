#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    // Dodane sprawdzanie
    if (a <= 0 || b <= 0) {
        cout << "Liczby musza byc dodatnie!" << endl;
        return 0;
    }

    cout << a << " " << b << endl;
    return 0;
}