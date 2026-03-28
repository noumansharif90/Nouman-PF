#include <iostream>
using namespace std;

int main()
{
    int num;
    int total = 0;

    cout << "Enter numbers (negative number to stop): " << endl;

    cin >> num;  // first input

    while(num >= 0)   // loop runs until number becomes negative
    {
        total = total + num;  // add to sum
        cin >> num;           // next input
    }

    cout << "Total sum is: " << total;

    return 0;
}