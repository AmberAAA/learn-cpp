#include <iostream>

#include "stock00.h"

void Stock::acquire(const std::string & co, long n, double pr)
{
  company = co;
  if (n < 0)
  {
    std::cout << "Number of shares cant be negative. "
      << company << "shares set to 0." << std::endl;
    shares = 0;
  }
  else
    shares = n;
  shares_val = pr;
  set_tot();
}

void Stock::buy (long num, double price)
{
  if (num < 0)
    std::cout << "Num cant be negative." << std::endl;
  else
  {
    shares += num;
    shares_val = price;
    set_tot();
  }
}
