// Description: Two players start from zero and alternatively add a number from one to ten to the sum, the plyer who reaches 100 first wins.
// Author: Jessica Wagih Wadie
// version: 3.0
// Date: march, First


#include <iostream>
#include <limits>

using namespace std;

int main() {   
    int total=0;
    int x;
    int y;

    // display a message to users to understand the concept of the game
    cout << "Each player must enter any number from 1 to 10, the one reaches 100 first wins" << endl <<"Total= 0" << endl;

    // the main loop
    while(true) {

        cout << "Player one: enter a number from 1 to 10: ";
        // check the validity of the number
        while(!(cin >>x) || x>10 || x<1){
            cout << "Error: please enter a number from 1 to 10: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    
        // add the number to the total
        total=total+x;
        cout << "Total= " << total << endl;
        // check if the game is won or not yet
        if(total==100){
            cout << "Player one is the winner" << endl;
            break;
        }
        // check if the game is over or not
        if(total>100){
            cout << "You have Exceeded 100, Game Over!" << endl;
            break;
        }

        // apply the same for the second player
        cout << "Player two: enter a number from 1 to 10: ";
        while(!(cin >>y) || y>10 || y<1){
            cout << "Error: please enter a number from 1 to 10: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        total=total+y;
        cout << "Total= " << total << endl;

        if(total==100){
            cout << "Player two is the winner" << endl;
            break;
        }
        if(total>100){
            cout << "You have Exceeded 100, Game Over!" << endl;
            break;
        }
    }
    return 0;
}
