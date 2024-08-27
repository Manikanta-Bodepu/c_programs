#include <stdio.h>

int main()
{
    char a[0];
    int n=0,b=1;
    char A,B,C;
    scanf("%[^'\n']s",a);
    //printf("%s\n",a);
    while(a[++n]);
    a[n];
    for(int i=1;i<n;i+2){
        if(a[i]==A)
            b*a[i+1];
        else if(a[i]==B)
            b|a[i+1];
        else
            b^a[i+1];
    }
    printf("%d",b);
}
//1C0C1C1A0B1 1 C 0 C 1 C 1 A 0 B 1
