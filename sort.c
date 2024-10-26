#include<stdio.h>
struct haha{
    int arr1[100];
    int arr2[100];
    int len1;
    int len2;
}result;
void quick_sort(int*arr,int len){
    if(len<2)return;
    int tmp = arr[len / 2]; 
    int left=0;
    int right=len-1;
    while (left <= right) {
        while (arr[left] < tmp) left++;
        while (arr[right] > tmp) right--;
        if (left <= right) {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }
    }
    quick_sort(arr,left);
    quick_sort(arr+left+1,len-left-1);

}
int clean(int*arr,int len){
    if(len==0)return 0;
    int n=0;
    for(int m=1;m<len;m++){
        if(arr[n]!=arr[m]){
            n++;
            arr[n]=arr[m];
        }
    }
    return n+1;
}
void your_sort(int* arr1,int len1,int* arr2,int len2,struct haha* result){
    quick_sort(arr1,len1);
    quick_sort(arr2,len2);
    len1=clean(arr1,len1);
    len2=clean(arr2,len2);
    for(int i=0;i<len1;i++){
        result->arr1[i]=arr1[i];
    }
    result->len1=len1;
    for(int i=0;i<len2;i++){
        result->arr2[i]=arr2[i];
    }
    result->len2=len2;
}
int main() {
    int arr1[] = {2, 3, 1, 3, 2, 4, 6, 7, 9, 2, 10};
    int arr2[] = {2, 1, 4, 3, 9, 6, 8};
    int len1 = sizeof(arr1) / sizeof(arr1[0]);
    int len2 = sizeof(arr2) / sizeof(arr2[0]);
    your_sort(arr1, len1, arr2, len2, &result);
    printf("Result arr1: ");
    for (int i = 0; i < result.len1; i++) {
        printf("%d ", result.arr1[i]);
    }
    printf("\n");

    printf("Result arr2: ");
    for (int i = 0; i < result.len2; i++) {
        printf("%d ", result.arr2[i]);
    }
    printf("\n");
    return 0;
}
