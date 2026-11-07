// A calculator performs one arithmetic operation on two integers and displays the result.

// However, sometimes the displayed result may be incorrect.

// You are given an expression containing two integers A
//  and B
// , an operator S
// , an equality sign Q
// , and a displayed result C
// . The operator S
//  can be +, -, or *, and Q
//  is the equality sign =.

// The expression will be in one of the following forms:

// A+B=C
// , A−B=C
// , or A∗B=C
// .

// Determine whether the displayed result is correct. If it is, print "Yes". Otherwise, print the correct result of the operation.

// Input
// Only one line containing the expression: A
// , S
// , B
// , Q
// , and C
// , respectively (0≤A,B≤100
// , −105≤C≤105
// ), where S
//  can be one of the characters +, -, or *, and Q
//  is the character =.

// Output
// Print "Yes" if the displayed result is correct. Otherwise, print the correct result of the operation.
#include <iostream>
using namespace std;
int main(){
    int A, B, C;
    char S, Q;
    cin >> A >> S >> B >> Q >> C;
    int sum = A + B;
    int product = A * B;
    int diff= A-B;
    if(S=='+'){
        if(C == sum)
           cout << "Yes";
        else
           cout << sum;
    }
   else if(S=='*'){
        if(C==product)
           cout << "Yes";
        else
           cout << product;
    }
    else if(S=='-'){
        if(C==diff)
           cout << "Yes";
        else
           cout << diff;
    }
}