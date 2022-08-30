#include <iostream>
#include <string>

using namespace std;

void learn_pointer ()
{
  double arr[5] = {21.1, 32.8, 23.6, 45.2, 23.6};
  double *pt = arr;
  cout <<"地址: " << pt << endl;
  cout << "值：" << *pt << endl;
  for (size_t i = 0; i < 5 ; i++)
  {
    cout << "Address: " << pt << ", Value: " << *pt << endl;
    ++pt;
  }
  
}

int main(int argc, char const *argv[])
{
  string name = "Amber";
  cout << "Size is " << name.size() << endl;

  for (size_t i = 0; i < name.size(); i++)
  {
    cout << name.at(i) << endl;
  }
  learn_pointer();
}

