#include <stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#define A 336
#include <stdio.h>

int main() {
    FILE *p;
    p=fopen("myword.txt","a+");
    char a=getc(p);
    putc('h',p);
    fprintf(p,"hahahahahahahahah");
    fclose(p);
    return 0;
}
