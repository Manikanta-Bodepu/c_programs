#include<stdio.h>
#include<stdlib.h>
int *creat(int n){
    return (int*)calloc(n,sizeof(int));
}
void add(int *a,int n){
    for(int i=0;i<n;i++)
        scanf("%d",a+i);
}


void disp(int *a,int n){
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");

}
void rev(int *a,int x,int y){
    while(x<y){
        a[x]=a[x]+a[y]-(a[y]=a[x]);
        x++;y--;
    }
}
void cwr(int *a, int n,int k){
    k=k%n;
    if(k!=0){
        rev(a,n-k,n-1);
        rev(a,0,n-1-k);
        rev(a,0,n-1);

    }
}
void awr(int *a, int n,int k){
    k=k%n;
    if(k!=0){
        rev(a,0,k-1);
        rev(a,k,n-1);
        rev(a,0,n-1);

    }
}
void main(){
    //int a[8];
    int n=7;
    int b;
    scanf("%d",&b);
    int *a=creat(n);
    add(a,n);
    disp(a,n);
    awr(a,n,b);
    disp(a,n);
    // 90 65 32 97 122 48 57 64
}
