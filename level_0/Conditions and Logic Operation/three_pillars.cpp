// Ganna has discovered an ancient vault protected by three security pillars.

// To unlock it, she must enter three integers A
// , B
// , and C
// , along with a character Ch
// . The code is checked against the following rules, in order:

// Pillar 1: The sum A+B+C
//  must be divisible by 3
// , but not divisible by 5
// .

// Pillar 2: Ch
//  must be an uppercase English letter, and the sum of its ASCII value and integer A
//  must be even.

// Pillar 3: The numbers must either form a Pythagorean triple in any order, meaning

// A2+B2=C2,A2+C2=B2,orB2+C2=A2,

// or one number must be equal to the product of the other two:

// A×B=C,A×C=B,orB×C=A.

// The pillars are checked in the order 1, 2, 3. If a pillar fails, checking stops immediately and the first failed pillar is reported.

// If all three pillars are passed, the vault is unlocked.

// Input
// The only line contains three integers A
// , B
// , and C
// , followed by a character Ch
// .

// 1≤A,B,C≤109

// Ch
//  is a single uppercase or lowercase English letter.

// Output
// If all three pillars are passed, print

// Unlocked

// Otherwise, print

// Pillar X Failed

// where X
//  is the number of the first pillar that fails.
#include <iostream>
using namespace std;
int main(){
    int A , B , C;
    char Ch;
    cin >> A >> B >> C >> Ch;
    int sum= A+B+C;
    bool pillar1 = (sum % 3==0) && (sum % 5 !=0);
    bool pillar2 = ('A' <= Ch <= 'Z') && ((Ch + A) % 2==0);
    int pyth1= (A*A)+(B*B);
    int pyth2= (A*A)+(C*C);
    int pyth3= (C*C)+(B*B);
    bool pillar3 = ((A*B==C) || (A*C==B) || (B*C==A)) ||
     ((pyth1==(C*C) || (pyth2==(B*B)) || (pyth3==(A*A))));
    if(pillar1==true){
        if(pillar2==true){
            if(pillar3==true)
                cout<< "Unlocked";
            else
                cout<< "Pillar 3 Failed";
        }
        else
            cout<< "Pillar 2 Failed";
    }
    else
        cout<<"Pillar 1 Failed";

}