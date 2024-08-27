#include<stdio.h>
#include<stdlib.h>
void rev(int *a,int x,int y){
    while(x<y){
        a[x]=a[x]+a[y]-(a[y]=a[x]);
        x++;y--;
    }
}

void main(){
   int a[7];
   int  n;
   scanf("%d",&n);
   for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
   }
   rev(a,0,n-1);
   int b=0,c=0;
   for(int i=0;i<n;i++){
    if(i%2==0)
        b+=a[i];
    else
        c+=a[i];
   }
   printf("%d",b);
}
