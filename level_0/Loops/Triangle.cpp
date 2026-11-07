// Given a number N
// . Print a left angled triangle that has N
//  rows.

// For more clarification, see the example below.

// Input
// The first line contains only one integer n
//  (1≤n≤100)
// .

// Output
// Output the required triangle.

// Example
// InputCopy
// 5
// OutputCopy
// *
// **
// ***
// ****
// *****

#include <iostream>
using namespace std;
int main(){
    int rows;
    cin >> rows;
    
    for(int i = 1; i <= rows ; i++){
        for(int j = 1; j <= i ; j++){
            cout << "*";
        }
        cout << '\n';
    }
}