// You are given n
//  integers; compute their product. It's guaranteed that the product can fit in the long long data type.

// Input
// The first line is a single integer n
//  (1≤n≤2⋅105)
// .

// On the second line, there are n
//  integers ai
//  (1≤ai≤109)
// .

// Output
// On a single line, output the product.
#include <iostream>
using namespace std;

int main(){
    long long t;
    cin>> t;

    long long product =1 ;

    for(int i = 1; i <= t ; i++){
        long long n;
        cin>> n;
        product = product * n;
    }
    
    cout<< product;

}