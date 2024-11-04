#include<stdio.h>
void to_base_n(int a,int n){
    int b;
    b=a%n;
    a/=n;
    if(a!=0){
      to_base_n(a,n);
    }
    printf("%d",b);
}
int main(){
    to_base_n(129,8);
    return 0;
}