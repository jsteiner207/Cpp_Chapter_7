//Ch7AppE02.cpp
//Displays the total monthly sales made in four regions
//Created/revised by <your name> on <current date>

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int region = 0;
    int sale = 0;
    int b = 0;
    while (b < 4) {
        cout << "enter the monthley sales";
        cin >> sale;
        region = region + sale;
        b = b + 1;
    }
    cout << region << endl;



    return 0;
}   //end of main function
