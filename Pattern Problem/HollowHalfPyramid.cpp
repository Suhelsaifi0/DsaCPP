#include<iostream>
using namespace std;
 int main(){

    
    int n;
    cout<<"Enter Number Here : ";
    cin>>n;
    for(int row=0; row<n; row++){
        for(int col=0; col<row+1; col++){
            if(row == 0 || row == n-1 || col == 0 || row == col){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }

    return 0;
 }