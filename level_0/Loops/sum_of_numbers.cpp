// You are given n integers; compute their sum.

// Input
// The first line is a single integer n
//  (1≤n≤2⋅105)
// .

// On the second line, there are n integers ai (1≤ai≤109)

// Output
// On a single line, output the sum.

// Examples
// InputCopy
// 6
// 2 4 3 1 1 5
// OutputCopy
// 16
// InputCopy
// 3
// 1 1 1
// OutputCopy
// 3
#include <iostream>
using namespace std;
int main(){
    int t;
    cin>> t;

    long long sum=0;

    for(int i = 1; i <= t ; i++){
        long long n;
        cin>> n;
        sum=sum + n;
    }
    
    cout<< sum;

}