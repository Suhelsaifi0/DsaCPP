#include<iostream>
using namespace std;

 bool twoSum(int arr[], int size, int target){
      
      for(int i=0; i<size; i++){
        for(int j=0; i<size; i++){
            if(arr[i]+arr[j] == target){
                return true;
            };
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

    bool ans = twoSum(arr, n, target);
    if(ans == true){
        cout<<"PAIR FOUND";
    }
    else{
       cout<<"NOT FOUND";
    }
    return 0;
 }

// #include<iostream>
//  using namespace std;

//   bool TwoSum(int arr[], int n , int target){
    
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             if(arr[i] + arr[j] == target){
//                return true;
//             }
//         }
//     }
//       return false;
//   }
//   int main(){

//     int arr[] = {1, 2, 3, 4, 5};
//     int size = 5;

//     int target = 30;

//     bool ans = TwoSum(arr, size, target);
//     if(ans == true){
//         cout<<"Pair Found "<<endl;
//     }
//     else{
//         cout<<"Not Found"<<endl;
//     }
//     return 0;
//   }