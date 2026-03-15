#include <iostream>
using namespace std;
main()
{
    int holidays, workingdays, playtime, diffrence, hours, minutes;
    cout << " Enter the number of holidays:";
    cin >> holidays;
    workingdays = 365 - holidays;
    playtime = (workingdays * 63) + (holidays * 127);
    diffrence = 30000 - playtime;
    hours = diffrence / 60;
    minutes = diffrence % 60;
    if (playtime > 30000)
    {
        cout << " Tom sleep well ";
        cout << hours << " hours and " << minutes << " minutes is less for play";
    }
    else
    {
        cout << " Tom will runaway ";
        cout << hours << " hours and " << minutes << " minutes is for play";
    }
}