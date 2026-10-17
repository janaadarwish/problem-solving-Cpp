// Input
// Only one line contain two letters p1
//  , p2
//  —The letters will be one of three things only

// R : Rock.
// P : Paaper.
// // S : Scissors.
// Output
// If the first player wins, print 'p1'. If the second player wins, print 'p2'. If no one wins, print a 'draw'
#include <iostream>
using namespace std;
int main(){
    char p1, p2;
    cin >> p1 >> p2;
    if(p1==p2){
        cout<<"draw";
    }
    else if(p1=='R'){
        if(p2=='P'){
            cout << "p2";
        }
        else{
            cout << "p1";
        }
    }
    else if(p1=='S') {
        if(p2=='P'){
            cout << "p1";
        }
        else{
            cout << "p2";
        }
    }
    else{
        if(p2=='R')
           cout<<"p1";
        else
           cout <<"p2";
    }
}