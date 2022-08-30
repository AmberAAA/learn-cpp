/**
 * @file infile.cc  读取文件
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2022-08-30
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char const *argv[])
{
  ifstream in_file;
  in_file.open("a.text");

  char filename[50];

  while (in_file.getline(filename, 50))
  {
    cout << filename << endl;
    /* code */
  }

  return 0;
}
