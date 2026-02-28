#include<iostream>
using namespace std;

main()

{

          cout<<"Enter the size of bag in pounds:" ;
          int size;
          cin>>size;

          cout<<"Enter the cost of bag:" ;
          float cost;
          cin>>cost;  

          cout<<"Enter the area in square feet that can be covered by the bag: ";
          float area;
          cin>>area;      

          float perpoundcost;
          perpoundcost=cost/size;
          cout<<"\n cost of fertilizer per pound:"<<perpoundcost ;

          float persquarefootcost;
          persquarefootcost=cost/area;
          cout<<"\n cost of fertilizing per square foot:"<<persquarefootcost;

}