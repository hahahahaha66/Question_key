#include<stdio.h>
#define A 3.785
#define B 1.609
int main(){
    float distance,petrol;
    printf("请输入旅行的里程和消耗的汽油量\n");
    scanf("%f%f",&distance,&petrol);
    printf("%.1f\n",distance/petrol);
    printf("%.1f\n",(A*distance)/(B*petrol));
    return 0;
}