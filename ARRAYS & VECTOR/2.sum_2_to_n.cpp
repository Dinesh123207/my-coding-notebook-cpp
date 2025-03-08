#include <iostream>
using namespace std;

int main() {
    int n, sum;  // `sum` ko declare kiya
    cout << "Enter a number: ";
    cin >> n;  // User input ke liye

    sum = (n * (n + 1)) / 2;  // Correct sum formula
    cout << "Sum from 1 to " << n << " is: " << sum << endl;

    return 0;
}
