#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main(){

ofstream image;
image.open("image.ppm");

if(image.is_open()){
    // Place header information
    image << "P3" << endl;
    image << "250 250" << endl;
    image << "255" << endl;


    for(int y = 0; y< 250; y++){
        for(int x=0; x<250; x++){
            int ranR = rand() + 1 % 255;
            int ranG = rand() + 1 % 255;
            int ranB = rand() + 1 % 255;
            image << ranR << " " << ranG << " " << ranB << endl;
        }
    }
}
image.close();

    return 0;
}