#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));
    int n1 = rand () % 100;
    int n2 = rand () % 100;
    printf("%d %d\n", n1, n2);
    int *ptr1 = &n1;
    int *ptr2 = &n2;


    *ptr1>*ptr2 ? printf("Katta -> %d", *ptr1) : printf("Kattasi -> %d", *ptr2);
}
