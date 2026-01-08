//gcc -o cp cp.c
// cp hello.txt x.txt
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc , char *argv[]){
    int n=0;
    FILE *f1;
    FILE *f2;
    int a;
    char *c;
    char *d;
    char *p;
    char *pp;
    char *ppp;
    int l=0;
    char b[4096]="";
    
    if (argc<3)return 0;
    
        f2=fopen(argv[2],"w");
        if(f1==NULL){
            perror(argv[2]);
            return 1;
        }
        f1=fopen(argv[1],"rb");
        

        fclose(f2);
        f2=fopen(argv[2],"wb");
        if(f1==NULL){
            perror(argv[1]);
            return 1;
        }
        if(f1==NULL){
            perror(argv[2]);
            return 1;
        }

        while(1){
            
            b[0]=0;
        
            a=fread(b,1,4095,f1);
            printf("%d\n",a);
            fwrite(b,a,1,f2);
            
            if(a!=4095)break;
         }   
         fclose(f1);
         fclose(f2);
     
    return 0;
}
