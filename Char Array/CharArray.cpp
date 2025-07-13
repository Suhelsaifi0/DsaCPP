#include<iostream>
using namespace std;
 int main(){

    // Creation OF Char Array
    char arr[100];

    cout<<"ENTER YOUR NAME : "<<endl;
    //cin>>arr;

    cin.getline(arr,8);

    cout<<"YOUR NAME IS : "<<arr<<endl;
    cout<<arr[0]<<"->"<<(int)arr[0]<<endl;
    cout<<arr[1]<<"->"<<(int)arr[1]<<endl;
    cout<<arr[2]<<"->"<<(int)arr[2]<<endl;
    cout<<arr[3]<<"->"<<(int)arr[3]<<endl;;
    cout<<arr[4]<<"->"<<(int)arr[4]<<endl;
    cout<<arr[5]<<"->"<<(int)arr[5]<<endl;
    

    return 0;
 }