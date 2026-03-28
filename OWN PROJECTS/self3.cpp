#include <iostream>
using namespace std;
main()
{
    cout << " Enter the student name: ";
    string name;
    cin >> name;
    while (name != "End" )
    {
        cout << " Hello" << name;
        cin>>name;
    }
     cout<<" End ";
}
