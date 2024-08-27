#include<stdio.h>
#include<string.h>
char* create(int n){
return (char*)calloc(n,sizeof(char));
}
char fun(char *a,char b,char c){
    int n=strlen(a);
    for(int i=0;i<n;i++){
    if(a[i]==b){
        a[i]=c;
    }
    else if(a[i]==c){
        a[i]=b;
    }

}
return ;
}
int main(){
char n=10;
char *a=create(n);
char b,c;
//scanf("%d",&n);
scanf("%[^\n]%*c",a);
scanf("%c %c",&b,&c);
fun(a,b,c);
printf("%s",a);
}
