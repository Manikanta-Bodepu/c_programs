#include<stdio.h>
void  ins(int *a,int n){
//int n=strlen(a);
for(int i=0;i<n;i++){
scanf("%d",&a[i]);
}
}
void as(int *a,int n){
//int n=strlen(a);
for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        if(a[i]>a[j]){
        int t=a[i];
        a[i]=a[j];
        a[j]=t;
        }
    }
}
}
int p(int *a,int n){
//int n=strlen(a);
for(int i=0;i<n;i++){
printf("%d ",a[i]);
}
}

int main(){
int a[6];
int n= sizeof(a) / sizeof(a[0]);
ins(a,n);
as(a,n);
p(a,n);

}
