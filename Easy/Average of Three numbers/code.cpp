/* cpp program to compute Avarage of Three Numbers*/
#include <iostream>
using namespace std;

int main(){
    int num1,num2,num3;
    cout << "Enter Number: ";
    cin >> num1;
    cout << "Enter Number: ";
    cin >> num2;
    cout << "Enter Number: ";
    cin >> num3;
    float avg = (num1 + num2 + num3) / 3;
    cout << avg;
}