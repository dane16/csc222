#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    cout << "First Line." << endl;
    new_line());
    cout << "Second Line." << endl;
    return 0;
}

void new_line()
{
    cout << endl;
}

/*
The program would not run correctly as the void function
should be before the main function.
*/