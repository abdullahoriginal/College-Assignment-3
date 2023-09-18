#include <iostream>
using namespace std;

int main() {
    int digits[3];
    cout << "Enter three Digits, One at a Time: "<< endl;
    for (int i=0; i<3; ++i) {
        cout << "Digit " << i+1 << ": ";
        cin>> digits[i];
    }
    cout <<"Digits in Reverse Order: ";
    for (int i=2; i>=0; --i) {
        cout << digits[i] << " ";
    }
    return 0;
}