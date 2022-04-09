#include <stdio.h>

using namespace std;

 void IncrementWithPointer(int *p){
     *p = (*p) + 1;
 }

int main(){
    // Pointers are variables that store the address of other variables
    // Pointers must be strong types because they can be used to Dereference the address stored

    int a;
    int *p; // Pointer to an integer 
    p = &a; //Assigns the pointer p to integer a
    a = 8;
    printf("%d\n",*p); // Prints the value of p
    *p = 12; // Dereferencing it redefines whatever p is pointed to 
    // sizeof(int) this will give the amount of bytes needed to make this variable on memory
    char *p0;
    p0 = (char*)p; // Typecasting

    IncrementWithPointer(p); // Increments the integer associated with the pointer p despite the function not returning anything

    

    return 0;
}