#include <stdio.h>
#include <stdlib.h>

const int MAX_LEN = 20;
const int MAX_VAL = 1000;

void bubble_sort(long long *arr, long long len);

int ll_compare(const void *lhs, const void *rhs) {
  return *(long long *)lhs - *(long long *)rhs;
}

void print_array(long long *arr, long long len) {
  for (int i = 0; i < len; ++i) {
    printf("%lld ", arr[i]);
  }
  printf("\n");
}

int main() {
  long long base_arr[MAX_LEN];
  long long sort_arr[MAX_LEN];
  long long arr[MAX_LEN];
  for (int i = 0; i < MAX_LEN; ++i) {
    sort_arr[i] = base_arr[i] = arr[i] = (long long)rand() % MAX_VAL;
  }
  qsort(sort_arr, MAX_LEN, sizeof(long long), ll_compare);
  bubble_sort(arr, MAX_LEN);
  for (int i = 0; i < MAX_LEN; ++i) {
    if (sort_arr[i] != arr[i]) {
      printf("Sort Fail\n");
      printf("Array Before Sort: ");
      print_array(base_arr, MAX_LEN);
      printf("Array After Sort: ");
      print_array(arr, MAX_LEN);
      return -1;
    }
  }
  printf("Sort Successfully\n");
  return 0;
}