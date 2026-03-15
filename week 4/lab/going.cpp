#include <iostream>
using namespace std;
main()
{
    char going;
    cout << " Are you going to uni (press y for yes)";
    cin >> going;
    if (going == 'y')
    {
        cout << " I'm also going to uni ";
    }
    else
    {
        cout << " I'm not going to uni ";
    }
}