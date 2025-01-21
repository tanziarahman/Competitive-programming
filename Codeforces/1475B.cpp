#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool canRepresent(int n) {
    if (n < 2020) {
        return false;
    }
    int remainder = n % 2020;
    int quotient = n / 2020;

    return remainder <= quotient;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        if (canRepresent(n)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
