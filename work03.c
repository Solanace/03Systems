#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int arrA[10];
    int i = 0;
    srand(time(NULL));
    
    for (; i < 10; i ++) {
        arrA[i] = rand();
        //printf("%d\n", arrA[i]);
    }
    
    arrA[9] = 0;
    i = 0;
    
    printf("The original array:\n");
    for (; i < 10; i ++) {
        printf("arr[%d]: %d\n", i, arrA[i]);
    }
    
    int arrB[10];
    int *ip;
    i = 0;
    
    for (; i < 10; i ++) {
        ip = &arrA[9 - i];
        arrB[i] = *ip;
    }
    
    printf("The second array:\n");
    i = 0;
    for (; i < 10; i ++) {
        printf("arr[%d]: %d\n", i, arrB[i]);
    }
        
    return 0;
}
