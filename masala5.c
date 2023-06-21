#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void randArr (int arr[], int uzunlik){

    srand(time(NULL));
    int a=0;
    for(int i=0; i<uzunlik; i++){
        arr[i] = rand () % 91 + 10;

        printf("%d ", arr[i]);
        for(int *ptr= &a; *ptr=&a<uzunlik; *ptr+=1){
            arr[*ptr] = arr[i];
            printf("%d ", arr[ptr]);
        }
    }
}


int main(){

    int n;
    printf("Son kriting: ");
        scanf("%d", &n);
    int arr[n];


    randArr(arr, n);
}
