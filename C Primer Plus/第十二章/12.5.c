#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int my_rand(int n){
    static int a=0;
    if(!a){
        srand((unsigned int)time(0));
        a=1;
    }
    return rand()%n+1;
}
void my_quicksort(int *arr,int len){
    if(len<2){
        return ;
    }
    int left=0;
    int right=len-1;
    int temp=arr[len/2];
    while(left<=right){
        while(arr[left]<temp) left++;
        while(arr[right]>temp) right--;
        if(left<=right){
            int pivot=arr[left];
        arr[left]=arr[right];
        arr[right]=pivot;
        left++;
        right--;
        }
    }
    my_quicksort(arr,right+1);
    my_quicksort(arr+left,len-left);
}
int main(){
    int arr[100]={0};
    for(int i=0;i<100;i++){
        arr[i]=my_rand(10);
        printf("%d ",arr[i]);
    }
    my_quicksort(arr,100);
    for(int i=0;i<100;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}