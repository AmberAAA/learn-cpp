/**
 * @file fun_and_arr.cc 函数与数组
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-03
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;


void handleArr (int arr[],  short size)
{
  cout << "[handleArr] arr address:" << arr << endl;
  // 在这里如果使用sizeof会触发一条编译警告
  cout << "[handleArr] arr size: " << sizeof(arr) << endl;
}

void handleArr2 (int *arr, short size)
{
  cout << "[handleArr2] arr address:" << arr << endl;
  cout << "[handleArr2] arr size: " << sizeof(arr) << endl; 
}


int main(int argc, char const *argv[])
{
  const short MAX = 5;
  int arr[MAX] = {1, 2, 4, 8, 16};
  cout << "Arr address is: " << arr << endl;
  cout << "Arr size is: " << sizeof(arr) << endl;
  handleArr(arr, MAX);
  handleArr2(arr, MAX);
  return 0;
}

