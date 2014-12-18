//Ch7AppE10.cpp
//Displays the first 10 Fibonacci numbers
//Created/revised by <your name> on <current date>

#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int b = 0;
    int c = 1;
    int d = 0;

    for (int a = 0; a < 10; a = a + 1){
        cout << c << endl;
        d = c;
        c = c + b;
        b = d;

    }

    return 0;
}   //end of main function
