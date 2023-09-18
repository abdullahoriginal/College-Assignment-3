#include <iostream>
using namespace std;

int main() {
    
    // This program shows the Data taken from User.
    string name;
    int age;
    string address;
    cout<<"Enter your Name"<< endl;
    getline(cin,name);
    cout<<"Enter your Age"<< endl;
    cin>>age;
    cout<<"Enter your Address"<< endl;
    getline(cin,address);
    
    // now Displaying the Data
    cout<< name <<endl;
    cout<< age <<endl;
    cout<< address <<endl;
}