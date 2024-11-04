#include<stdio.h>
int main(){
    printf("请在心中想一个0到100的数\n");
    printf("接下来程序会输出一个数,如果比你想的数大，则输入>,小则输入<,若正确输入t\n");
    char a;
    int m=0,n=100;
    int count=0;
    while(a!='t'){
        printf("我猜是");
        printf("%d\n",(m+n)/2);
        printf("请输入:");
        scanf(" %c",&a);
        count++;
        switch (a){
            case '<':{
                m=(m+n)/2;
                printf("%d\n",(m+n)/2);
                break;
            }
            case '>':{
                n=(m+n)/2;
                printf("%d\n",(m+n)/2);
                break;
            }
            case 't':{
                printf("欧耶，只猜了%d回\n",count);
                break;
            }
        }
    }
    return 0;
}