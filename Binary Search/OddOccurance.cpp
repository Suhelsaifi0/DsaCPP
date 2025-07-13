#include<iostream>
 using namespace std;

  int FindOddOccurance(int arr[], int size){
      
      int s = 0;
      int e = size - 1;
      int mid = s + (e-s)/2;

      while(s <= e){
         // Single Element
         if(s==e){
            return s;
         }

        // Duplicate Does Not Exist 
        if(mid-1 >= 0 && arr[mid] != arr[mid-1] && mid+1 < size && arr[mid] != arr[mid+1]){
            return mid;
        }
        // Elememt Occur in left side
        if(mid-1 >= 0 && arr[mid] == arr[mid-1]){
              int pairStartingIndex = mid-1;
               if(pairStartingIndex & 1){
                  e = mid - 1;  //  Move Left 
               }
               else{
                 s = mid + 1;
               }
         }
         // Occurance in Right Side;
         else if (mid+1 < size && arr[mid] == arr[mid+1]){
            int pairStartingIndex = mid;
               if(pairStartingIndex & 1){
                  e = mid - 1;
         }
         else{
              s = mid + 1;
         }
      }
      mid = s + (e-s)/2;
  }
}
  int main (){ 

   int arr[] = {1,1,2,2,3,3,4,4,5,6,6,7,7,8,8};
   int size = 15;

   // Find Odd Occurance Element

   int ans = FindOddOccurance(arr, size);
   cout<<"ANS INDEX : "<<ans<<endl;;
   cout<<"ANS ELEMENT : "<<arr[ans];


    return 0;
  }