#include<iostream>
using namespace std;

int main()
{

    string fName, lName;
    cout<<"Enter your first name: ";
    cin>>fName;
    cout<<"Enter your last name: ";
    cin>>lName;
    string name= fName+" " +lName;
    cout<<"Full Name :" <<name;

    return 0;
}
