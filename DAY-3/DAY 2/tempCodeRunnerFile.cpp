#include <iostream>
using namespace std;

int main() {
    int n = 5;

    // Upper part
    for (int i = 0; i < n; i++) {

        // Print spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        // Print stars
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }

        cout << endl;
    }

    // Lower part
    for (int i = n - 2; i >= 0; i--) {

        // Print spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        // Print stars
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}