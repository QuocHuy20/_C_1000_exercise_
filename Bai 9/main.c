/**
 * @file main.c
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
 * @brief  N!
 * 
 * @param number 
 * @return uint64_t 
 */
uint64_t mul(uint64_t number)
{
    uint64_t mul = 1;
    uint64_t count = 1;
    
    while (count<=number)
    {
        mul*=count;
        count++;
    }
    
    return mul;    
}

int main()
{
    start = clock();
    uint64_t number = 0;
    printf("begin function\n");
    printf("n=: ");
    scanf("%lu",&number);
    printf("sum = %lu\n",mul(number));
    //getch();
    end = clock();
    time_use = (double)(end-start)/CLOCKS_PER_SEC;
    printf("Time use: %f\n",time_use);
    return 0;
}