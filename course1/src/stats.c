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

void main()
{
  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
    
    int mean=0,med1,med2;
    int min,max;          
    printf("The array is: \n");
    print_array(test,SIZE);
    sort_array(test,SIZE);
    printf("\nThe sorted array is: \n");
    print_array(test,SIZE);
    min=find_minimum(test,SIZE);
    max=find_maximum(test,SIZE);
    mean=find_mean(test,SIZE);
    unsigned char medians[2] ;
    find_median(test,SIZE, medians);
    med1=medians[0];
    med2=medians[1];
    print_statistics(min,max,mean,med1,med2);
}




/* Add other Implementation File Code Here */
void sort_array(unsigned char a[], int size)
{
	int i,j;
	for(i=0;i<size;i++)
		for(j=i+1;j<size;j++)
			if (a[i]<a[j])
			{
				unsigned char temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
}


void find_median(unsigned char a[],int size, unsigned char medians[])
{
    int med1=size/2;
    int med2=size/2 +1;
    unsigned char meddd1=a[med1];
    unsigned char meddd2=a[med2];
    medians[0] = meddd1;
    medians[1]=meddd2;
}

int find_mean(unsigned char a[],int size)
{
	int mean=0;
	for (int i = 0; i < size; ++i)
	{
		mean+=a[i];
	}
	mean=mean/size;
	return mean;
}

unsigned char find_maximum(unsigned char a[],int size)
{
	unsigned char max;
	max = a[0];
	return max;
}
unsigned char find_minimum(unsigned char a[],int size)
{
	unsigned char min;
	min = a[39];
	return min;
}

void print_array(unsigned char a[], int size)
{
	int i=0;
	for (i=0; i<size; i++)
	{
		printf("%d,\t",a[i] );
	}
}


void print_statistics(unsigned char min, unsigned char max, int mean, unsigned char median1, unsigned char median2)
{
	printf("\nMean = %d\n", mean);
	printf("The two medians are %d and %d\n", median1,median2);
	printf("The maximum value in the array is %d\n", max);
	printf("The minimum value in the array is %d\n", min);
}
