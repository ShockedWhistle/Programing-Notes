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

    int b[5]; // Stored in memory as one big block and since ints are 4 bytes each then you can use a pointer and a bit of math to get diffrent numbers stored in the array
    b[0] = 0;

    int c[5][5]; // These are stored as different arrays so 
    int *j[5] = b; // This will return a pointer to a 1 D array of 5 ints
    // j + 1  or  &b[1]  or  *(b + 1) would then return the address of the next array in the 2 D array
    // *(b + 1) + 2  or  b[1] + 2  or  &b[1][2] would then return the address of the integer in the second array in the 2 D array index of 2 so it would be the same as accesing [1][2] in the base array
    // *(&b + 1) would then return the int of [0][1]

    

    return 0;
}