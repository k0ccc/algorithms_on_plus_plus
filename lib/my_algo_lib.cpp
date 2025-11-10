#include "my_algo_lib.h"


/*
arr - Sorted array; numb - number we finding

x - size of array
log2 X = 2 ** X | log2 8 = 2 ** 3
pow (2, X)

return position of number in array */
// int Algorithm::Binary_search(std::vector<int> *arr, int numb) const
// {
//   if (!arr || !numb)
//     return 1;
//   std::vector<int> v = *arr;
//   int size = arr->size();
//   int midIndex = size / 2;
//   int midNumber = (*arr)[midIndex];
//   while (midNumber != numb)
//   {
//     if (midNumber > numb)
//     {
//       v.erase(v.begin() + midIndex, v.end());
//     }
//     else if (midNumber < numb)
//     {
//       v.erase(v.begin(), v.begin() + midIndex);
//     }
//     size = v.size();
//     midIndex = size / 2;
//     midNumber = v[midIndex];
//     if (v.size() == 1) break;
//   }
//   if (v[0] != numb && midNumber != numb) return -1;
//   return v[0];
// }
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
