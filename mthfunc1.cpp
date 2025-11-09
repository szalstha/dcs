#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double num, base, exponent;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Enter base and exponent (for power): ";
    cin >> base >> exponent;

    cout << "Square root of " << fabs(num) << " = " << sqrt(fabs(num)) << endl;
    cout << base << " raised to power " << exponent << " = " << pow(base, exponent) << endl;
    cout << "Absolute value of " << num << " = " << fabs(num) << endl;

    return 0;
}
