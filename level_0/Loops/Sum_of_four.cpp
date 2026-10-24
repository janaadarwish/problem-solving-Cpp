// This is the easy version of the problem. The difference between the two versions is the constraints

// Given an integer n (0≤n≤100)
//  print the number of solutions for the given equation
// a+b+c+d=n
// such that
// |a|≤n,|b|≤n,|c|≤n.

// d
//  can be any integer.

// Input
// one integer n (0≤n≤100)
// .

// Output
// the number of solution for the equation.

// Examples
// InputCopy
// 0
// OutputCopy
// 1
// InputCopy
// 1
// OutputCopy
// 27
// InputCopy
// 2
// OutputCopy
// 125
// Note
// For the first test case, the only solution is:

// a = 0, b = 0, c = 0, d = 0.
// For the second test case, all possible solutions are:

// a = -1, b = -1, c = -1, d = 4.
// a = -1, b = -1, c = 0, d = 3.
// a = -1, b = -1, c = 1, d = 2.
// a = -1, b = 0, c = -1, d = 3.
// a = -1, b = 0, c = 0, d = 2.
// a = -1, b = 0, c = 1, d = 1.
// a = -1, b = 1, c = -1, d = 2.
// a = -1, b = 1, c = 0, d = 1.
// a = -1, b = 1, c = 1, d = 0.
// a = 0, b = -1, c = -1, d = 3.
// a = 0, b = -1, c = 0, d = 2.
// a = 0, b = -1, c = 1, d = 1.
// a = 0, b = 0, c = -1, d = 2.
// a = 0, b = 0, c = 0, d = 1.
// a = 0, b = 0, c = 1, d = 0.
// a = 0, b = 1, c = -1, d = 1.
// a = 0, b = 1, c = 0, d = 0.
// a = 0, b = 1, c = 1, d = -1.
// a = 1, b = -1, c = -1, d = 2.
// a = 1, b = -1, c = 0, d = 1.
// a = 1, b = -1, c = 1, d = 0.
// a = 1, b = 0, c = -1, d = 1.
// a = 1, b = 0, c = 0, d = 0.
// a = 1, b = 0, c = 1, d = -1.
// a = 1, b = 1, c = -1, d = 0.
// a = 1, b = 1, c = 0, d = -1.
// a = 1, b = 1, c = 1, d = -2.

#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    cout << ((2*n)+1)*((2*n)+1)*((2*n)+1);
}