#include<iostream>
 using namespace std;

  // Function OverLoading  
  class Add
  {
   public:

   // Sum of two Int
   int sum(int x, int y)
   {
    cout<<"SUM OF TWO INT NUMBER ARE : "<<endl;
     return x + y;   
   }
 
   // Sum of two Int
   int sum(int x, int y, int z)
   {
     cout<<"SUM OF THREE INT NUMBER ARE : "<<endl;
     return x + y + z;   
   }
   
   // Sum of two Double
   double sum(double x, double y)
   {
     cout<<"SUM OF TWO Double INT NUMBER ARE : "<<endl;
     return x + y;   
   }

  };
  
  class Multiply
  {
   public:

   // Sum of two Int
   int multi(int x, int y)
   {
    cout<<"Multiple OF TWO INT NUMBER ARE : "<<endl;
     return x * y;   
   }
 
   // Sum of two Int
   int multi(int x, int y, int z)
   {
     cout<<"Multiple OF THREE INT NUMBER ARE : "<<endl;
     return x * y * z;   
   }
   
   // Sum of two Double
   double multi(double x, double y)
   {
     cout<<"Multiple OF TWO Double NUMBER ARE : "<<endl;
     return x * y;   
   }

  };
  int main(){

  int x=5, y=10, z=2;

  Add add;
  cout<<add.sum(x,y)<<endl;
  cout<<add.sum(x,y,z)<<endl;
  cout<<add.sum(5.1,6.2)<<endl;

  Multiply multiple;
  cout<<multiple.multi(x,y)<<endl;
  cout<<multiple.multi(x,y,z)<<endl;

    return 0;
  }