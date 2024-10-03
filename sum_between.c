#include "sum_between.h"
#include "index_first_zero.h"
#include "index_last_zero.h"
int sum_between(int arr[], int len, int first_zero, int last_zero) {
    int sum = 0;
    for (int i = first_zero + 1; i < last_zero; i++) {
        sum += abs(arr[i]);
    }
    return sum;
}
