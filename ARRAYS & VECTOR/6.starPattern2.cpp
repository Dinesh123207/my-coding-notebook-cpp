#include <iostream>
using namespace std;

int main() {
    // int n;
    // cout << "Enter the number of rows: ";
    

    // // ⭐ Upper half
    // for (int i = 0; i < 5; i++) {
    //     for (int j = 0; j < 5 - i - 1; j++) { // Print spaces (Left side)
    //         cout << " ";
    //     }
    //     for (int j = 0; j < 2 * i + 1; j++) { // Print stars
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    for(int i=0;i<6;i++){
        for(int j=0;j<6-i-1;j++){
            cout<<" ";

        }
        for(int j=0;j<2*i-1;j++){
            cout<<"*";

        }
        cout<<endl;
    }
}