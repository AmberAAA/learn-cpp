/**
 * @file cin_fish.cc 计算每条鱼的平均重量
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-08-30
 * 
 * 假设每天最多调5条鱼，请计算每条鱼的重量
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>


using namespace std;


int main(int argc, char const *argv[])
{
  const int MAX = 5;
  double fish[MAX] = {};
  int num = 0;
  double weight = 0.0;
  while (num < MAX && cin >> fish[num])
  {
    cin.clear();
    cout << "#" << ++num << " weight is " << fish[num - 1] << endl;
  }
  double total = 0.0;
  for (auto f : fish) {
    total += f;
  }
  cout << "average: " << total / num << endl;
}
