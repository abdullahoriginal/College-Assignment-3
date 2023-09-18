#include <iostream>
using namespace std;

int main() {
    cout<<"Input the Radius of the Circle: ";
    float r;
    double pi=3.14;
    cin>> r;
    cout<<"The Circumference of the Circle is: "<< 2*pi*r << endl;
    cout<<"The Area of the Circle is: "<< pi*r*r << endl;
    return 0;
}