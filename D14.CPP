#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    cout << "Enter a number: ";
    cin >> n;

    int temp = n;

    do {
        count++;
        temp /= 10;
    } while (temp != 0);

    cout << "Total digits = " << count;
    return 0;
}
