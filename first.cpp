#include <iostream>
#include <string>
#define PI 32;
using namespace std;

void my_name ()
{
  cout << "Hello" << endl;
}

int main(int argc, char const *argv[])
{

  int a = 12 + PI;

  const string name = "Amber";

  // 2个字节
  short a1 = 1 << 14;

  unsigned int a2 = 1 << 31;;

  long a3 = 123;

  // 8个字节
  long long  a4 = 123;

  float b1 = 3.0f;

  double b2 = 3.14;

  char char1 = 'A';

  

  char1 = 42;

  // c风格的字符串
  char str1[] = "Amber Hello!";
  for (size_t i = 0; i < 12; i++)
  {
    /* code */
    cout << i << "\t" << str1[i] << endl;
  }

  string my_str = "Amber";

  bool b = 1;


  cout << "Hello World! \a " << sizeof(b) <<  endl;

  my_name();


  char str2[] = "";
  cin >> str2;

  cout << "Input is\t" << str2 << endl;


  short short_count = 0;
  cin >> short_count;

  cout << "Input is\t" << short_count << endl;

  return 0;
}

