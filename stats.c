/******************************************************************************
 * Author: Nutan Ganesh Hegde
 * Date: 30 April 2026
 * Description: Performs statistical analysis on an array
 *****************************************************************************/

#include "stats.h"

void print_array(unsigned char *array, unsigned int length) {
    for (int i = 0; i < length; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

unsigned char find_maximum(unsigned char *array, unsigned int length) {
    unsigned char max = array[0];
    for (int i = 1; i < length; i++) {
        if (array[i] > max)
            max = array[i];
    }
    return max;
}

unsigned char find_minimum(unsigned char *array, unsigned int length) {
    unsigned char min = array[0];
    for (int i = 1; i < length; i++) {
        if (array[i] < min)
            min = array[i];
    }
    return min;
}

unsigned char find_mean(unsigned char *array, unsigned int length) {
    unsigned int sum = 0;
    for (int i = 0; i < length; i++) {
        sum += array[i];
    }
    return (unsigned char)(sum / length);
}

void sort_array(unsigned char *array, unsigned int length) {
    for (int i = 0; i < length - 1; i++) {
        for (int j = i + 1; j < length; j++) {
            if (array[i] < array[j]) {
                unsigned char temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

unsigned char find_median(unsigned char *array, unsigned int length) {
    // Ensure sorted before median
    sort_array(array, length);

    if (length % 2 == 0) {
        return (array[length/2] + array[length/2 - 1]) / 2;
    } else {
        return array[length/2];
    }
}

void print_statistics(unsigned char *array, unsigned int length) {
    printf("Maximum: %d\n", find_maximum(array, length));
    printf("Minimum: %d\n", find_minimum(array, length));
    printf("Mean: %d\n", find_mean(array, length));
    printf("Median: %d\n", find_median(array, length));
}

int main() {

    unsigned char test[SIZE] = {
        34, 201, 190, 154, 8, 194, 2, 6,
        114, 88, 45, 76, 123, 87, 25, 23,
        200, 122, 150, 90, 92, 87, 177, 244,
        201, 6, 12, 60, 8, 2, 5, 67,
        7, 87, 250, 230, 99, 3, 100, 90
    };

    printf("Original Array:\n");
    print_array(test, SIZE);

    sort_array(test, SIZE);

    printf("\nSorted Array (Descending):\n");
    print_array(test, SIZE);

    printf("\nStatistics:\n");
    print_statistics(test, SIZE);

    return 0;
}
