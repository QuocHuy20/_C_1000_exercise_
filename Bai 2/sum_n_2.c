/**
 * @file sum_n_2.c
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
uint64_t sum_n_2(uint64_t number)
{
    uint64_t sum = 0;
    
}

int main()
{
    uint64_t number = 0;
    printf("begin function\n");
    printf("n=: ");
    scanf("%lu",&number);
    printf("sum = %lu\n",sum_n_2(number));
    //getch();
    return 0;
}