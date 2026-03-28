#include <iostream>
using namespace std;
main()
{
    int num;
    int total = 0;

    for( int i=1; i<=5;)
    {
        cout << " Enter the number" << i <<":";
        cin >> num;
        total = total + num;
    }
    cout << " sum of total number is: " << total;
}