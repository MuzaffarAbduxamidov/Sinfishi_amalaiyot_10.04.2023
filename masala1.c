#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));
    int n = rand () % 100;
    printf("%d\n", n);
    int *ptr = &n;


    printf("Pointerda -> %d", *ptr);
}
