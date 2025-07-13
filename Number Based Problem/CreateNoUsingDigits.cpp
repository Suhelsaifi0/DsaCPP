#include<iostream>
 using namespace std;
  
  int CreateDigitsNumber(int NoofDigits){
    int num = 0;
     for(int i=0; i<NoofDigits; i++){
        int Digits;
        cout<<"Enter digits : "<<endl;
        cin>>Digits;
        num = num * 10 + Digits; 
     }
     return num;
  }
  
  int main(){

    int NoOfDigits;
    cout<<"Enter Total Number "<<endl;
    cin>>NoOfDigits;

    int Num = CreateDigitsNumber(NoOfDigits);
    cout<<"Digits Are Create : "<<Num;


    return 0;
  }