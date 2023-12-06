// Convert a C program to C++

#include <iostream>
#include <vector>

const int N = 40;

inline void sum(int *p, int n, std::vector<int> d) {
  *p = 0;
  for (int i = 0; i < n; ++i)
    *p = *p + d[i];
  
  return;
}

int main(void) {
  int accum = 0;
  std::vector<int> data;
  data.reserve(N);
  
  for (int i = 0; i < N; ++i) {
    data.push_back(i);
  }
  
  sum(&accum, N, data);
  std::cout << "sum is " << accum << std::endl;
  
  return 0;
}
