#include<iostream>
using namespace std;

void compare(int a, int b) {
    if (a > b) {
        cout << a << " is greater than " << b << endl;
    } else if (a < b) {
        cout << a << " is less than " << b << endl;
    } else {
        cout << a << " is equal to " << b << endl;
    }
}

int main() {
    compare(5, 1);
    compare(2, 55);
    compare(2, 2);
    return 0;
}