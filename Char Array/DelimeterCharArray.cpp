#include<iostream>
using namespace std;
 int main(){

    char arr[100];
    cout<<"ENTER NAME HERE : "<<endl;

    cin.getline(arr, 100, '\n');
    cout<<arr<<endl;

    return 0;
 }