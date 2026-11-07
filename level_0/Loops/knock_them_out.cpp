// In a world full of monsters, Super Ouda is a famous superhero who saves people. Fighting monsters do not stop all day, so Ouda keeps on fighting until some strong monster defeats him.

// You will be given number X
//  which represents Ouda's power and infinite set of numbers where each number represents the power of a single monster.

// For each monster, print "Win" if Ouda's power is bigger than or equal to the monster's, otherwise print "Lose" and terminate the program.

// Note : It's guaranteed that at least one number of the input will be greater than X
// .

// Input
// The first line contains X
//  (0≤X≤1018)

// Then several lines, each contains a number Z
//  (0≤Z≤1018)

// Output
// Print "Win" if Ouda's power is bigger than or equal to the monster's, otherwise print "Lose".

// Example
// InputCopy
// 1000
// 5
// 100
// 999
// 1000
// 1001
// 88
// 99
// OutputCopy
// Win
// Win
// Win
// Win
// Lose

#include <iostream>
using namespace std;

int main() {
    long long X, input;
    cin >> X;

    while (cin >> input) {
        if (input <= X)
            cout << "Win\n";
        else {
            cout << "Lose\n";
            break;
        }
    }

    return 0;
}
