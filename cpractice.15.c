#include <stdio.h>
#include <stdlib.h>

void* creat(int m, int size) {
    return calloc(m, size);
}

int main() {
    int m, p;
    scanf("%d %d", &m, &p);
    int* a = creat(p, sizeof(int));

    for (int i = 0; i < m; i++) {
        scanf("%d", &a[i]);
    }

    // sort the array
    for (int i = 0; i < p - 1; i++) {
        for (int j = i + 1; j < m; j++) {
            if (a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for (int i = 0; i < p; i++) {
        if (a[i] != i) {
            printf("Smallest missing number: %d\n", i);
            free(a);
            return 0;
        }
    }
}
