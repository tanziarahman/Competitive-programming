#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        long long n;
        scanf("%lld", &n);


        if (n % 2 == 0) {
            while (n % 2 == 0) {
                n /= 2;
            }
        }

        if (n > 1) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
