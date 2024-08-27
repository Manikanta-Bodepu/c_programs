#include <stdio.h>
int ispasswordvalid(char *string) {
    int f = 0, f1 = 0, f2 = 1;
    int n = 0;
    while (string[n]) {
        n++;
    }
    if (n > 3 && !(string[0] >= 48 && string[0] <= 57)) {
        for (int i = 0; i < n; i++) {
            if (string[i] >= 48 && string[i] <= 57)
                f = 1;
            else if (string[i] >= 65 && string[i] <= 90)
                f1 = 1;
            else if (string[i] == ' ' || string[i] == '/')
                f2 = 0;
        }
    }
    if (f && f1 && f2) {
        return 1;
    } else
        return 0;
}

int main()
{
    char string[100];
    int n;
    scanf("%s[^'\n']s",&string);
    printf("%d\n",ispasswordvalid(string));
    //printf("%s\n",string);
    //while(string[++n]);
    //ispasswordvalid(string);
    /*printf("%d",n);
    return 0;*/
}
