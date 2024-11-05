#include<stdio.h>
#define N 5
void haha1(int arr[][N],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<N;j++){
            printf("%-d ",arr[i][j]);
        }
        printf("\n");
    }
}
void haha2(int arr[][N],int n){
    for(int i=0;i<3;i++){
        for(int j=0;j<5;j++){
            arr[i][j]=arr[i][j]*2;
        }
    }
}
int main(){
    int arr[3][5]={0};
    int count=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<5;j++){
            count++;
            arr[i][j]=count;
        }
    }
    haha2(arr,3);
    haha1(arr,3);
    return 0;
}
// int main(){
//     int arr[3][5]={0};
//     int count=0;
//     for(int i=0;i<3;i++){
//         for(int j=0;j<5;j++){
//             count++;
//             arr[i][j]=count;
//         }
//     }
//     for(int i=0;i<3;i++){
//         for(int j=0;j<5;j++){
//            printf("%-2d ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     for(int i=0;i<3;i++){
//         for(int j=0;j<5;j++){
//             arr[i][j]=arr[i][j]*2;
//         }
//     }
//     for(int i=0;i<3;i++){
//         for(int j=0;j<5;j++){
//            printf("%-2d ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }