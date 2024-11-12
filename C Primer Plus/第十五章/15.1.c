#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
    char *a="01001001";
    int count=0;
    int n=strlen(a);
    for(int i=0;i<n;i++){
        count+=(a[n-i-1]-'0')*pow(2,i);
    }
    printf("%d",count);
    return 0;
}