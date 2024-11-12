#include<stdio.h>
#include<math.h>
void haha(double*arr1,double*arr2,int n,double(*p)(double a)){
    for(int i=0;i<n;i++){
        arr2[i]=p(arr1[i]);
    }
}
int main(){
    double arr1[]={1.23,456,456.65};
    double arr2[3]={0};
    int n=3;
    haha(arr1,arr2,n,sqrt);
    for(int i=0;i<n;i++){
        printf("%lf ",arr2[i]);
    }
    return 0;
}