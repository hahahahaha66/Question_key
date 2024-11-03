#include<stdio.h>
int main(){
    int arr1[10]={0};
    int arr2[10]={0};
    int count=0;
    for(int i=0;i<10;i++){
        scanf("%d",&arr1[i]);
    }
    for(int i=0;i<10;i++){
        count+=arr1[i];
        arr2[i]=count;
    }
    for(int j=0;j<10;j++){
        printf("%d",arr1[j]);
    }
    printf("\n");
    for(int j=0;j<10;j++){
        printf("%d ",arr2[j]);
    }
    return 0;
}