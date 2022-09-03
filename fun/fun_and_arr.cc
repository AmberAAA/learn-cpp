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

void handleArr(int arr[], short size)
{
  cout << "[handleArr] arr address:" << arr << endl;
  // 在这里如果使用sizeof会触发一条编译警告
  cout << "[handleArr] arr size: " << sizeof(arr) << endl;
}

/**
 * @brief
 *
 * 数组函数的本质，就是讲函数的第一个指针传递了下去
 *
 * @param arr
 * @param size
 */
void handleArr2(int *arr, short size)
{
  cout << "[handleArr2] arr address:" << arr << endl;
  cout << "[handleArr2] arr size: " << sizeof(arr) << endl;
  for (size_t i = 0; i < size; i++)
  {
    // 这里的 给指针每次加一，就代表移动到了下一个（变量类型）位置
    cout << "[Handle Arr2] index:" << i << " value: " << *(arr + i) << endl;
  }
}

/**
 * @brief const 关键词 不可修改
 */
void learn_const()
{
  const int num = 5;
  const int arr[5] = {0, 1, 2, 3, 4};
  const int *p1 = &num;
  // *p1 = 3; // 错误的写法 const 不能被修改
  cout << "Address is: " << p1 << "value is " << *p1 << endl;
  // 声明一个不可改变的地址，指向不可改变的值
  const int *const p2 = &num;
}

/**
 *  *号永远与指针配合，*+指针就是取指针的值
 *  &号永远与值配合，&+变量就是取变量的内存地址 */
void learn_pointer()
{
  int a = 5;
  int *p1 = &a;
  cout << "Address is: " << p1 << " value is " << *p1 << " a is: " << a << endl;
  *p1 = 3;
  cout << "Address is: " << p1 << " value is " << *p1 << " a is: " << a << endl;
  a = 2;
  cout << "Address is: " << p1 << " value is " << *p1 << " a is: " << a << endl;
}

void learn_arr_pointer(const int * start, const int * end)
{
  for (const int * pt = start; pt != end; pt++)
  {
   cout << *pt << endl; 
  }
}

int arr_add (const int * start, const int * end)
{
  int sum = 0;
  const int * pt = start;
  for (; pt != end; pt++)
  {
    sum += *pt;
  }
  
  return sum;
}

int main(int argc, char const *argv[])
{
  const short MAX = 5;
  int arr[MAX] = {1, 2, 4, 8, 16};
  cout << "Arr address is: " << arr << endl;
  cout << "Arr size is: " << sizeof(arr) << endl;
  handleArr(arr, MAX);
  handleArr2(arr, MAX);
  learn_const();
  learn_pointer();
  learn_arr_pointer(arr, arr + 3);
  int sum = arr_add(arr, arr+ MAX);
  cout << sum <<endl;
  return 0;
}
