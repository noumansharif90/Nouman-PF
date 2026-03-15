#include<iostream>
using namespace std;
main()
{
    string my_password, user_password;
    my_password="nouman641";
    cout<<" enter the user password ";
    cin>>user_password;
    if(my_password==user_password)
    {
        cout<<" wow i craked the password ";
    }
    else{
        cout<<" Don't give up , Try again ";
    }

}