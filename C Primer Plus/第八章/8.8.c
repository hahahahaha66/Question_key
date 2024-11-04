#include<stdio.h>
int main(){
    char a;
    int x=0,y=0;
    while(a!='q'){
        printf("请输入要进行运算的符号\n");
        printf("a. 加法  s. 减法\n");
        printf("m. 乘法  d. 除法\n");
        printf("q. 退出\n");
        scanf(" %c",&a);
        switch (a){
            case 'a':
            printf("请输入第一个数:");
            scanf("%d",&x);
            printf("请输入第二个数:");
            scanf("%d",&y);
            printf("%d + %d = %d\n",x,y,x+y);
            break;
            case 's':
            printf("请输入第一个数:");
            scanf("%d",&x);
            printf("请输入第二个数:");
            scanf("%d",&y);
            printf("%d - %d = %d\n",x,y,x-y);
            break;
            case 'm':
            printf("请输入第一个数:");
            scanf("%d",&x);
            printf("请输入第二个数:");
            scanf("%d",&y);
            printf("%d * %d = %d\n",x,y,x*y);
            break;
            case 'd':
            printf("请输入第一个数:");
            scanf("%d",&x);
            printf("请输入第二个数:");
            scanf("%d",&y);
            while(1){
                if(y==0){
                   printf("除数不能为零，请重新输入\n");
                   scanf(" %d",&y);
                }
                else{
                    break;
                }
                
            }
            printf("%d / %d = %d\n",x,y,x/y);
            break;
            case 'q':
            printf("已退出\n");
            break;
            default :
            printf("输入错误,请重新输入\n");
        }
    }
    return 0;
}