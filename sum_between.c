#include <stdlib.h>
#include "sum_between.h"
int sum_between(int arr[], int len, int first_zero, int last_zero) {
    int sum = 0;
    for (int i = first_zero + 1; i < last_zero; i++) {
        sum += abs(arr[i]);
    }
    return sum;
}