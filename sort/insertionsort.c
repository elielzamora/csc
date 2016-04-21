/****************************************
*
*   Eliel Zamora
*   CSC - Computer Science in C.
*
****************************************/

#include <stdio.c>

#define MAX_VALUE 100000
typedef int[] IntArray

main (int argc, char *argv[]){
    while(argv[++argc] != NULL){
        if(!validarg()) goto invalidarg;
        savefile(insertionsort(loadfile(argv)));                
    }
    return 0;
    invalidarg:
    printf("invalid arguments must be a properfile path");
    return 0;
}
IntArray loadfile(char path[]){
    FILE *fp = fopen(path, "r")
    int temp;
    if(file != NULL){
        while(){
            
        }
    }
}