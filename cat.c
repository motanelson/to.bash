//gcc -o cat cat.c
// cat hello.txt x.txt
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc , char *argv[]){
    int n=0;
    FILE *f1;
    int a;
    char *c;
    char *d;
    char *p;
    char *pp;
    char *ppp;
    int l=0;
    char b[4096]="";
    
    if (argc<2)return 0;
    
    for(n=1;n<argc;n++){
        f1=fopen(argv[n],"rb");
        if(f1==NULL){
            perror(argv[n]);
            return 1;
        }
        while(1){
            
            b[0]=0;
        
            a=fread(b,1,4095,f1);
            //printf("%d\n",a);
            fwrite(b,1,a,stdout);
            
            if(a!=4095)break;
         }   
         fclose(f1);
     }
    return 0;
}
