/**
 * @file flower_number.cpp  
 * @author Amber (anborong@outlook.com)
 * @brief 
 * @version 0.1
 * @date 2022-08-27
 * 
 * 求水仙花数
 * 
 * 如：
 * 
 * 1^3 + 5^3 + 3^3 = 153
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void print(string str)
{
  cout << str << endl;
}


int main(int argc, char const *argv[])
{
  unsigned short number = 123;
  while (number <= 999)
  {
    unsigned short a = number % 10;
    unsigned short b = number % 100 / 10;
    unsigned short c = number % 1000 / 100;
    if ( ( pow(a, 3) + pow(b, 3) + pow(c, 3))  == number ) {
      print(to_string(number));
    }
    number++;
  }
   
  return 0;
}
