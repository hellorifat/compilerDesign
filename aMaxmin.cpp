#include <iostream>
using namespace std;

#define SIZE 10

int main()
{

    int i, max, min, a;

    cout << "Enter the size of the array: ";
    cin >> a;

    int num[a];

    cout << "\nEnter " << a << " elements in the array: "<<endl;
    for (i = 0; i < a; i++)
	{
	cout <<"Enter number " <<i+1<<" : ";
        cin >> num[i];
	}

    max = num[0];
    min = num[0];

    for (i = 1; i < a; i++)
    {
        if (num[i] > max)
            max = num[i];

        if (num[i] < min)
            min = num[i];
    }

    cout << "\nHighest element =" << max <<endl;
    cout << "Lowest element =" << min;

    return 0;
}
