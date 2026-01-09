//gcc -o ls ls.c
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <dirent.h>

int main(int argc , char *argv[]){
    int n=0;
    char c[1024]="./";
    char *cc=c;
    
    DIR *dp;
    struct dirent *dirp; 
    
    
    dp = opendir(cc);

    while ((dirp = readdir(dp)) != NULL) printf("%s\n", dirp->d_name);

    closedir(dp);
    return 0;
}
