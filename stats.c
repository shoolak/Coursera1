/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c
 * @brief Calculate statistics of array, print and sort array.
 *
 * Implemented with 7 funtion that calculate median, mean, maximum, minimum of array and
 * sort array with bubble sort, print statistics and array
 * @author Oleh Terno
 * @date 19.01.2024
 *
 */



#include <stdio.h>
#include "stats.h"

#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
  
  unsigned char mean, median, maximum, minimum;
  sort_array(test, SIZE);
  median = find_median(test, SIZE);
  mean = find_mean(test, SIZE);
  maximum = find_maximum(test, SIZE);
  minimum = find_minimum(test, SIZE);
  print_array(test,SIZE);
  print_statistics(mean, median, maximum, minimum);
  


}

unsigned char find_median(unsigned char *arr, unsigned int len)
{
	if(len % 2 == 0)
	{
		return (arr[len/2] + arr[len/2 + 1])/2;
	}
	return arr[len/2 + 1];
}
unsigned char find_mean(unsigned char *arr, unsigned int len)
{
 unsigned int sum = 0;
 	for(int i = 0;i < len;i++)
 	{
		sum += arr[i]; 
 	}	
 unsigned char mean = sum/len;
 return mean;
}

unsigned char find_maximum(unsigned char *arr, unsigned int len)
{
 unsigned char max = arr[0];
 for (int i = 1;i < len;i++)
 {
 	if(arr[i] > max)
 	{
 		max = arr[i];
 	}
 	
 }
 return max;
}

unsigned char find_minimum(unsigned char *arr, unsigned int len)
{
 unsigned char min = arr[0];
 for (int i = 1;i < len;i++)
 {
 	if(arr[i] < min)
 	{
 		min = arr[i];
 	}
 	
 }
 return min;
}
void sort_array(unsigned char *arr, unsigned int len)
{
 unsigned char temp = 0;
	for(int i = 0; i < len;i++)
	{
		for(int j = 0; j < len - i;j++)
		{
			if(arr[j] < arr[j+1])
			{
			 temp = arr[j];
			 arr[j] = arr[j+1];
			 arr[j+1] = temp;
			}
			
		}	
	}
}
void print_array(unsigned char *arr, unsigned int len)
{
	for(int i = 0;i < len; i++)
	{
		printf("%hu, \t", arr[i]);
	}
	printf("\n");
}
void print_statistics(unsigned char mean,unsigned char median,unsigned char max,unsigned char min)
{
	printf("The median of array: %hu \n", median);
	printf("The mean of array: %hu \n", mean);
	printf("The maximum element of array: %hu \n", max);
	printf("The minimum element of array: %hu \n", min);
}



