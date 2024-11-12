#include<stdio.h>
#include<string.h>
int main(){
    char a[256]={0};
    printf("请输入一个字符串:");
    scanf("%255[^\n]",a);
    printf("反转后的字符串:");
    for(int i=strlen(a)-1;i>=0;i--){
        printf("%c",a[i]);
    }
    return 0;
}
