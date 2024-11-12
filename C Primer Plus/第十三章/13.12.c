#include<stdio.h>
#define X 20
#define Y 30
int main(){
    FILE*p;
    char ch;
    p=fopen("myword.txt","r");
    int arr[X][Y]={0};
    for(int i=0;i<X;i++){
        for(int j=0;j<Y;j++){
            fscanf(p,"%d ",&arr[i][j]);
        }
        while((ch=fgetc(p))!='\n'&&ch!=EOF);
    }
    fclose(p);
    FILE*q=fopen("word.txt","a+");
    for(int i=0;i<X;i++){
        for(int j=0;j<Y;j++){
            fprintf(q,"%c",(char)arr[i][j]);
        }
        fputs("\n",q);
    }
    fclose(q);
    return 0;
}