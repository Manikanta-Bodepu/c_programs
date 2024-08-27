#include<stdio.h>
#include<stdlib.h>
void rev(unsigned int *a,int x,int y){
    while(x<y){
        a[x]=a[x]+a[y]-(a[y]=a[x]);
        x++;y--;
    }
}

void main(){
   unsigned int a[7];
   int  n,x=0,y=0;
   scanf("%d",&n);
   for(int i=0;i<n;i++){
        scanf("%u",&a[i]);
   }
   for(int i=0;i<n/2;i++){
    if((a[i]+x)==((a[n-1-i]+y))){

        printf("%d",(i+1));
        break;
    }
    else{
        x+=a[i];
        y+=a[n-1-i];
    }
   }
   return -1;
}
