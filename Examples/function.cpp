#include <iostream>
#include <cmath>

using namespace std;

void fun(){ // Defines a function named "fun" that returns nothing
    cout << "Hello" << endl;
}

double cube(double num){ // Defines a function that will return a double and takes the double num as a varriable
    double result = num * num * num;
    return result; // Defines what the function will spit out and ends the function
}

int main(){

    fun(); // Calls the "fun" function

    double answer = cube(5.0);

    cout << answer;

    return 0;
}