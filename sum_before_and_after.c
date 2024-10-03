#include "sum_before_and_after.h"
#include "index_first_zero.h"
#include "index_last_zero.h"

int sum_before_and_after(int arr[], int len, int first_zero, int last_zero) {
    int sum = 0;
    for (int i = 0; i < first_zero; i++) {
        sum += abs(arr[i]);
    }
    for (int i = last_zero + 1; i < len; i++) {
        sum += abs(arr[i]);
    }
    return sum;
}
