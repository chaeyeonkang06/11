//
//  main.c
//  11
//
//  Created by 강채연 on 11/13/25.
//

#include <stdio.h>

#if 0
void swap (int x, int y){
    int temp;
    temp = x;
    x = y;
    y = temp;
}

void main(void){
    int a = 3;
    int b = 5;
    swap(a, b);
    printf("a: %i, b: %i\n", a, b);
}
#endif

void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void main(void){
    int a = 3;
    int b = 5;
    swap(&a, &b);
    printf("a: %i, b: %i\n", a, b);
}
