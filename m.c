#include <stdio.h>

int main(){

   int a=10;
   int *ptr = &a;
   printf("ptr ning qiymati -> %x\n", ptr);
   ptr+=1000000;
   printf("ptr ning qiymati -> %d", *ptr);
}
