#include<stdio.h>
int main(){
    int a;
    printf("输入身高（英寸）:");
    scanf("%d",&a);
    printf("您的身高（厘米）:%.2f",((double)a*2.54));
    return 0;
}