#include<iostream> 
using namespace std;

 void Alphabet(int n){
    for(int row=0; row<n; row++){
        char ch = 'A' ;
        for(int col=0; col<row+1; col++){
            cout<<ch;
            ch++;
        }
        ch--;
        while(ch > 'A'){
            ch--;
            cout<<ch;
        }
        cout<<endl;
    }
 }

 int main(){

    int n;
    cout<<"ENTER NUMBER : ";
    cin>>n;

    Alphabet(n);

    return 0;
 }