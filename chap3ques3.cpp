/*
The program below (without +7) will have no result
when ran.
*/

#include<iostream>
using namespace std;

void print_nothing() 
{
    cout << 'this will print nothing' << endl;
}

int main()
{
    print_nothing() + 7;
    return 0;
}

/*
With +7, an error will occur.
*/