#include<stdio.h>
void Fibonacci(int n){
    int a=1,b=1;
    for(int i=0;i<n;i++){
        printf("%d ",a);
        int tmp=a;
        a=b;
        b=tmp+b;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    Fibonacci(n);
    return 0;
}