#include <iostream>
#include <string>
using namespace std;

void print(string str)
{
  cout << str << endl;
}

int main(int argc, char const *argv[])
{
  srand((unsigned long)time(NULL));
  print("猜数字游戏：\n请输入0-99以内的整数");

  unsigned short answer = rand() % 100;
  print("答案是" + to_string(answer));
  print("请输入:\t");

  while (true)
  {
    short int a = 0;
    cin >> a;
    if (a < answer)
    {
      print("小了！");
    }
    else if (a > answer)
    {
      print("大了！");
    }
    else
    {
      print("恭喜！");
      print("答案就是：" + to_string(answer));
      return 0;
    }
  }

  return 0;
}
