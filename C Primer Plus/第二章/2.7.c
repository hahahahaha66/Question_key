#include<stdio.h>
void Smile(void){
    printf("Smile!");
}
int main(){
    for(int j=0;j<3;j++){
       for(int i=j;i<3;i++){
        Smile();
       }
       printf("\n");
    }
    return 0;
}