// Pitch-pot is a game that requires players to throw arrows to some kind of board to gain points.

// Ouda plays this game on a square board which is divided into 4
//  quarters. The board is represented as a 2D plan as shown in the figure below. Ouda will close his eyes and throw an arrow towards the board.

// Given two numbers x,y
//  which donate coordinates of where the arrow will hit the board. Determine in which quarter does it belong.

// Note:

// Print "Q1", "Q2", "Q3", "Q4" according to the quarter in which the point belongs to.
// Print "Origem" If the point is at the origin.
// Print "Eixo X" If the point is over X axis.
// Print "Eixo Y" if the point is over Y axis.
#include <iostream>
using namespace std;
int main(){
    double x,y;
    cin >> x >> y;
    if( x == 0 && y == 0){
        cout << "Origem";
    }
    else if(x == 0){
        cout <<"Eixo Y";
    }
    else if(y == 0){
        cout <<"Eixo X";
    }
    else if(x > 0 && y > 0){
        cout << "Q1";
    }
    else if(x > 0 && y < 0){
        cout << "Q4";
    }
    else if (x < 0 && y > 0)
        cout << "Q2";
    else{
        cout<< "Q3";
    }
    return 0;
}