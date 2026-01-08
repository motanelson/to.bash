//gcc -o ln ln.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc , char *argv[]){
    int n=1;
    FILE *f1;
    char *a;
    char c[4096]="";
    char b[4096]="";
    while(1){
        b[0]=0;
        
        fgets(b,4095,stdin);
        printf("%d %s",n,b);
        n++;
        if(feof(stdin))return 0;
    }   
  
    return 0;
}
