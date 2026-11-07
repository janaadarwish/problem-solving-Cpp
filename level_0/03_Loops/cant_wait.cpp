// Once a day, a problem solver saw a number n
// . Being a clever problem solver, he wants to sum the digits of this number n
// . He can't wait to do this , can you help him ? ♡
// .

// Input
// Only one integer n
//  (1≤n≤109)
// .

// Output
// Print the sum of digits of n
// .

// Example
// InputCopy
// 9512
// OutputCopy
// 17
// Note
// First Sample:

// The sum of digits of 9512
//  is : 9
//  + 5
//  + 1
//  + 2
//  =
//  17
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    int sum=0;

    while(n !=0){
        int digit = n % 10;
        sum += digit;
        n = n / 10;
    }

    cout << sum;
    return 0;
}