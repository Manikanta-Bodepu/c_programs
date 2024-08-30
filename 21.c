#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void disp(int *a,int n){
for(int i=0;i<n;i++){
printf("%d",a[i]);
}
printf("\n");
}
int out(int *a,int n){
for(int i=0;i<n/2;i++){
    printf("%d",a[i]);
}
for(int i=n-1;i>=n/2;i--){
    printf("%d",a[i]);
}
}
void asc(int *a,int n){
    int t;
for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        if(a[i]>a[j]){
        t=a[i];
        a[i]=a[j];
        a[j]=t;
    }
}
}
}
void dsc(int *a,int n){
    int t;
for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        if(a[i]<a[j]){
        t=a[i];
        a[i]=a[j];
        a[j]=t;
    }
}
}
}
int add(int *a,int n){
for(int i=0;i<n;i++){
scanf("%d",&a[i]);
}
}
int main() {
int a[10];
int n;
scanf("%d",&n);
add(a,n);
out(a,n);
    return 0;
}
