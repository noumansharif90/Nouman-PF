#include <iostream>
using namespace std;
main()
{
    string name1, name2, name3;
    int age1, age2, age3;
    cout << " Enter the name of the 1st brother : ";
    cin >> name1;
    cout << " Enter the age of 1st brother : ";
    cin >> age1;
    cout << " Enter the name of the 2nd brother : ";
    cin >> name2;
    cout << " Enter the age of 2nd brother : ";
    cin >> age2;
    cout << " Enter the name of the 3rd brother : ";
    cin >> name3;
    cout << " Enter the age of 3rd brother : ";
    cin >> age3;
    if (age1 < age2)
    {
        if (age1 < age3)
        {
            cout << " Youngest brother is : " << name1;
        }
        else
        {
            cout << " Youngest brother is : " << name3;
        }
    }
    else
    {
        if (age2 < age3)
        {
            cout << " youngest brother is : " << name2;
        }
        else
        {
            cout << " Youngest brother is : " << name3;
        }
    }
}
