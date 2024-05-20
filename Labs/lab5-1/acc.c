long long acc(long long a, long long b) {
  long long res = 0;
  for (long long i = a; i <= b; ++i) {
    res += i;
  }
  return res;
}