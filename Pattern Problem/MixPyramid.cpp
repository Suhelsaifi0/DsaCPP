#include<iostream>
 using namespace std;

  void MixPyramid(int n){
     
     // Part 1 

     for(int row=0; row<n; row++){
       
        // Star
        for(int col=0; col<n-row; col++)
        cout<<"* ";
        
        //Space
        for(int col=0; col<2*row+1; col++)
        cout<<"  ";

        //Star
        for(int col=0; col<n-row; col++)
        cout<<"* ";

        cout<<endl;
     }

    
     // Part 2

     for(int row=0; row<n; row++){
       
        // Star
        for(int col=0; col<row+1; col++)
        cout<<"* ";
        
        //Space
        for(int col=0; col<2*(n-row)-1; col++)
        cout<<"  ";

        //Star
        for(int col=0; col<row+1; col++)
 
        cout<<"* ";
        cout<<endl;
    }
 }

  int main(){

   int n;
   cout<<"Enter Number Here :"<<endl;
   cin>>n;

   MixPyramid(n);
   

    return 0;
  }