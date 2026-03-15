#include <iostream>
using namespace std;
int main()
{
    string figure;
    int sides;

    float area, lenth, width, radius, height;
    cout << " Enter the figure : ";
    cin >> figure;
    if (figure == "square")
    {
        cout << "Enter sides:";
        cin >> sides;
        area = sides * sides;
        cout <<"Area = "<<area;
    }
    else if (figure == "rectangle")
    {
        cout << " Enter the lenth :";
        cin >> lenth;
        cout << " Enter the width :";
        cin >> width;
        area = lenth * width;
        cout << " area = " << area;
    }
    else if (figure == "circle")
    {
        cout << " Enter the circle of radius:";
        cin >> radius;
        area = 3.1416 * radius * radius;
        cout << " area = " << area;
    }
    else if (figure == "triangle")
    {
        cout << " Enter the lenth of base:";
        cin >> lenth;
        cout << " Enter the height of base :";
        cin >> height;
        area = 0.5 * lenth * height;

        cout << " area = " << area;
    }
}