#ifndef __STOCK00_H_

#define __STOCK00_H_

#include <string>

class Stock
{
private:
  std::string company;
  long shares;
  double shares_val;
  double total_cal;
  void set_tot() { total_cal = shares * shares_val; }

public:
  void acquire(const std::string &co, long n, double pr);
  void buy(long num, double price);
  void sell(long num, double price);
  void update(double price);
  void show();
};
#endif