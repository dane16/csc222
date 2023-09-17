#include<iostream>
using namespace std;

void sequence(int n)
{
    while (n != 1) {
        cout << n << endl;
        if (n%2 == 0) {
            n = n /2;
        } else {
            n = n * 3 + 1;
        }
        
    }
}

int main() {
    sequence(3);
    sequence(6);
    sequence(9);
    return 0;
}