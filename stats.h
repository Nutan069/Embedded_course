/******************************************************************************
 * Author: Nutan Ganesh Hegde
 * Date: 30 April 2026
 * Description: Header file containing function declarations for statistics
 *****************************************************************************/

#ifndef __STATS_H__
#define __STATS_H__

#include <stdio.h>

#define SIZE (40)

/* Prints statistics (min, max, mean, median) */
void print_statistics(unsigned char *array, unsigned int length);

/* Prints array */
void print_array(unsigned char *array, unsigned int length);

/* Returns median */
unsigned char find_median(unsigned char *array, unsigned int length);

/* Returns mean */
unsigned char find_mean(unsigned char *array, unsigned int length);

/* Returns maximum */
unsigned char find_maximum(unsigned char *array, unsigned int length);

/* Returns minimum */
unsigned char find_minimum(unsigned char *array, unsigned int length);

/* Sorts array (descending) */
void sort_array(unsigned char *array, unsigned int length);

#endif
