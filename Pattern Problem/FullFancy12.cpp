#include<iostream>
using namespace std;


 void FullFancy12(int n){ 

   for(int row=0; row<n; row++){
     for(int col=0; col<2*row+1; col++)
        if(col%2==0)
        cout<<row+1;
        else{
            cout<<"*";
        }
        cout<<endl;
   }

   n--;
   for(int row=0; row<n; row++){
     for(int col=0; col<2*(n-row)-1; col++)
     if(col%2==0)
     cout<<n-row;
     else{
        cout<<"*";
     }
     cout<<endl;
   }
 }


 int main(){
 
 int n;
 cout<<"Enter Number Here : "<<endl;
 cin>>n;

 FullFancy12(n);
 
    return 0;
 }