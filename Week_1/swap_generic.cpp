#include <iostream>
#include <complex>

template <class T>
inline void my_swap(T& a, T& b) {
  T temp = a;
  a = b;
  b = temp;
}

int main(void) {
  int m = 5, n = 10;
  double x = 5.3, y = 10.6;
  std::complex<double> r(2.4, 3.5), s(3.4, 6.7);
  
  std::cout << "inputs: " << m <<", " << n << std::endl;
  my_swap(m, n);
  std::cout << "outputs: " << m << ", " << n << std::endl;
  
  std::cout << "double inputs: " << x << ", " << y << std::endl;
  my_swap(x, y);
  std::cout << "double outputs: " << x << ", " << y << std::endl;
  
  std::cout << "complex inputs: " << r << ", " << s << std::endl;
  my_swap(r, s);
  std::cout << "comples outputs " << r << ", " << s << std::endl;
  
  return 0;
}
