#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double angle;
    cout << "Enter angle in degrees: ";
    cin >> angle;

    double radians = angle * M_PI / 180.0;
    cout << "sin(" << angle << "°) = " << sin(radians) << endl;
    cout << "cos(" << angle << "°) = " << cos(radians) << endl;
    cout << "tan(" << angle << "°) = " << tan(radians) << endl;

    return 0;
}
