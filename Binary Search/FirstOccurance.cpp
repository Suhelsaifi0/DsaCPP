#include<iostream> 
 using namespace std;
    
    int FirstOccurance(int arr[], int n, int target, int &ansindex){
        int s = 0;
        int e = n-1;
        int mid = s+(e-s)/2;

        while(s<=e){
            if(target == arr[mid]){
                // ans found <- may or may not be first Occurance
                // Store and Compute
            ansindex = mid;
             e = mid - 1;
            }
            if(target<arr[mid]){
                e = mid - 1;
            }
            if(target>arr[mid]){
                s = mid + 1;
            }
            mid = s+ (e-s)/2;
        }

    }

  int main(){                                        

   int arr[] = {20, 20, 20, 30, 40, 50, 60, 80, 90, 100, 110 };
   int n = 11;
   int target = 20;
   int ansindex = -1;

   FirstOccurance(arr, n, target, ansindex);
   cout<<"First Occur Index : "<<ansindex;

    return 0;
  }