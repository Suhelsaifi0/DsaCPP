#include<iostream> 
using namespace std;


 void Fancy12(int n){

    for(int row=0; row<n; row++){

        for(int col=0; col<2*row+1; col++)
        if(col%2==0)
        cout<<row+1;
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

    Fancy12(n);

    return 0;
 }