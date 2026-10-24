// Gom3a was studying Mathematics with his friends when they found an easy task.

// Given N
//  numbers. Count how many of these values are even, odd, positive and negative.

// Input
// First line contains one number N
//  (1≤N≤105) number of values.

// Second line contains N
//  numbers (−105≤Xi≤105)

// Output
// Print four lines with the following format:

// First Line: "Even: X
// ", where X is the count of even numbers in the given input.

// Second Line: "Odd: X
// ", where X is the count of odd numbers in the given input.

// Third Line: "Positive: X
// ", where X is the count of positive numbers in the given input.

// Fourth Line: "Negative: X
// ", where X is the count of negative numbers in the given input.

// Example
// InputCopy
// 5
// -2 0 -5 -12 9
// OutputCopy
// Even: 3
// Odd: 2
// Positive: 1
// Negative: 3
// Note
// Even Numbers are : 0,−2,−12

// Odd Numbers are : −5,9

// Positive Numbers are : 9

// Negative Numbers are : −2,−5,−12

#include <iostream>
using namespace std;
int main(){
    int n =0 ;
    cin >> n;

    int evenCount = 0, oddCount = 0;
    int positiveCount = 0, negativeCount = 0;

    for(int i = 1; i <= n ; i++){

        int x;
        cin >> x;
        
        if(x==0)
          evenCount++;

        else if(x % 2 == 0){
            evenCount++;

            if(x > 0)
               positiveCount++;
            else
              negativeCount++;
        }

        else{
            oddCount++;

            if(x > 0)
               positiveCount++;
            else
              negativeCount++;
        }
    }
    cout<< "Even: " << evenCount << '\n';
    cout<< "Odd: " << oddCount << '\n';
    cout<< "Positive: " << positiveCount << '\n';
    cout<< "Negative: " << negativeCount << '\n';
}