#include<iostream>
using namespace std;

double overloaded_function(double x, double y) {
    return(x + y);
}

int overloaded_function(int x, int y) {
    return(x * y);
}

double overloaded_function(double x, double y, double z) {
    return(x + y + z);
}

int overloaded_function(int x, int y, int z) {
    return(x - y - z);
}

double overloaded_function(double a, int b) {
    return(a - b); 
}

int main() {
    cout << overloaded_function(2.0, 4.2) << endl;
    cout << overloaded_function(5, 3) << endl;
    cout << overloaded_function(2.0, 5.9, 1.5) << endl;
    cout << overloaded_function(20, 7, 8) << endl;
    cout << overloaded_function(20.3, 5) << endl;
    return 0;
}