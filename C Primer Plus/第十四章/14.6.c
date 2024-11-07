#include<stdio.h>
typedef struct haha{
    int d; 
    char s1[10];
    char s2[10];
    int m[4];
}haha;
int main(){
    haha arr[20]={{.m={0}},{.m={0}},{.m={0}}};
    FILE*p;
    char a[10];//文件名
    int ahh[18]={0};//存储号码
    int h;//号码
    int n[4];//存储数值增量
    scanf("%s",a);
    p=fopen(a,"r");
    while(fscanf(p,"%d",&h)==1){
        haha*x=&arr[h];
        if(ahh[h]==0){
            ahh[h]=1;
            int*y=&x->d;
            *y=h;
            char*s1=x->s1;
            char*s2=x->s2;
            int*m=x->m;
            fscanf(p,"%s%s",s1,s2);
            fscanf(p,"%d %d %d %d",m,m+1,m+2,m+3);
        }
        else{
            int*m=x->m;
            fscanf(p,"%*s%*s");
            fscanf(p,"%d %d %d %d",n,n+1,n+2,n+3);
            *m+=*n,*(m+1)+=*(n+1),*(m+2)+=*(n+2),*(m+3)+=*(n+3);
        }
    }
    fclose(p);
    return 0;
}
