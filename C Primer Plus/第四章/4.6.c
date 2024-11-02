#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    char b[100];
    printf("请输入你的名字\n");
    scanf("%s %s",a,b);
    printf("%s %s\n",a,b);
    int i=strlen(a);
    int j=strlen(b);
    printf("%*d %*d\n",i,i,j,j);
    printf("%s %s\n",a,b);
    printf("%d %*d\n",i,i,j);
    return 0;
}
