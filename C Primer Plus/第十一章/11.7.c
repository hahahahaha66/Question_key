#include<string.h>
char*my_strncpy(char*str1,const char*str2,int n){
    for(int i=0;i<n;i++){
        if(i>=strlen(str2)){
            *(str1+i)='\0';
            return str1;
        }
        *(str1+i)=*(str2+i); 
    }
    return str1;
}