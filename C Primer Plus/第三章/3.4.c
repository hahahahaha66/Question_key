#include<stdio.h>
int main(){
    double a;
    printf("enter a floating-point value :");
    scanf("%lf",&a);
    printf("fixed-point notation :%lf\n",a);
    printf("exponentialmnonation :%e\n",a);
    printf("p notation :%a\n",a);
    return 0;
}