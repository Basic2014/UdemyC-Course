
#include <iostream>
#include <string>
#include "I_Printable.h"

using namespace std;

std::ostream &operator<<(std::ostream &os, const I_Printable &obj)
{
  obj.print(os);
  return os;
}
