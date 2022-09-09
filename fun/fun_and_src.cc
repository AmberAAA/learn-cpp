/**
 * @file fun_and_src.cc 遍历字符串
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

unsigned int find_char(const char *str, char a)
{
  int index = 0;
  while (*str) {
    if (*str == a) {
      break;
    } else {
      str++;
    }
    index++;
  }
  
  return index;
}

char * buildString(char a, int n)
{
  char *pstr = new char(n + 1);
  while (n-- > 0)
  {
    char * temp = pstr + n;
    *temp = a;
  }
  
  return pstr;
}

int main(int argc, char const *argv[])
{
  unsigned index = find_char("Amber", 'f');
  // cout << index << endl;
  cout << buildString('V', 4) << endl;
  
  return 0;
}
