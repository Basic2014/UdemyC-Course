#include <iostream>
using namespace std;

void func_a();
void func_b();
void func_c();



void func_a()
{
  cout<<"Starts func_a\n";
  try
  {
    func_b();

  }
  catch(int &ex)
  {
    cerr<<"Exception caught in func_a\n";
  }

  cout<<"Ends func_a\n";

}
void func_b()
{
  cout<<"Starts func_b\n";
func_c();
cout<<"Ends func_b\n";

}

void func_c()
{
  cout<<"Starts func_c\n";
  throw 0;
  cout<<"Ends func_c\n";

}



int main()
{
try
{
  func_a();

}
catch(int &ex)
{
  cerr<<"Exception caught in main\n";
}
cout<<"end of main\n";
  return 0;
}
