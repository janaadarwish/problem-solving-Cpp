// Given two person names. Each person has {"first name" + "second name"}

// Determine whether they are siblings or not.

// Note: The two persons are siblings if they share the same second name.

#include <iostream>
using namespace std;

int main(){
    string F1, S1, F2, S2;
    cin >> F1 >> S1 >> F2 >> S2;

    if(S1==S2){
        cout << "Siblings";
    }
    else{
        cout << "Not Siblings";
    }
}