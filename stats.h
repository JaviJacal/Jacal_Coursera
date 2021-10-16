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
 * @brief <Header file which includes declarations and docuemnation for the functions from static.c file  >
 *
 * <Add Extended Description Here>
 *
 * @author <Javier Jacal>
 
 * @date <10/16/2021 >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

void sort_array(unsigned char *data,unsigned int length); /*- Given an array of data and a length, sorts the array from largest to smallest.  (The zeroth Element should be the largest value, and the last element (n-1) should be the smallest value. )*/

/**
 * @brief A function that prints the statistics of an array including minimum, maximum, mean, and median
 *
 * This function takes as inputs an unsigned char pointer to an n-element data array and
 * an unsized integer as the sie of the array. It will call the functions find_median, 
 * find_mean, find_maximum and find_minimum and will print their return values which 
 * will be the median,mean, maximum and minimum values of the data array.
 *
 * @param data An unsigned char pointer to an n-element data array
 * @param length An unsigned integer as the sie of the array
 *
 * @return void
 */
void print_statistics(unsigned char *data,unsigned int length);

/**
 * @brief  Given an array of data and a length, prints the array to the screen
 *
 * This function takes as inputs an unsigned char pointer to an n-element data array and
 * an unsized integer as the size of the array. It wil print the n-element data array
 * to the screen
 *
 * @param data An unsigned char pointer to an n-element data array
 * @param length An unsigned integer as the sie of the array
 *
 * @return void
 */
void print_array(unsigned char *data,unsigned int length); 

/**
 * @brief   Given an array of data and a length, returns the median value
 *
 * This function takes as inputs an unsigned char pointer to an n-element data array and
 * an unsized integer as the sie of the array. It wil call the function sort_array and 
 * it will return the median value of the n-element data array
 *
 * @param data an unsigned char pointer to an n-element data array
 * @param length an unsigned integer as the sie of the array
 *
 * @return median value of the n-element data array
 */
unsigned char find_median(unsigned char *data,unsigned int length);

/**
 * @brief Given an array of data and a length, returns the mean
 *
 * This function takes as inputs an unsigned char pointer to an n-element data array and
 * an unsized integer as the sie of the array. It will return the mean value of the 
 * n-element data array
 *
 * @param data an unsigned char pointer to an n-element data array
 * @param length an unsigned integer as the size of the array
 *
 * @return mean value of the n-element data array
 */
unsigned char find_mean(unsigned char *data,unsigned int length); 

/**
 * @brief Given an array of data and a length, returns the maximum
 *
 * This function takes as inputs an unsigned char pointer to an n-element data array and
 * an unsized integer as the sie of the array. It will return the maximum value of the 
 * n-element data array
 *
 * @param data an unsigned char pointer to an n-element data array
 * @param length an unsigned integer as the size of the array
 *
 * @return maximum value of the n-element data array
 */
unsigned char find_maximum(unsigned char *data,unsigned int length);

/**
 * @brief Given an array of data and a length, returns the minimum
 *
 * This function takes as inputs an unsigned char pointer to an n-element data array and
 * an unsized integer as the sie of the array. It will return the minimum value of the 
 * n-element data array
 *
 * @param data an unsigned char pointer to an n-element data array
 * @param length an unsigned integer as the size of the array
 *
 * @return minimum value of the n-element data array
 */
unsigned char find_minimum(unsigned char *data,unsigned int length); 


#endif /* __STATS_H__ */
