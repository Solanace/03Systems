#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print_array(int *a, int length) {
    int i;
    for (i = 0; i < length; i ++) {
        printf("[%d]: %d\n", i, a[i]);
    }
}

int main() {
    int arrA[10];
    int arrB[10];
    int i;
    srand(time(NULL));
    
    for (i = 0; i < 10; i ++) {
        arrA[i] = rand();
        //printf("%d\n", arrA[i]);
    }
    
    arrA[9] = 0;
    
    printf("The original array:\n");
    print_array(arrA, 10);
    printf("--------------------\n");
    
    int *p = arrA + 9;
    
    for (i = 0; i < 10; i ++) {
        arrB[i] = *p;
        p --;
    }
    
    printf("The second array:\n");
    print_array(arrB, 10);
        
    return 0;
}
