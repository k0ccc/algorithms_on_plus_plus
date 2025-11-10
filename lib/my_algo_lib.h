#pragma once
#ifndef ALGORITHM_H
#define ALGORITHM_H
#include <cmath>
#include <vector>

class Algorithm
{
private:
  /* data */
public:
  template <typename T>
  int Binary_search(const std::vector<T> &arr, const int numb) const;
};

#include "my_algo_lib_impl.inl"

#endif // ALGORITHM_H