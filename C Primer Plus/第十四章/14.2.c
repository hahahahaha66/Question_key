#include<stdio.h>
typedef struct date
{
    int year;
    int month;
    int day;
}haha;
int main(){
    haha a;
    haha *x=&a;
    int*p1=&x->year;
    int*p2=&x->month;
    int*p3=&x->day;
    scanf("%d%d%d",p1,p2,p3);
    int arr[12]={31,28,31,30,31,30,31,31,31,30,31,30};
    if(((*p1)%100!=0&&(*p1)%4==0)||((*p1)%400==0)){
        arr[1]+=1;
    }
    int count=0;
    for(int i=0;i<(*p2)-1;i++){
        count+=arr[i];
    }
    printf("%d",count+(*p3));
    return 0;
}