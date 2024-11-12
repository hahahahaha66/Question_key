#include<stdio.h>
#define Y 2.05
#define T 1.15
#define H 1.09
#define Y1 6.5
#define Y2 14
#define Y3 0.5
int main(){
    char n;
    int y,t,h;
    y=t=h=0;
    printf("要买洋葱请输入a,要买甜菜请输入b,要买胡萝卜请输入c,要退出请输入q\n");
    while((n!='q')){
        printf("请输入要买的蔬菜\n");
        //while (getchar() != '\n');
        scanf(" %c",&n);
        int tmp;
        printf("(多次输入会叠加,如果想重置请输入0)\n");
        switch (n){
            case 'a':
            printf("请输入要买洋葱的磅数\n");
            scanf("%d",&tmp);
            if(tmp==0){
                y=0;
            }
            else{
                y+=tmp;
            }
            break;
            case 'b':
            printf("请输入要买甜菜的磅数\n");
            scanf("%d",&tmp);
            if(tmp==0){
                t=0;
            }
            else{
                t+=tmp;
            }
            break;
            case 'c':
            printf("请输入要买胡萝卜的磅数\n");
            scanf("%d",&tmp);
            if(tmp==0){
                h=0;
            }
            else{
                h+=tmp;
            }
            break;
            case 'q':
            printf("已完成购买\n");
            break;
            default:{
                printf("输入错误，请重新输入\n");
            }
            break;
        }
    }
    double m=0;
        int count=y+t+h;
        if((y*Y+t*T+h*H)>100){
            m=(y*Y+t*T+h*H)*0.95;
        }
        else{
            m=y*Y+t*T+h*H;
        }
        if(count<=0){
            ;
        }
        else if(count<=5&&count>0){
            m+=Y1;
        }
        else if(count<=20&&count>5){
            m+=Y2;
        }
        else{
            m=m+Y2+(count-20)*Y3;
        }
        printf("你需要支付:%.2lf",m);
        return 0;
}