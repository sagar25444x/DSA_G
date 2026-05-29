#include <iostream>
using namespace std;

int main() 
{
    int n = 5;

    // Upper part
    for (int i = 1; i <=n; i++) {
        // Print stars
        for (int j = 1; j < i+1; j++) {
            cout << j;
        }
        cout << endl;
    }
}    