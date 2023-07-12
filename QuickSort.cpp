#include "QuickSort.h"

void QuickSort::sort(int *arr, int left, int right) {
    if (left >= right) return;
    int base = arr[left], l = left, r = right;
    while (l < r) {
        while (l < r && arr[r] >= base) r--;
        arr[l] = arr[r];
        while (l < r && arr[l] <= base) l++;
        arr[r] = arr[l];
    }
    arr[r] = base;
    QuickSort::sort(arr, left, r - 1);
    QuickSort::sort(arr, r + 1, right);
}
