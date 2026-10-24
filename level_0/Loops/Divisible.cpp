// Given nv, print n
//  numbers such that their sum is divisible by n
//  and all the numbers are between 0
//  and 109
//  inclusive, and at least one number is larger than 0.

// Note that this problem may have multiple solutions; if you print any valid solution, it will be accepted.

// Input
// The input only contains n
//  (1≤n≤105)
// .

// Output
// Print n
//  integers such that the sum of all integers is divisible by n
//  and all integers lie between 0
//  and 109
//  inclusive.

// Examples
// InputCopy
// 5
// OutputCopy
// 5 5 5 5 5 
// InputCopy
// 3
// OutputCopy
// 1 2 3
// InputCopy
// 4
// Output
#include <iostream>
using namespace std;
int main(){
    int n, i = 1 ;
    cin >> n ;
    for( i ; i <= n ; i++){
        cout << n << " ";
    }
    return 0 ;
}