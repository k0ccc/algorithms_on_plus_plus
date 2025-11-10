#include "my_algo_lib.h"

/*
arr - Sorted array; numb - number to find

x - size of array
log2 X = 2 ** X | log2 8 = 2 ** 3 - how many iterations should be
pow (2, X)
*/
int Algorithm::Binary_search(std::vector<int> *arr, int numb) const
{
  if (!arr || !numb)
    return 1;
  int low = 0;
  int high = (*arr).size()-1;
  while (low <= high)
  {
    int mid = (low + high);
    int guess = (*arr)[mid];
    if (guess == numb){
      return mid;
    }
    else if(guess > numb){
      high = mid - 1;
    }
    else{
      low = mid +1;
    }
  }
  return -1;
  
}
