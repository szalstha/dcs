#include <iostream>
using namespace std;

long long fact(int n) {
    long long f = 1;
    for (int i = 1; i <= n; i++) f *= i;
    return f;
}

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int s = 0; s < n - i; s++) {
            cout << " ";
        }
        for (int j = 0; j <= i; j++) {
            cout << fact(i) / (fact(j) * fact(i - j)) << " ";
        }
        cout << endl;
    }

    return 0;
}
