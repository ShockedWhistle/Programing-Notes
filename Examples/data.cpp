#include <iostream>
#include <vector>
using namespace std;

int main()
{

    char grade = 'A'; // Stores A single character
    string phrase = "Stuffs"; // Strings
    int integer = 1; // Intagers negatives too 
    float flo = 1.02; // Floats store decimal numbers
    double dou = 1.00000000006; // Doubles store gigantic decimals
        bool isMale = true; // Booleans

    int luckyNums[] = {4, 8, 15, 23}; // Arrays

    luckyNums[0] = 8;
    int array[3] = {1, 2, 8}; //Says it can only store 3 variables

    cout << luckyNums[0] << endl;;

    int numberGrid[3][2] = { // Nested Arrays
        {1, 2}, {3, 4}, {5, 6}
    };
    int sizeNum = sizeof(array); // Sizeof(array) outputs the length if array.
    cout << sizeNum << "Size" << endl;

    cout << numberGrid[0][1] << endl;

    int abba = 19;
    cout << &abba << endl; // Displays where the variable is stored in memory in Hexadecimal called a Pointer
    
    int *pAge = &abba; // Saves the Pointer for the Int abba if doing for another data type the data type must be the same as the pointer one
    cout << *pAge << endl; // Derefrencing the pointer to display the value at the pointer

    vector<double> values; // Needs to include vectors and sets everything as zero on default .size() can be used
    vector<int> stuffs(10); // Sets a vector with 10 zeros in it
    vector<string> words = {"Neeto", "Cool"}; // Sets a vector with these two strings in it
    values.push_back(54); // Inserts something to the back of the vector
    values.pop_back(); // Takes out the last element


    return 0;
}