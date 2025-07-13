#include<iostream>
 using namespace std;
  
  // Operator OverLoading

  class Complex
  {

  public:  
  int real;
  int imag;

  // DEfault Ctor 
  Complex()
  {
    real = imag = -1;
  }

  Complex(int r, int i):real(r), imag(i){};

   // Syntax
   Complex operator + (const Complex &B){
      // This -> A instance
      Complex temp;
      temp.real = this->real + B.real;
      temp.imag = this->imag + B.imag;
      return temp;
   }

   Complex operator - (const Complex &B){
      // This -> A instance
      Complex temp;
      temp.real = this->real - B.real;
      temp.imag = this->imag - B.imag;
      return temp;
   }

   Complex operator * (const Complex &B){
    // This -> instance

   Complex temp;
   temp.real = real * B.real; 
   temp.imag = imag * B.imag;
   return temp;

  }

    void print(){
        printf("[%d + i%d]\n", this->real, this->imag);
    }

  };
  
  int main(){

  Complex A(2 ,5);
  A.print();
  Complex B(3 , 3);
  B.print();

  cout<<"SUM OF COMPLEX NUMBER :"<<endl;
  Complex C = A + B;
  C.print();
  
  cout<<"DIFFERENCE OF COMPLEX NUMBER :"<<endl;
  Complex D = A - B;
  D.print();
  
  cout<<"SUM OF MUltiple NUMBER :"<<endl;
  Complex E = A*B;
  E.print();
    return 0;
  }