#include <stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#define A 336
#include <stdio.h>

int main() {
    char buffer[100];
    printf("请输入一个字符串: ");
    scanf("%*s"); // 读取字符串，但不存储
    printf("请输入一个字符串并存储: ");
    scanf("%s", buffer); // 读取字符串并存储
    printf("存储的字符串是: %s\n", buffer);
    return 0;
}
