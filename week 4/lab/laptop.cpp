#include <iostream>
using namespace std;
main()
{
    int salary = 10000;
    int laptop = 50000;
    int month;
    int advance;
    
    if (advance == 50000)
    {
        advance = (salary *50/100) * 6;
        cout << " Yes Ali you can buy a laptop ";
    }
    else
    {
        month = laptop / (salary*50/100);
        cout << " You need to take advance for: " << month;
    }
}