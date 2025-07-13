#include<iostream>
using namespace std;

  void NumericHollowHP(int n){
     for(int row=0; row<n; row++){

        for(int col=0; col<row+1; col++)
        if(row==0 || row==n-1 || col==0 || row==col)
        cout<<col+1 ;
        else{
            cout<<" ";
        }
        cout<<endl;
     }
  }


  void NumHollowInverHalfPyramid(int n){
       for(int row=0; row<n; row++){
        for(int col=row+1; col<=n; col++)
        if(row==0 || row==n-1 || col==row+1 || col== n)
        cout<<col<<" ";
        else{
            cout<<"  ";
        }
        cout<<endl;
       }
  }

 int main(){


    int n;
    cout<<"Enter Number Here : "<<endl;
    cin>>n;

   //  NumericHollowHP(n);
   //  NumHollowInverHalfPyramid(n);
    

    return 0;
 }