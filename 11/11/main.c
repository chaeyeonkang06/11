//
//  main.c
//  11
//
//  Created by 강채연 on 11/13/25.
//

#include <stdio.h>

int main(void){
    int i;
    int grade[5];
    int sum=0;
    
    for(i=0;i<5;i++)
    {
        printf("grade[%i] =", i);
        scanf("%d",&grade[i]);
    }
    
    for(i=0;i<5;i++)
    {
        printf("grade[%i] = %i\n", i, *(grade+i));
        sum = sum + *(grade+i);
    }
    
    printf("average : %i\n", sum/5);
    //반복문 및 포인터 문법을 통해 grade 배열 값 출력 및 평균 값 계산
    return 0;
}
