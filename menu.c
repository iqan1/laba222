#include <stdio.h>
#include <stdlib.h>
#include "index_last_zero.h"
#include "index_first_zero.h"
#include "sum_between.h"
#include "sum_before_and_after.h"

int main() {
    int e;
    int arr[100];
    int len = 0;
    char c;

    scanf("%d", &e);
    while (scanf("%d%c", &arr[len], &c) == 2) {
        len++;
        if (c == '\n') {
            break;
        }
    }

    int first_zero = index_first_zero(arr, len);
    int last_zero = index_last_zero(arr, len);

    switch (e) {
    case 0:
        printf("%d\n", first_zero);
        break;
    case 1:
        printf("%d\n", last_zero);
        break;
    case 2:
        if (first_zero != -1 && last_zero != -1) {
            printf("%d\n", sum_between(arr, len, first_zero, last_zero));
        }
        else {
            printf("Данные некорректны\n");
        }
        break;
    case 3:
        if (first_zero != -1 && last_zero != -1) {
            printf("%d\n", sum_before_and_after(arr, len, first_zero, last_zero));
        }
        else {
            printf("Данные некорректны\n");
        }
        break;
    default:
        printf("Данные некорректны\n");
        break;
    }

    return 0;
}