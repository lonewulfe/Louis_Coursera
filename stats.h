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
 * @unsigned char <min> <The least value>
 * @unsigned char <max> <the highest value>
 * @int <mean> <the average value>
 * @unsigned char <median1> <The first median>
 * @unsigned char <median2> <The second median>	
 * @return <void>
 */

void print_statistics(unsigned char min, unsigned char max,int mean, unsigned char median1, unsigned char median2);


/**
 * @brief <Function declaration for the function that prints the array as it is>
 *
 * <The function prints the original array as it is>
 *
 * @unsigned char <a[]> <Array name>
 * @int <size> <The number of elements in the array>
 *
 * @return <void>
 */
void print_array(unsigned char a[], int size);


/**
 * @brief <The function declaration for finding the medians of the sorted array>
 *
 * <Two medians exist for this array with even number of elements>
 *
 * @unsigned char <a[]> <array name>
 * @int <size> <the number of elements in the array>
 * @unsigned char <medians> <array containing one or two medians>
 *
 * @return <void>
 */
void find_median(unsigned char a[],int size,unsigned char medians[]);


/**
 * @brief <the declaration for the function for finding the mean>
 *
 * <The function is used for finding the average of the array>
 *
 * @unsigned char <a[]> <array variable name>
 * @int <size> <number of array elements>
 *
 * @return <int mean>
 */
int find_mean(unsigned char a[],int size);


/**
 * @brief <The function to find the max value of the array>
 *
 * <The function finds the first element in the sorted array and then displays it>
 *
 * @unsigned char <a[]> <array variable name>
 * @int <size> <number of array elements>
 *
 * @return <unsigned char max>
 */
unsigned char find_maximum(unsigned char a[],int size);


/**
 * @brief <The function finds the least value element of the array>
 *
 * <The function finds the last element in the sorted array and then displays it>
 *
 * @unsigned char <a[]> <array variable name>
 * @int <size> <number of array elements>
 *
 * @return <unsigned char min>
 */
unsigned char find_minimum(unsigned char a[],int size);


/**
 * @brief <sorts the array elements in descending order
 *
 * <This function sorts the elements using q sort>
 *
 * @unsigned char <a[]> <array variable name>
 * @int <size> <number of array elements>
 *
 * @return <void>
 */
void sort_array(unsigned char a[], int size);


#endif /* __STATS_H__ */

