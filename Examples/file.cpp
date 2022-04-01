#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    // ifstream: Read from file
    // ofstream: Write to file
    string fileName = "./file.txt";
    ifstream inFile; // ifstream: Input ofstream: output xfstream: Both
    inFile.open(fileName);
    string line;
    string contents;
    if(inFile.is_open()){ // .isopen(): Checks if file is open returns boolean
        cout << fileName << " is Open" << endl;;
        while(getline(inFile, line)){
            contents += line;
            contents.push_back('\n');
        }
    }
    if(inFile.fail()){ // .fail(): Checks if file opining has failed returns boolean
        cout << "Fail" << endl;
    }

    inFile.close(); // .close(): Cloes the file
    cout << contents << endl;
    return 0;
}