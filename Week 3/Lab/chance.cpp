#include <iostream>
using namespace std;

main()

{

    cout<< "Enter the imposters value : " ;
    float imposter;
    cin>>imposter;
 
    cout<< "Enter the player numbers : " ;
    int player;
    cin>>player;

    int chance;
    chance = 100*(imposter/player);

    cout<<" chance will be an "<<chance <<"% imposter ";

     
}