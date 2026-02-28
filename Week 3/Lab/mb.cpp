#include <iostream>
using namespace std;

main()

{

      cout<<"Enter the size in megabytes (MB) : ";
      int MB;
      cin>>MB;

      int megaB=1024;
      int kiloB=1024;
      int bytes=8;

      int bits;
      bits=megaB*kiloB*bytes;
      cout<< MB <<" MB " <<" is equal to "<<bits << " bits";
}