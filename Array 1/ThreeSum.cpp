#include<iostream>
using namespace std;
    
    bool ThreeSum(int arr[], int n, int target){
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                for(int k=0; k<n; k++){
                    if(arr[i] + arr[j] + arr[k] == target){
                        return true ;
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

    bool ans =  ThreeSum(arr, n, target);
    if(ans == true){
        cout<<"Pair Found"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }

    return 0;
  }