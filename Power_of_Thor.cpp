#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 * ---
 * Hint: You can use the debug stream to print initialTX and initialTY, if Thor seems not follow your orders.
 **/
int main()
{
    int lightX; // the X position of the light of power
    int lightY; // the Y position of the light of power
    int initialTX; // Thor's starting X position
    int initialTY; // Thor's starting Y position
    cin >> lightX >> lightY >> initialTX >> initialTY; cin.ignore();
    int marginX=0,marginY=0;
    marginX=lightX-initialTX;
    marginY=lightY-initialTY;
    string result;
    // game loop
    while (1) {
        int remainingTurns; // The remaining amount of turns Thor can move. Do not remove this line.
        cin >> remainingTurns; cin.ignore();
        
        //x axis moving direction
        string xdirection=marginX==0?"":marginX>0?"E":"W";
        marginX+=marginX==0?0:marginX>0?-1:1;
        
        //y axis moving direction
        string ydirection=marginY==0?"":marginY>0?"S":"N";   // Write an action using cout. DON'T FORGET THE "<< endl"
        marginY+=marginY==0?0:marginY>0?-1:1;
        
        // A single line providing the move to be made: N NE E SE S SW W or NW
        cout <<ydirection<<xdirection<< endl;
    }
}
