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
double sum_1_1_n(uint64_t number)
{
    double sum = 1;
    uint64_t count = 1;

    while (count<=number)
    {
        sum += 1.0/count;
        count++;
    }

    return sum;    
}

int main()
{
    start = clock();
    uint64_t number = 0;
    printf("begin function\n");
    printf("n=: ");
    scanf("%lu",&number);
    printf("sum = %f\n",sum_1_1_n(number));
    //getch();
    end = clock();
    time_use = (double)(end-start)/CLOCKS_PER_SEC;
    printf("Time use: %f\n",time_use);
    return 0;
}