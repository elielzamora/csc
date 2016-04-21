#include <stdio.h>

int main (int argc, char *argv[]){
        printf("there are %i arguments\n", argc);
        printf("the arguments are ...\n");
        for(int i = 0; i < argc; i++){
                printf("%s\n", *(argv++));
        }
}