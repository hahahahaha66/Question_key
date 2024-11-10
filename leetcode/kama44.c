#include<stdio.h>
#include<stdlib.h>
int main(){
    int m,n;
    scanf("%d%d",&m,&n);
    if (m == 0 || n == 0) {
        printf("0");
        return 0;
    }
    int**num=(int**)malloc(m*sizeof(int*));
    for(int i=0;i<m;i++){
        num[i]=(int*)malloc(n*sizeof(int));
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&num[i][j]);
        }
    }
    int*arr=(int*)malloc((n+m)*sizeof(int));
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            count+=num[i][j];
        }
        arr[i]=count;
    }
    count=0;
    for(int j=0;j<m;j++){
        for(int i=0;i<n;i++){
            count+=num[i][j];
        }
        arr[n+j]=count;
    }
    int min=1000000000;
    for(int i=0;i<n-1;i++){
        count=arr[n-1]-arr[i]*2;
        if(count<min&&count>=0){
            min=count;
        }
    }
    for(int i=0;i<m-1;i++){
        count=arr[n-1]-arr[i+n]*2;
        if(count<min&&count>=0){
            min=count;
        }
    }
    printf("%d",min);
    for (int i = 0; i < m; i++) {
        free(num[i]);
    }
    free(num);
    free(arr);
    return 0;
}