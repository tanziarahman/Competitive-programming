#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findMoves(int n) {
    int moves = 0;
    while (n > 1) {
        if (n % 6 == 0) {
            n /= 6;
            moves++;
        } else if (n % 3 == 0) {
            n *= 2;
            moves++;
        } else {
            return -1;
        }
    }

    return moves;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        cout << findMoves(n) << endl;
    }

    return 0;
}
