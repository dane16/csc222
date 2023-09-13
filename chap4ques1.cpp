#include<iostream>
using namespace std;

void countdown(int n) {
    if (n == 0) {
        cout << "Blastoff!" << endl;
    } else {
        cout << n << endl;
        countdown(n-1);
    }
}

int main()
{
    countdown(-1);
    return 0;
}

/* 
The result of using a negative value for the countdown function
results in a exception error regarding segmentation. 
*/