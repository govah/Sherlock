#include <iostream>

using namespace std;

int main()
{
    int counter = 0;
    int even = 0;
    while(counter < 10){
        counter++;
        int num;
        cout << counter << ". "<<"your number: ";
        cin >> num;
        if(num % 2 == 0){
            even++;
        }
    }
    cout << "even" << even;
}