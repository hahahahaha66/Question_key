#include<stdio.h>
#include<stdlib.h>
char* haha(char*arr1,char*arr2){
int i=0,j=0;
while(*(arr1+i)!='\0'){
    i++;
}
while(*(arr2+j)!='\0'){
    j++;
}
char*arr3=(char*)malloc((i+j+1)*sizeof(char));
for(int n=0;n<i;n++){
    arr3[n]=arr1[n];
}
for(int n=0;n<j;n++){
    arr3[i+n]=arr2[n];
}
arr3[i+j]='\0';
for(int n=0;n<i+j;n++){
    if(arr3[n]<='z'&&arr3[n]>='a'){
        arr3[n]-=32;
    }
    else if(arr3[n]<='Z'&&arr3[n]>='A'){
        arr3[n]+=32;
    }
}
return arr3;
}
