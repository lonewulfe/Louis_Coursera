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
 * @brief File containing the function bodies of the functions delared in stats.h and the main function. 
 *
 * This program sorts the array and finds the mean, median, maximum and minimum and displays it.
 *
 * @author Joel Louis
 * @date 2-11-2019
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */

}

/* Add other Implementation File Code Here */
void sort_array(int a[], int size)
{

}

void find_median(int a[],int size, int medians[])
{

}
int find_mean(int a[],int size)
{

}

int find_maximum(int a[],int size)
{

}

int find_minimum(int a[],int size)
{

}

void print_array(int a[], int size)
{

}

void print_statistics(int min, int max, int mean, int median1, int median2)
{

}
