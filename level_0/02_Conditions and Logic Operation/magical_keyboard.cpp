// Medo has a magical keyboard which reverse the case of the letters you are writing. So that if the letter is lowercase it is converted to uppercase letter and vice versa.

// Medo will write one letter C
// . Given that letter what will be the output?
#include <iostream>
using namespace std;
 int main(){
    char C;
    cin >> C;
    if(C>='a' && C<='z'){
        cout << char(C-32);
    }
    else{
        cout << char(C+32);
    }
 }