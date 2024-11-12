#include<stdio.h>
int main(){
    int a,b,c=1;
    printf("This program competurs moduli\n");
    printf("Enter an integer to serve as the second operand:");
    scanf("%d",&a);
    printf("Now enter the first operand:");
    scanf("%d",&b);
    printf("%d %% %d is %d\n",b,a,b%a);
    while(c>0){
        printf("Enter next number for first operand (<= 0 to quit):");
        scanf("%d",&c);
        if(c>0)
        printf("%d %% %d is %d\n",c,a,c%a);
    }
    printf("done\n");
    return 0;
}