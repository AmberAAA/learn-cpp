/**
 * @file outfile.cc 练习文件的输出 
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
  char automobile[50];
  int year;
  double a_price,b_price;

  ofstream out_file;
  out_file.open("a.text");

  cout << "Enter the make and model of the automobile: ";
  cin.getline(automobile, 50);
  cout << "Enter the model year: ";
  cin >> year;
  cout << "Enter the original asking price: ";
  cin >> a_price;
  b_price = a_price * 0.913;


  cout << fixed;
  cout.precision(2);
  cout.setf(ios_base::showpoint);
  cout << "Make ane model: " << automobile << endl;
  cout << "Year:" << year << endl;
  cout << "Was asking $" << a_price << endl;
  cout << "Now asking $" << b_price << endl;


  out_file << fixed;
  out_file.precision(2);  // 控制浮点数的精度
  out_file.setf(ios_base::showpoint); // 控制数字的打印模式
  out_file << "Make ane model: " << automobile << endl;
  out_file << "Year:" << year << endl;
  out_file << "Was asking $" << a_price << endl;
  out_file << "Now asking $" << b_price << endl;

  out_file.close();
  
}
