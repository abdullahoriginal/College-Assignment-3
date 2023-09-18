#include <iostream>
using namespace std;

int main() {
    int a=6;
    int b=5;
    int x;
    cout<<"Value of First number Before: "<< a << endl;
    cout<<"Value of Second number Before: "<< b << endl;
    x=a;
    a=b;
    b=x;
    cout<<"Value of First number After: "<< a << endl;
    cout<<"Value of Second number After: "<< b << endl;
    return 0;
}