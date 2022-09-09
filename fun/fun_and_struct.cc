/**
 * @file fun_and_struct.cc 函数与结构
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

struct travel_time
{
  int hour;
  int mins;
};

travel_time sum(const travel_time time1, const travel_time time2)
{
  travel_time time;
  time.mins = (time1.mins + time2.mins) % 60;
  time.hour = time1.hour + time2.hour + (time1.mins + time2.mins) / 60;
  return time;
}

void show_time(const travel_time *time)
{
  // 需要注意的是，这里传递的型参是指针而不是结构，所以这里读属性用的不是 . 而是 ->
  cout << "TIME IS: " << time->hour << ':' << time->mins << endl;
}

int main(int argc, char const *argv[])
{
  const travel_time time = {3, 12};
  cout << time.hour << endl;
  travel_time time1 = sum(travel_time{3, 45}, travel_time{2, 45});
  show_time(&time1);
  return 0;
}
