#include <iostream>
using namespace std;
main()
{
    int num;
    int total;
    cout << " enter the number (stop on negative number): " ;
    cin>>num;
    while (num >= 0)

    {
        total = total + num;
        cin >> num;
    }
    cout << " sum of total number is : " << total;
}