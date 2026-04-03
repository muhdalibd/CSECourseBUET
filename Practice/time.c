#include <stdio.h>
#include <time.h>

int main(){
    time_t currTime;
    time(&currTime);
    printf("%s", ctime(&currTime));
    return 0;
}