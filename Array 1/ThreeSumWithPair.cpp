#include<iostream>
using namespace std;
    
    bool ThreeSum(int arr[], int n, int target){
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                for(int k=j+1; k<n; k++){
                    if(arr[i] + arr[j] + arr[k] == target){
                        cout<<arr[i]<<", "<<arr[j]<<", "<<arr[k]<<endl;
                    }
                }
            }
        }
        return false;
    }

  int main(){

    int n;
    cout<<"ENTER NUMBER OF ARRAY : ";
    cin>>n;

    int arr[n];
    cout<<"ENTER ARRAY : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int target;
    cout<<"ENTER TARGET : ";
    cin>>target;

    ThreeSum(arr, n, target);

    return 0;
  }