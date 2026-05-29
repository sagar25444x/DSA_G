#include <iostream>
using namespace std;

int main() 
{
    int n = 5;

    // Upper part
    for (int i = 0; i < n; i++) {
        // Print stars
        for (int j = 0; j < n; j++) {
            cout << "*";
        }
        cout << endl;
    }
}    