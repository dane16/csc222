#include<iostream>
using namespace std;

void age(int age) {
    if (age > 16 && age < 65) {
    cout << "age is within the normal working age." << endl;
} else {
        cout << "age is not within the normal working age." << endl;
    }
}

int main() {
    age(25);
    age(15);
    age(71);
    return 0;
}