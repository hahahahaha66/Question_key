#include<stdio.h>
int main(){
    int n;
    printf("请输入杯数;");
    scanf("%d",&n);
    printf("等于%.2f品脱\n",n/2.0);
    printf("等于%.2f盎司\n",n*8.0);
    printf("等于%.2f汤勺\n",n*8.0*2);
    printf("等于%.2f茶勺\n",n*8.0*2*3);
    return 0;
}