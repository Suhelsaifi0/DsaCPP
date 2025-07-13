#include<iostream>
using namespace std;

int swapAlternate(int arr[],int size){

    int i=0;
    int j=size-1;
    int temp ;

    for(int i=0;i<size-1;i=i+2){
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }
}

int main(){

    int arr[] = {10,20,30,40,50,60};
    int size;
    cin>>size;

    int ans = swapAlternate(arr, size);
    cout<<ans;  

    return 0;
}