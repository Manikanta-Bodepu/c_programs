#include <stdio.h>
#include <stdlib.h>

int main() {
    int r, unit, n, j;
    scanf("%d %d %d", &r, &unit, &n);
    int ar[n];
    if (n != 0) {
        for (int i = 0; i < n; i++) {
            scanf("%d", &ar[i]);
        }
        int x = r * unit, sum = 0;
        for (j = 0; j < n; j++) {
            sum += ar[j];
            if (sum >= x) break;
        }
        if (j == n) printf("%d", 0);
        else printf("%d", j + 1);
    } else printf("%d", -1);
    return 0;
}
