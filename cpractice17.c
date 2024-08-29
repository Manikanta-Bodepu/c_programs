
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include<stdbool.h>
int main() {
    char arr[10];
    scanf("%s", arr);
    char vowels[5] = {'a', 'e', 'i', 'o', 'u'};
    int n = strlen(arr);
    int c = 0,d=1;

    for (int i = 0; i < n; i++) {
        bool isVowel = false;
        for (int j = 0; j < 5; j++) {
            if (tolower(arr[i]) == vowels[j]) {
                isVowel = true;
                break;
            }
        }
        if (!isVowel) {
            c++;
        }
    }
    for (int i=1;i<=c;i++){
      d=d*i;
    }

    printf("%d", d);
    return 0;
}
