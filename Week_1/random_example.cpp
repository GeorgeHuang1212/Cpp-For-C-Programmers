#include <iostream>
#include <vector>
#include <random>

const int sides = 6;

int main(void)
{
  const int n_dice = 2;
  std::uniform_int_distribution<unsigned> u(1,6);
  std::default_random_engine e(time(0));
  
  std::cout << "\nEnter number of trials: ";
  int trials;
  std::cin >> trials;
  
  int* outcomes = new int [n_dice*sides + 1];
  
  for (int j = 0; j < trials; ++j) { 
    int roll = 0;
    for (int k = 1; k <= n_dice; ++k) {
      roll += u(e);
    }
    outcomes[roll]++;
  }
  
  std::cout << "probability\n";
  for (int j = 2; j < n_dice*sides + 1; ++j)
    std::cout << "j = " << j << ", p = "
        << static_cast<double>(outcomes[j])/trials
        << std::endl;
  
  return 0;
}
