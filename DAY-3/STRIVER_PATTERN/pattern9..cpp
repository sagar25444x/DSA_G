// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n=5;
    for(int i=0;i<n;i++){
        // for spaces
        for(int j=0;j<n-i-1;j++){
            cout<<"  ";
        }
        // foor star
        for(int j=0;j<2*i+1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=n-1;i>=0;i--){
        // for spaces
        for(int j=0;j<n-i-1;j++){
            cout<<"  ";
        }
        // foor star
        for(int j=0;j<2*i+1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}