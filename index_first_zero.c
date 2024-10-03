#include "index_first_zero.h"
#include <stdio.h>

int index_first_zero(int arr[], int len) {
    int i = 0;
    while (i < len) {
        if (arr[i] == 0) {
            return i;
        }
        i++;
    }
    return -1;
}