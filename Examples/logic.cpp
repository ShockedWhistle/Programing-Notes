#include <iostream>
using namespace std;

void elif(){
    bool isMale = true;

    if(isMale = true){ // If statement && and || work too
        cout << "Male";
    }
    else if(!isMale){ // The ! is a negation
        cout << "not Male";
    }
    else{
        cout << "...but it was a boolean...";
    }
}

void switchl(){
    int dayNum = 2;
    string dayName;

    switch(dayNum){
        case 0: // In the case dayNum = 0 then...
            dayName = "sunday";
            break; // Stops the switch from continuing to check all varriables
        case 1:
            dayName = "Monday";
            break;
        default: // This will execute if no other case works
            dayName = "No clue";
            break;

    }
}

int whileloop(){
    int index=1;
    while(index <= 5){
        cout << index << endl;
        index++;
    }
    do{ // Starts a do while loop where it dose the code then checks the condition to see if it will continue
        cout << index << endl;
        index++;
        }
    while(index <= 5);
}

int forloop(){
    for(int i = 0; i <= 5; i++){ // Defines the int i puts the condition and then increments i after every loop
        cout << i << endl;
    }
}

int main()
{

    return 0;
}