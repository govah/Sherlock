// Fibonacci Series in C++: In case of fibonacci series, next number is the sum of previous two numbers for example 0, 1, 1, 2, 3, 5, 8, 13, 21 etc. The first two numbers of fibonacci series are 0 and 1.
#include <iostream>
using namespace std;

int main(){
    int n1=0,n2=1,n3,number;
    cin >> number;
    cout << n1 << " " << n2;
    for(int i = 2; i < number; i++){
        n3 = n1 + n2;
        cout << n3 << " ";
        n1 = n2;
        n2 = n3;
    }
}