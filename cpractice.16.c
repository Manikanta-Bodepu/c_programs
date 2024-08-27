#include<stdio.h>
#include<stdlib.h>


void main(){
   int a[7];
   int  n;
   scanf("%d",&n);
   for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            printf("Even");
        }
        else
            printf("Odd");

   }
}
