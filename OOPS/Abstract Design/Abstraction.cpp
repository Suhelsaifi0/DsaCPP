#include<iostream>
#include "bird.h" 
 using namespace std;

  void BirddoesSomething(Bird *&Bird){
       Bird-> eat();
       Bird-> fly();
       Bird-> eat();
       Bird-> fly();
       Bird-> eat();
       Bird-> fly();
       Bird-> eat();
       Bird-> fly();
  }
  
  int main()
  {

   Bird *bird = new Sparrow();
   BirddoesSomething(bird);
   Bird *bird2 = new Parrot();
   BirddoesSomething(bird2);

    return 0;
  }