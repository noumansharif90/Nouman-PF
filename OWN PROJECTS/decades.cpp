#include <iostream>
using namespace std;
main()
{
    cout << " Enter the current poplution : ";
    int currentpop;
    cin >> currentpop;

    cout << " Enter the birth rate (per month) : ";
    int permonth;
    cin >> permonth;

    int total;
    total = currentpop + (permonth * 360);

    cout << " the total population in 3 decads is : " <<total;
}