#include<iostream> 
 using namespace std;

  void Fun(int arr[], int n){
      cout<<"PRINTED ARRAY : "<<endl;
      for(int i=0; i<n; i++){
      cout<<arr[i]<<" ";
      }
  }

  int main(){
    
     //Static Memory Allocation
    /*int arr[] = { 1, 2 , 3, 4, 5};
     int size = 5;
     Fun(arr, size);*/

    // Dynamic Memory Allocation
    int n; //  Taking Size From User in an Array 
    cout<<"ENTER ARRAY NUMBER HERE : "<<endl;
    cin>>n;

    int *arr = new int[n];
     for(int i=0; i<n; i++){
        cout<<"TYPE NUMBER : "<<endl;
        int data ;
        cin>>data;
        arr[i] = data;
     }

    Fun(arr , n);

    return 0;
  }