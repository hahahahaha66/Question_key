#include<stdio.h>
#define A 17850
#define B 23900
#define C 29750
#define D 14875
int main(){
    int n,m;
    while(1){
        printf("如果为单身,请输入1\n");
        printf("如果为户主,请输入2\n");
        printf("如果为已婚,请输入3\n");
        printf("如果为离异,请输入4\n");
        printf("如果退出,请输入0\n");
        scanf("%d",&n);
        if(n==0){
            break;
        }
        printf("请输入你的金额");
        scanf("%d",&m);
        printf("您的税金:");
        switch (n){
            case 1:
            if(m>A){
                m-=A;
                printf("%d\n",(int)(A*0.15)+(int)(m*0.28));
            }
            else{
                printf("%d",(int)(m*0.15));
            }
            break;
            case 2:
            if(m>B){
                m-=B;
                printf("%d\n",(int)(B*0.15)+(int)(m*0.28));
            }
            else{
                printf("%d",(int)(m*0.15));
            }
            break;
            case 3:
            if(m>C){
                m-=C;
                printf("%d\n",(int)(C*0.15)+(int)(m*0.28));
            }
            else{
                printf("%d",(int)(m*0.15));
            }
            break;
            case 4:
            if(m>D){
                m-=D;
                printf("%d\n",(int)(D*0.15)+(int)(m*0.28));
            }
            else{
                printf("%d",(int)(m*0.15));
            }
            break;
            default:
            ;
        }
    }
    return 0;
}