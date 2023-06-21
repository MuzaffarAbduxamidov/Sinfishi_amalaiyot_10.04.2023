#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));
    int n = rand () % 100;
    int n1 = rand () % 100000 + 20000;
    printf("%d %d\n", n, n1);
    int *ptr = &n;
    int *ptr1 = &n1;

    printf("Pointer1 -> %d\nPointer2 -> %d", *ptr, *ptr1);
}
