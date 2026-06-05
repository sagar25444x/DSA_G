#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for (int i = 0; i < n; i++) {

        // Decide starting number
        int start;
        if (i % 2 == 0) {
            start = 1;
        }
        else {
            start = 0;
        }

        // Print pattern
        for (int j = 0; j <= i; j++) {
            cout << start << " ";

            // Toggle between 0 and 1
            if (start == 1) {
                start = 0;
            }
            else {
                start = 1;
            }
        }

        cout << endl;
    }

    return 0;
}