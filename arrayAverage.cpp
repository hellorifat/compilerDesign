#include<iostream>
using namespace std;

#define SIZE 10

int main()
{
    int n, i, a;
    cout<<"Enter the size of the array: ";
	cin>>n;
    double num[n], sum=0, avg;

    cout<<"\nEnter "<<n<< " elements in the array: "<<endl;
    for(i = 0; i < n; ++i)
    {
        cout <<"Enter number " <<i+1<<" : ";
        cin >> num[i];
        sum += num[i];
    }

    avg = sum / n;
    cout << "Average = " << avg;

    return 0;
}
