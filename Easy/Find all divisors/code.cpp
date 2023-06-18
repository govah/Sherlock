#include <iostream>
using namespace std;

void findDivisor(int n){
    for(int i = 1; i <= n; i++){
        if (n % i == 0)
        {
            cout << i << " ";
        }
        
    }
}
int main(){
    int num;
    cin >> num;
    findDivisor(num);
}