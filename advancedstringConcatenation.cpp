#include<iostream>
using namespace std;

int main()
{
    int ncfn, ncln;
    cout<<"Enter the number of characters in your first name (no space): ";
    cin>>ncfn;
    cout<<"Enter the number of characters in your last name (no space): ";
    cin>>ncln;
    char fName[ncfn];
    char lName[ncln];
    for (int i=0; i<ncfn; i++)
    {
        cout <<"Enter character " <<i+1<<" of your first name: ";
        cin>>fName[i];
    }

    for (int i=0; i<ncln; i++)
    {
        cout <<"Enter character " <<i+1<<" of your last name: ";
        cin>>lName[i];
    }

    cout<<"Full Name: ";
    for (int i=0; i<ncfn; ++i)
    {
        cout<<fName[i];
    }
    cout<<" ";

    for (int i=0; i<ncln; ++i)
    {
        cout<<lName[i];
    }
    return 0;
}
