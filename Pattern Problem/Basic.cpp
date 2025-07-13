#include<iostream>
using namespace std;
 int main(){
    
  int r,c;
  cout<<"ENTER ROW : ";
  cin>>r;
  cout<<"ENTER COLUMN :";
  cin>>c;

    for(int i=1; i<=r; i++){
      cout<<i<<"->";
       for(int j=1; j<=c; j++){
        cout<<"* ";
       }
       cout<<endl;
    }

  return 0;
 }