#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100
int main(){
    printf("请输入句子中单词的数量:");
    int n;
    char arr[MAX]={0};
    scanf("%d",&n);
    char**str=malloc(n*(sizeof(char*)));
    printf("请输入句子\n");
    for(int i=0;i<n;i++){
        scanf("%s",arr);
        int m=strlen(arr);
        str[i]=malloc((m+1)*sizeof(char));
        strcpy(str[i],arr);
    }
    printf("这是你的单词\n");
    for(int i=0;i<n;i++){
        printf("%s\n",str[i]);
    }
    for(int i=0;i<n;i++){
        free(str[i]);
    }
    free(str);
    return 0;
}