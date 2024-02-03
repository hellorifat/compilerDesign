#include <iostream>
using namespace std;

int main() {
    int num, factorial = 1;

    cout << "Enter a positive integer: ";
    cin >> num;

    if (num < 0)
        cout << "Factorial not found. Enter a positive number.";
    else if (num<=1)
        cout<<" Factorial of "<<num<<" is:"<< factorial;
    /* else {
        for (int i=1; i<=num; ++i){
            factorial *=i;
        }
        cout<<" Factorial of "<<num<<" is:"<< factorial;
    }*/
    else {
        for(int i = num; i >=2; i--) {
            factorial *= i;
        }
        cout << "Factorial of " << num << " = " << factorial;
    }

    return 0;
}
