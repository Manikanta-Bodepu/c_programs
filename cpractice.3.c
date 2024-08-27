#include <stdio.h>

int main()
{
    int n,m,t,a=0,b=0;
    scanf("%d %d",&n,&m);
    if(n>m){
        t=m;
        m=n;
        n=t;
    }
    for(int i=0;i<=m;i++){
        if(i%n==0)
            a=a+i;
        else
            b=b+i;

    }

printf("%d",(b-a));
    return 0;
}
