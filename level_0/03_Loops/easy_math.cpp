// In this problem, you will be given two numbers x
//  and y
// .

// Print the greatest common divisor between the given numbers.

// Note: The greatest common divisor (GCD) of two or more integers, which are not all zeroes, is the largest positive integer that divides each of the integers.

// For example:

// the GCD of 8
//  and 12
//  is 4
// , because the numbers that divide both 8
//  and 12
//  are (1,2,4)
//  and 4
//  is the largest one .

// Input
// Only one line containing two numbers x
//  and y
//  (1≤x,y≤103)
// .

// Output
// Print the GCD of x
//  and y
// .

// Examples
// InputCopy
// 5 10
// OutputCopy
// 5
// InputCopy
// 3 7
// OutputCopy
// 1
// InputCopy
// 16 8
// OutputCopy
// 8
// InputCopy
// 10 10
// OutputCopy
// 10

#include <iostream>
using namespace std;
int main() {
    int x, y;
    cin >> x >> y;

    while(y != 0){
        int GOD = x % y;
        x = y;
        y = GOD;
    }
    cout << x;
    return 0;
    
}