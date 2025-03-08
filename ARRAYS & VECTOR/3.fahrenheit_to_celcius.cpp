#include<iostream>
using namespace std;

int main() {
    float c, f;  // Variables ko float declare karna better hoga
    cout << "Enter temperature in Fahrenheit: ";
    cin >> f;  // Correct input statement

    c = (5.0 / 9.0) * (f - 32);  // Correct formula with floating-point division
    cout << "Temperature in Celsius: " << c << endl;  // Correct output statement

    return 0;
}
