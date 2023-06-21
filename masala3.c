#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));
    int n1 = rand () % 100;
    int n2 = rand () % 100;
    int n3 = rand () % 100;
    printf("%d %d %d\n", n1, n2, n3);
    int *ptr1 = &n1;
    int *ptr2 = &n2;
    int *ptr3 = &n3;

    printf("Qiymat \nPointer1 -> %d\nPointer2 -> %d\nPointer3 -> %d\n", *ptr1, *ptr2, *ptr3);
    printf("Manzil \nPointer1 -> %x\nPointer2 -> %x\nPointer3 -> %x\n", ptr1, ptr2, ptr3);
}
