#include <iostream>
using namespace std;

int main() 
{
    float miles;
    cout<<"Enter the Distance in Miles: ";
    cin>>miles;
    float kilometers;
    kilometers=1.609*miles;
    cout<<kilometers;
    return 0;
}