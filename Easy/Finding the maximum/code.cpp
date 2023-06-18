#include <iostream>
using namespace std;
int main(){
    int counterNum = 0 , num[10], max;
    max = num[0];
    for(int i=0; i < 10; i++){
        cout << "your number: ";
        cin >> num[i];
        if(num[i] > max){
            max = num[i];
        }
    }
    cout << max;

}