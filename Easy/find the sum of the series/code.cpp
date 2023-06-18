//find the sum of the series 1/2 + 2/3 + 3/4 + 4/5 ... + 99/100

#include <iostream>

using namespace std;

int main()
{
    float n1 = 1, res = 0, sum = 0;
    for(float i = 2; i <= 100; i++){
      res = n1 / i;
      sum = res + sum;
      cout << n1 << "/"<< i << "= " << res << " + ";
      n1 = n1 + 1;
    }
    cout << "\n" << "SUM: "<<sum;
}
