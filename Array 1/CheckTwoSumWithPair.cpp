#include<iostream>
using namespace std;

 pair<int,int> ChecktwoSum(int arr[], int size, int target){
      
      // Assuming (-1, -1) as no answer found
      pair <int,int> ans = make_pair(-1,-1);
      for(int i=0; i<size; i++){
        for(int j=0; i<size; i++){
            if(arr[i]+arr[j] == target){
                //Found Pair that sums to target
                ans.first = arr[i];
                ans.second = arr[j];
                return ans;
            };
        }
    }
    // agar ham yaha tak pauch gaya to kyo bhi pair target ke equal nahi hai mila
    return ans;
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

    pair<int,int> ans = ChecktwoSum(arr, n, target);
    if(ans.first == -1 && ans.second == -1){
        cout<<"PAIR NOT FOUND";
    }
    else{
       cout<<"PAIR FOUND : "<<ans.first<<", "<<ans.second<<endl;
    }
    return 0;
 }
