#include<iostream>
using namespace std;

void print_twice(char phil) {
    cout << phil << phil << endl;
}

int main() {
    int argument = 5;
    print_twice(argument);
    return 0;
}
/*
Using an integer results in no result after
runnung the program, This also applies to double.
*/

int main() {
    string argument = 'try me';
    print_twice(argument);
    return 0;
}
/*
The program will not run as it returns an
error that std::string is not convertible
to char.
*/

