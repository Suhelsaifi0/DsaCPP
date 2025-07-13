#if !defined(Bird_H)
#include<iostream>
#define Bird_H

 class Bird // BIRD IS A INTERFACE
 {
 public: 
  virtual void eat() = 0; 
  virtual void fly() = 0;
  // Classes that inherits this class
  // Has to implementpure virtual class

 };

 class Sparrow : public Bird{
      public:
      void eat(){
        std::cout<<"Sparrow is Eating\n";
      }
      
      void fly(){
        std::cout<<"Sparrow is Flying\n";
      }
 };

  class Eagle : public Bird{
      public:
      void eat(){
        std::cout<<"Eagle is Eating\n";
      }
      
      void fly(){
        std::cout<<"Eagle is Flying\n";
      }
 };

  class Parrot : public Bird{
      public:
      void eat(){
        std::cout<<"Parrot is Eating\n";
      }
      
      void fly(){
        std::cout<<"Parrot is Flying\n";
      }
 };

#endif // Bird_H
