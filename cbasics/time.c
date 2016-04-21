#include <stdio.h>
#include <sys/timeb.h>
#include <time.h>
int main(int argc, char *argv[]){
        struct timeb tmb;
        ftime(&tmb);
        printf("default time = %ld\n", (long)time(NULL));
        printf("tmb.time     = %ld (seconds)\n", tmb.time);
        printf("tmb.millitm  = %d (mlliseconds)\n", tmb.millitm);
        //printf("%d", time());
        //getchar();
        return 0;
}