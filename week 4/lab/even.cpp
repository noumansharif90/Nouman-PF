#include <iostream>
using namespace std;
main()
{
    int number ,even;
    cout << " Enter the number ";
    cin >> number;
    even = number % 2;
    if (even == 0)
    {
        cout << " your number is even: ";
    }
    else
    {
        cout << " you're number is odd ";
    }
}