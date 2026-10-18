// Ethar and Jana have A
//  and B
//  balls, respectively.

// Ethar wants to put all of her A
//  balls into some boxes such that every used box contains exactly B
//  balls.

// Jana wants to put all of her B
//  balls into some boxes such that every used box contains exactly A
//  balls.

// They may use any positive number of boxes.

// A person succeeds if all of their balls can be distributed without leaving any balls outside the boxes.

// Determine whether at least one of them can succeed.

// If at least one of them can succeed, print YES. Otherwise, print NO.

// Input
// The only line contains two integers A
//  and B
//  (1≤A,B≤106)
//  — the number of balls Ethar and Jana have, respectively.

// Output
// Print YES if at least one of them can distribute all of their balls according to the rules.

// Otherwise, print NO.
#include <iostream>
using namespace std;
int main(){
    int x, y;
    cin >> x >> y;

    if(x % y != 0){
        if(y % x == 0)
            cout << "YES";
        else
            cout << "NO";
    }
    else
      cout <<" YES";
}