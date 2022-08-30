#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
  char ch;
  unsigned int count = 0;
  string name;
  while (cin.get(ch))
  {
    cout << ch;
    ++count;
  }
  cout << count << endl;
}
