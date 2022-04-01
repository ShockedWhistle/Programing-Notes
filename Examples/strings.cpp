#include <iostream>
#include <string>

using namespace std;

int main()
{

    string phrase = "You \"m"; // \ escapes and allows stuff
    phrase[0] = 'T';
    cout << phrase.substr(1, 1); 
    /*
    length() 
    []index of will return character
    find( What ya lookin for , index to start at )
    substr( when to start , how many characters you want to grab )
    */

}

void reverse(string number){
    
    char revrse[100];
    for(int i=1; i <= number.length(); i++){
        number[number.length()-i];
    }
    
}