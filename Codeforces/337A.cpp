#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int puzzles[m];
    for (int i = 0; i < m; ++i) {
        scanf("%d", &puzzles[i]);
    }

    qsort(puzzles, m, sizeof(int), compare);

    int minDifference = puzzles[n - 1] - puzzles[0];

    for (int i = 1; i <= m - n; ++i) {
        int currentDifference = puzzles[i + n - 1] - puzzles[i];
        if (currentDifference < minDifference) {
            minDifference = currentDifference;
        }
    }

    printf("%d\n", minDifference);

    return 0;
}
