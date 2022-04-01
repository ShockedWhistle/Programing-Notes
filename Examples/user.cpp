#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int age;
    string name;

    cout << "Enter your name: ";
    getline(cin, name); // Gets text input from user and stores it in the name string

    cout << "Enter your Age: ";
    cin >> age; // Gets number user input and stores it in age

    cout <<"Hello " << name << " you are " << age << " years old.";

    return 0;

}