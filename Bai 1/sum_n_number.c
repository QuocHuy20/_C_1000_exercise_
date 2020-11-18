/**
 * @file sum_n_number.c
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

/**
 * @brief 
 * this function to cal sum from 1 to n number
 * @param n 
 * @return uint64_t 
 */
uint64_t sum_n_number(uint64_t number)
{
    uint64_t sum  = 0;
    uint64_t count = 0;
    #if 0
    for (count = 0; count <= number; count++)
    {
        sum+=count;
    };
    #endif

    #if 0
    while (count <= number)
    {
        sum+=count;
        count++;
    }
    #endif
    
    #if 1
    sum = (number*(number+1)/2);
    #endif
    return sum;   
}

int main()
{
    uint64_t number = 0;
    printf("begin function\n");
    printf("n=: ");
    scanf("%lu",&number);
    printf("sum = %lu\n",sum_n_number(number));
    //getch();
    return 0;
}