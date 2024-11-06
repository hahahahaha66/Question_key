#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>
int my_rand(int n){
    static int a=0;
    if(!a){
        srand((unsigned int)time(0));
        a=1;
    }
    return rand()%n+1;
}
int main(){
    int a,b,c;
    char input[10];
    while(1){
       printf("请输入要摇的次数,若推出请输入q\n");
       scanf("%s",input);
       if(strcmp(input,"q")==0){
        break;
       }
       sscanf(input,"%d",&a);
       printf("请输入色子的面数和个数:");
       scanf("%d%d",&b,&c);
       printf("以下是不同的点数\n");
       for(int i=0;i<a;i++){
        printf("%d ",my_rand(b)+my_rand(b)+my_rand(b));
       }
       printf("\n");
    }
    return 0;
}