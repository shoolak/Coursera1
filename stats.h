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
 * @file stats.h 
 * @brief There is a short description of parameters and declarations
 *
 * Implentation of:
 *	- print_statics() that prints static such as median, mean, max, min of array
 *	- print_array() that print array 
 *	- find_median() that find median of array
 *	- find_mean() that find mean of array
 *	- find_maximum() that find maximum element of array
 *	- find_minimum() that find minimum elenent of array
 *	- sort_array() that sort array from largest to smallest
 *
 * @author Terno Oleh
 * @date 19.01.2024
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief Prints the statistic of an array inculding minimum, maximum, mean, and median.
 *
 * This function takes nothing for input.Then it will print all variable with additional description
 *
 * @return This is a void func so nothing will be returned
 */ void print_statistics();
 
 
 /**
 * @brief Prints the array to the screen.
 *
 * This function takes as an input an array of data and a length of array.Then it will print 
 * array to the screen.
 *
 * @param Unsigned char pointer to an n-element data array
 * @param Unsigned integer as the size of array
 * @return Unsigned char result as a median
 */ void print_array(unsigned char *arr, unsigned int len); 
 
 
 /**
 * @brief Calculate median of array.
 *
 * This function takes as an input an array of data and a length of array.Then it will calculate 
 * and return median of array.
 *
 * @param Unsigned char pointer to an n-element data array
 * @param Unsigned integer as the size of array
 *
 * @return Unsigned char result as a median
 *
 */ unsigned char find_median(unsigned char *arr, unsigned int len);
 
 
 /**
 * @brief Calculate mean of array.
 *
 * This function takes as an input an array of data and a length of array.Then it will calculate 
 * and return mean of array.
 *
 * @param Unsigned char pointer to an n-element data array
 * @param Unsigned integer as the size of array
 *
 * @return Unsigned char result as a mean
 *
 */ unsigned char find_mean(unsigned char *arr, unsigned int len);
 
 
  /**
 * @brief Calculate maximum of array.
 *
 * This function takes as an input an array of data and a length of array.Then it will calculate 
 * and return maximum element of array.
 *
 * @param Unsigned char pointer to an n-element data array
 * @param Unsigned integer as the size of array
 *
 * @return Unsigned char result as a maximum
 *
 */ unsigned char find_maximum(unsigned char *arr, unsigned int len);
 
 
  /**
 * @brief Calculate minimum of array.
 *
 * This function takes as an input an array of data and a length of array.Then it will calculate 
 * and return minimum element of array.
 *
 * @param Unsigned char pointer to an n-element data array
 * @param Unsigned integer as the size of array
 *
 * @return Unsigned char result as a minimum
 *
 */ unsigned char find_minimum(unsigned char *arr, unsigned int len);
 
  /**
 * @brief Sort array with bubble sort.
 *
 * This function takes as an input an array of data and a length of array.Then it will sort 
 * array from largest to smallest.
 *
 * @return This is a void func so nothing will be returned
 */ void sort_array(unsigned char *arr, unsigned int len);

#endif /* __STATS_H__ */
