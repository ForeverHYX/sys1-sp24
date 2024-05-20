#include "stdio.h"

const int MAX_LEN = 20;
long long fibonacci(long long n);

int main() {
  long long arr[MAX_LEN];
  for (int i = 0; i < MAX_LEN; ++i) {
    arr[i] = fibonacci(i);
  }
  if (arr[0] != 1) {
    printf("Error! fibonacci(0) should be 1, but your answer is %lld", arr[0]);
    return -1;
  }
  if (arr[1] != 1) {
    printf("Error! fibonacci(1) should be 1, but your answer is %lld", arr[1]);
    return -1;
  }
  for (int i = 2; i < MAX_LEN; ++i) {
    if (arr[i] != arr[i-1] + arr[i-2]) {
      printf("Error! fibonacci(%d) should be %lld, but your answer is %lld", i, arr[i-1] + arr[i-2], arr[i]);
      return -1;
    }
  }
  printf("Pass\n");
}