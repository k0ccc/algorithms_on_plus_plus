#include "lib/my_algo_lib.h"
#include <iostream>

int main()
{
  Algorithm algo;
  std::vector<float> my_sorted_vector = {1, 2, 4, 6, 12, 22, 34, 36, 41, 42, 46};
  int index = algo.Binary_search(my_sorted_vector, 34);
  std::cout << index << std::endl;
  return 0;
}
 