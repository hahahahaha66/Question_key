#include<stdio.h>
int haha1(double*arr,int sz){
    double count=0;
    for(int j=0;j<sz;j++){
    count+=arr[j];
    }
    return count/sz;
}
double haha2(double arr[][5],int sz){
    double count=0;
    for(int i=0;i<sz;i++){
        for(int j=0;j<5;j++){
            count+=arr[i][j];
        }
    }
    return count/(sz*5);
}
double haha3(double arr[][5],int sz){
    double max=arr[0][0];
    for(int i=0;i<sz;i++){
        for(int j=0;j<5;j++){
            if(max<arr[i][j]){
                max=arr[i][j];
            }
        }
    }
    return max;
}
int main(){
    double arr[3][5]={0};
    for(int i=0;i<3;i++){
        for(int j=0;j<5;j++){
            scanf("%lf",&arr[i][j]);
        }
    }
    double a1=haha1(arr[0],5);
    double a2=haha1(arr[1],5);
    double a3=haha1(arr[2],5);
    double b=haha2(arr,5);
    double c=haha3(arr,5);
    printf("%lf\n%lf\n%lf\n%lf\n%lf\n",a1,a2,a3,b,c);
    return 0;
}