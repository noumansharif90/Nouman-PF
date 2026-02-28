#include <iostream>
using namespace std;

main()

{

      cout<< " Number of Minutes = " ;
      int minutes;
      cin>>minutes;

      cout<< " Frames per second : " ;
      int frames;
      cin>>frames;

      int totalframes;
      totalframes=minutes*60*frames;


      cout<<" Total Number of Frames : "<<totalframes ;
}