#include<iostream>
using namespace std;
 int main(){

    char grade;
    cout<<"ENTER GRAGE HERE : "<<endl;
    cin>>grade;

    switch(grade){
        case 'A':
        cout<<"Your Marks will be range between 90 - 100"<<endl;
        break;
        case 'B':
        cout<<"Your Marks will be range between 90 - 80"<<endl;
        break;
        case 'C':
        cout<<"Your Marks will be range between 80 - 70"<<endl;
        break;
        case 'D':
        cout<<"Your Marks will be range between 70 - 60"<<endl;
        break;
        default:
        cout<<"Your Marks will be range between 0 - 60"<<endl;
        break;

    }

    return 0;
 }