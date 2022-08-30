#include <iostream>
#include <string>
using namespace std;

void print(string str)
{
  cout << str << endl;
}

bool str_is_eq(string str1, string str2)
{
  return str1 == str2;
}

int main(int argc, char const *argv[])
{
  string name;
  print("Input a string: ");
  cin >> name;
  int i, j;
  for (i = 0, j = name.size() - 1; i < j; i++, j--)
  {
    char temp = name[j];
    name[j] = name[i];
    name[i] = temp;
  }
  print(name);
  // bool a = str_is_eq(name, "eman");
  string name1 = "Amber";
  string name2 = "Amber";
  bool a = str_is_eq(name1, name2);
  cout << (a ? "相等" : "不相等") << endl;
  return 0;
}
