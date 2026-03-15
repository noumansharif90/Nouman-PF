#include <iostream>
using namespace std;
main()
{
    cout << " Enter the numbers of win : ";
    int win;
    cin >> win;

    cout << " Enter the number of draw : ";
    int draw;
    cin >> draw;

    cout << " Enter the number os loss : ";
    int loss;
    cin >> loss;

    int wins;
    wins = win * 3;
    int draws;
    draws = draw * 1;
    int losses;
    losses = loss * 0;

    int obtain;
    obtain = wins + draws;
    cout << " Total obtaion points is " << obtain;
}