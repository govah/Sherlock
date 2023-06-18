// 5+10+15 ... +100
#include <iostream>
using namespace std;
int main ()
{
  int sum;
  for(int i = 0; i <= 100; i+=5){
      cout << i << " ";
      sum = i + sum;
  }
  cout <<  " = " <<sum;

}
