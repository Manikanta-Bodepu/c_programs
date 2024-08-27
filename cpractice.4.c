#include <stdio.h>
#include <stdlib.h>

void* creat(int n) {
    return calloc(n, sizeof(int));
}

void as(int* a, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
}

int main() {
    int a[7];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int* b = (int*)creat(n/2);
    int* c = (int*)creat(n/2);
    int j = 0;
    int x=0,y=0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            b[x++] = a[i];
        } else {
            c[y++] = a[i];
        }
        j++;
    }

    as(b, x);
    as(c, y);

    //int q = n/2;
    int r = b[x - 2] + c[1];
    printf("%d\n", r);

    free(b);
    free(c);

    return 0;
}
