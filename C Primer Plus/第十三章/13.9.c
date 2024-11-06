#include<stdio.h>
int main(){
    char arr[10]={0};
    printf("请输入文件名");
    scanf("%s",arr);
    FILE*p;
    p=fopen(arr,"r");
    int n=1;
    char str[1000];
    while(1){
        printf("请输入数字");
        scanf("%d",&n);
        if(n<=0){
            break;
        }
        fseek(p,n,SEEK_SET);
        fgets(str,1000,p);
        fputs(str,stdout);
        printf("\n");
    }
    return 0;
}