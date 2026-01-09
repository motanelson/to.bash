//gcc -o time time.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include<math.h>


int main(int argc , char *argv[]){
    int n=0;
    int r=0;
    char c[4096]="";
    if (argc<3)return 0;
    for (n=2;n<argc;n++){
        if(n!=1)strcat(c," ");
        strcat(c,argv[n]);
    }
    r=atoi(argv[1]);
    strcat(c," &");
    n=0;
    time_t now1 =time(0);
    time_t now2 =time(0);
    double seconds =0.000;
    system(c);
    while(1){        
        now2 =time(0);
        seconds = difftime(now2, now1);
        if (seconds>=r)exit(0);
            
    }
    return 0;
}
