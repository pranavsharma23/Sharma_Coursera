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
 * @brief Initializes program for doing statistical analyses on data for find
 * mean, median, highest and lowest numbers
 *
 * @author Pranav Sharma
 * @date 06/30/2020
 *
 */
#ifndef __STATS_H__
#define __STATS_H__


void print_statistics();
/**
 * @brief Prints the neatly formatted analytics to the console
 */

void print_array(char data_set[], int length);
/**
 * @brief Prints the array to the console
 *
 * @param data_set[]	array that contains the data to be analyzed
 * @param length 			size of the array
 */

int find_median(char data_set[], int length);
/**
 * @brief Finds the median from the provided data set
 *
 * @param data_set[]	array that contains the data to be analyzed
 * @param length 			size of the array
 *
 * @return median value from data
 */

int mean(char data_set[], int length);
/**
 * @brief Finds mean from the provided data set
 *
 * @param data_set[]	array that contains the data to be analyzed
 * @param length 			size of the array
 *
 * @return mean value from data
 */

int maximum(char data_set[], int length);
/**
 * @brief <Add Brief Description of Function Here>
 *
 * <Add Extended Description Here>
 *
 * @param data_set[]	array that contains the data to be analyzed
 * @param length 			size of the array
 *
 * @return maximum value from data
 */

int minimum(char data_set[], int length);
/**
 * @brief <Add Brief Description of Function Here>
 *
 * <Add Extended Description Here>
 *
 * @param data_set[]	array that contains the data to be analyzed
 * @param length 			size of the array
 *
 * @return minimum value from data
 */

void sort_array(char data_set[], int length);
/**
 * @brief <Add Brief Description of Function Here>
 *
 * <Add Extended Description Here>
 *
 * @param data_set[]	array that contains the data to be analyzed
 * @param length 			size of the array
 */

#endif /* __STATS_H__ */
