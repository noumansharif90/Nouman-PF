#include <iostream>
using namespace std;

main()

{

  cout << " Enter the voltage (in volts) : ";
  float voltage;
  cin >> voltage;

  cout << " Enter the current (in Amperes) : ";
  float current;
  cin >> current;

  float power;
  power = voltage * current;

  cout << " The power is " << power << " watts";
}
