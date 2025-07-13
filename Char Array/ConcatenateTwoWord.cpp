#include<iostream>
#include<cstring>
 using namespace std;
  int main(){

    char arr1[100];
    cout<<"ENTER FIRST LETTER : "<<endl;
    cin>>arr1;

    char arr2[200];
    cout<<"ENTER Second LETTER : "<<endl;
    cin>>arr2;

    cout<<strcat(arr1, arr2)<<endl;

    return 0;
  }

 