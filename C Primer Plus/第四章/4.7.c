#include<stdio.h>
int main(){
    float a=1.0/3;
    double b=1.0/3;
    printf("%.6f %.6lf\n",a,b);
    printf("%.12f %.12lf\n",a,b);
    printf("%.16f %.16lf\n",a,b);
    return 0;
}