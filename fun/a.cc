/**
 * @file a.cc  函数定义 函数原型
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-08-30
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>

using namespace std;

void simple ();

/**
 * @brief 返回最大值
 * 
 * 函数的原型不需要给出型惨；给出类型即可；
 * 
 * @return int 
 */
int bigger (int, int);

/**
 * 可以使用...表示函数并不需要参数列表
 * 
 * @param ... 
 */
void other_fun(...);

int main(int argc, char const *argv[])
{
  simple();
  return 0;
}


void simple ()
{
  cout << "Function simple called!" << endl;
}