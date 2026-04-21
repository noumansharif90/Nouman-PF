#include<iostream>
using namespace std;
main()
{
    int bytes,megabyte;
    cout<<" Enter the number of megabyte: ";
    cin>>megabyte;
    bytes=megabyte*1024*1024*8;
    cout<<" megabytes into bytes: "<<bytes;
}