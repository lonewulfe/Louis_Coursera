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
 * @file <stats.h> 
 * @brief <Header file as part of the assignment>
 *
 * <Header file with the function declarations>
 *
 * @author <Joel Louis>
 * @date <2/11/2019>
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief <The function declaration for the function that prints the output>
 *
 * <The 4 results are passed to this function as reference>
 *
 * @int <min> <The least value>
 * @int <max> <the highest value>
 * @int <mean> <the average value>
 * @int <median1> <The first median>
 * @int <median2> <The second median>	
 * @return <void>
 */

void print_statistics(int min, int max,int mean, int median1, int median2);


/**
 * @brief <Function declaration for the function that prints the array as it is>
 *
 * <The function prints the original array as it is>
 *
 * @int <a[]> <Array name>
 * @int <size> <The number of elements in the array>
 *
 * @return <void>
 */
void print_array(int a[], int size);


/**
 * @brief <The function declaration for finding the medians of the sorted array>
 *
 * <Two medians exist for this array with even number of elements>
 *
 * @int <a[]> <array name>
 * @int <size> <the number of elements in the array>
 * @int <medians> <array containing one or two medians>
 *
 * @return <void>
 */
void find_median(int a[],int size,int medians);


/**
 * @brief <the declaration for the function for finding the mean>
 *
 * <The function is used for finding the average of the array>
 *
 * @int <a[]> <array variable name>
 * @int <size> <number of array elements>
 *
 * @return <int mean>
 */
int find_mean(int a[],int size);


/**
 * @brief <The function to find the max value of the array>
 *
 * <The function finds the first element in the sorted array and then displays it>
 *
 * @int <a[]> <array variable name>
 * @int <size> <number of array elements>
 *
 * @return <int max>
 */
int find_maximum(int a[],int size);


/**
 * @brief <The function finds the least value element of the array>
 *
 * <The function finds the last element in the sorted array and then displays it>
 *
 * @int <a[]> <array variable name>
 * @int <size> <number of array elements>
 *
 * @return <int min>
 */
int find_minimum(int a[],int size);


/**
 * @brief <sorts the array elements in descending order
 *
 * <This function sorts the elements using q sort>
 *
 * @int <a[]> <array variable name>
 * @int <size> <number of array elements>
 *
 * @return <void>
 */
void sort_array(int a[], int size);


#endif /* __STATS_H__ */

