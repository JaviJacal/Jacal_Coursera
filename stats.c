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
 * @file <stats.c> 
 * @brief <Maximum, minimum, mean, and median of the data set>
 *
 * <You are to write a couple of functions that can analyze an array of unsigned char data items and report analytics on the maximum, minimum, mean, and median of the data set. In addition, you will need to reorder this data set from large to small. All statistics should be rounded down to the nearest integer. After analysis and sorting is done, you will need to print that data to the screen in nicely formatted presentation. >
 *
 * @author <Javier Jacal>
 * @date <10/16/2021 >
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
  printf("\nThe original array is:\n");
  print_array(test,sizeof(test));
  sort_array(test,sizeof(test));
  printf("\nThe sorted array is:\n");
  print_array(test,sizeof(test));
  print_statistics(test,sizeof(test));
}

/* Add other Implementation File Code Here */

void print_statistics(unsigned char *data,unsigned int length) /*- A function that prints the statistics of an array including minimum, maximum, mean, and median.*/
{
   printf("\nThe maximum is: %u ",find_maximum(data,length));
   printf("\nThe minimum is: %u ",find_minimum(data,length));
   printf("\nThe mean is: %u ",find_mean(data,length));
   printf("\nThe median is: %u ",find_median(data,length));
}
void print_array(unsigned char *data,unsigned int length) /*-  Given an array of data and a length, prints the array to the screen*/
{
   int i = 0;
   for(i = 0; i<length; i++)
   {
      printf("%u ",data[i]);
   }
}
unsigned char find_median(unsigned char *data,unsigned int length)/* - Given an array of data and a length, returns the median value*/
{
   sort_array(data,length);
   if(length%2==0)
      return((data[length/2]+data[(length-1)/2])/2);

   else
   return(data[length/2]);
}
unsigned char find_mean(unsigned char *data,unsigned int length) /*-  Given an array of data and a length, returns the mean*/
{
   int i = 0, sum = 0;
   for(i = 0; i<length; i++)
   {
      sum += data[i]; 
   }
   return(sum/length);
}
unsigned char find_maximum(unsigned char *data,unsigned int length)/* -  Given an array of data and a length, returns the maximum*/
{
   sort_array(data,length);
   return(data[0]);
}
unsigned char find_minimum(unsigned char *data,unsigned int length) /*-  Given an array of data and a length, returns the minimum*/
{
   sort_array(data,length);
   return(data[length-1]);
}
void sort_array(unsigned char *data,unsigned int length)/*- Given an array of data and a length, sorts the array from largest to smallest.  (The zeroth Element should be the largest value, and the last data(n-1) should be the smallest value. )*/
{
   int i,j;
   unsigned char swap;
   for (i = 0 ; i < length - 1; i++)
  {
    for (j = 0 ; j < length - i - 1; j++)
    {
      if (data[j] < data[j+1]) 
      {
        swap       = data[j];
        data[j]   = data[j+1];
        data[j+1] = swap;
      }
    }
  }
}
