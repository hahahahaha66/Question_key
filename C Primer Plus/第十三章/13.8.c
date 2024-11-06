#include<stdio.h>
int main(int argc,char*argv[]){
    if(argc<3){
        fprintf(stderr,"Error\n",argv[0]);
        return 1;
    }
    char a=*argv[1];
    FILE*inp;
    for(int i=2;i<argc;i++){
        int count=0;
        char ch;
        inp=fopen(argv[i],"r");
        if(inp==NULL){
            fprintf(stderr,"Error\n",argv[i]);
        }
        while((ch=getc(inp))!=EOF){
            if(ch==a){
                count++;
            }
        }
        printf("%d ",count);
        fclose(inp);
    }
    return 0;
}