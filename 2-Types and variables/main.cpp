#include <iostream>
#include <cstdlib>

//-- These variables are a file scope and can be accessed anywhere in the file
int ab = 25;
int ac = 35;

int main(int argc, char** argv) {

    //-- These are basic types and how to assign them and use them in arithmetic
    //-- All of these variables are in a local scope and can only be accessed within int main()

    int a = 5;
    int b = 10;
    int c = a + b;

    float d = 1.0;
    float e = 1.3242342342;
    float f = d + e;

    char g = 'a';
    char h = 'b';
    char i = g + h;

    short j = 15;
    short k = 25;
    short l = j + k;

    long m = 7912370127;
    long n = 997219312;
    long o = m + n;


    //Example usage of ab and ac in this scope
    int p = ab + ac;


    return 0;
}
