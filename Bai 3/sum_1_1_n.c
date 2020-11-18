/**
 * @file sum_1_1_n.c
 * @author Huylq (quochuy201197@gmail.com)
 * @brief 
 * @version 0.1
 * @date 20-11-1997
 * 
 * @copyright Copyright (c) 2020 Fangia Savy
 * 
 */

#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
#include<conio.h>
#include<time.h>
#include<math.h>

clock_t start,end;
double time_use;

/**
 * @brief  1+1/2+1/3+....+1/n
 * 
 * @param number 
 * @return uint64_t 
 */
uint64_t sum_1_1_n(uint64_t number)
{
    start = clock();
    uint64_t sum = 0;
    uint64_t count = 0;

    end = clock();
    return sum;    
}

int main()
{
    uint64_t number = 0;
    printf("begin function\n");
    printf("n=: ");
    scanf("%lu",&number);
    printf("sum = %lu\n",sum_1_1_n(number));
    //getch();
    time_use = (double)(start-end)/CLOCKS_PER_SEC;
    printf("Time use: %f\n",time_use);
    return 0;
}