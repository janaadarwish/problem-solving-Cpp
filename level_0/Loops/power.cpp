// You are given two integers x and y calculate xy
//  ( x power y). It's guaranteed that the answer would fit in the long long data type. Assume 00=1

// Input
// The first line contains two integers x and y (0≤x,y≤104)

// Output
// Print the value of xy

// Examples
// InputCopy
// 2 2
// OutputCopy
// 4
// InputCopy
// 3 2
// OutputCopy
// 9
// InputCopy
// 0 0
// OutputCopy
// 1

#include <iostream>
using namespace std;
int main(){
    long long x, y;
    cin >> x >> y;
    long long power = 1;
    for(int i = 0; i < y ; i++){
        power = x * power;
    }
    cout << power;
}