#include<stdio.h>
#define A 100
#define a 0.05
#define B 100
#define b 0.1
int main(){
    double count1=A*a,count2=B*b;
    while(count1<count2){
        count1+=(A+count1)*a;
        count2+=B*b;
    }
    printf("%lf %lf",count1,count2);
    return 0;
}