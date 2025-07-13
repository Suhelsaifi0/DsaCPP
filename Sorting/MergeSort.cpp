#include<iostream>
 using namespace std;
  
  void merge(int arr[], int s, int e , int mid){
         
     // Create Array Left and Right Array
     int leftLength = mid - s + 1;
     int rightLength = e - mid ;

     int *leftArr = new int[leftLength];
     int *rightArr = new int[rightLength];
     
     // Fill Left and Right Array And Copy the Array
     int index = s;
     // Copy Into Left Array
     for(int i=0; i<leftLength; i++){
        leftArr[i] = arr[index];
        index++;
     }
     // Copy Right Array   
     index = mid+1;
     for(int i=0; i<rightLength; i++){
        rightArr[i] = arr[index];
        index++;
     }

     // Merge Logic
     int i= 0;
     int j = 0;
     int MainArrayIndex = s; 

     while(i < leftLength && j < rightLength){
         if(leftArr[i] < rightArr[j]){
          arr[MainArrayIndex] = leftArr[i];
          i++;
          MainArrayIndex++;
        }

         else{
         arr[MainArrayIndex] = rightArr[j];
         j++;
         MainArrayIndex++;
       }
    }
    
    // I have to Handle 2 case in it 
    while(i < leftLength){
      arr[MainArrayIndex] = leftArr[i];
      i++;
      MainArrayIndex++;
    }  
    
    while(j < rightLength){
      arr[MainArrayIndex] = rightArr[j]; 
      j++;
      MainArrayIndex++;
    }

    // Delete Heap Memory
    delete[] leftArr;
    delete[] rightArr;   
  }

  void mergeSort(int arr[], int s, int e){
      // Base Case
      if(s >=e ){
        return ;
      }    
      // Right Vala Part Solve kar liya
      int mid = (s+e)/2;
      mergeSort(arr, s , mid);

      // Left Vala Part Solve kara liya
      mergeSort(arr, mid+1, e);

      // Dono Ko merge Kara Diya Hamne
      merge(arr , s , e, mid); 
  }
  
  int main(){

   int arr[] = {20, 30, 10, 110, 50, 70, 40, 90, 120, 80};
   int size = 10;
   int s = 0;
   int e = size - 1;

   cout<<"BEFORE SORTED"<<endl;
   for(int i=0; i<size; i++){
       cout<<arr[i]<<" ";
   }
   cout<<endl;

   mergeSort(arr, s, e);

   // Print Entire Array;
   
   cout<<"AFTER SORTED"<<endl;
   for(int i=0; i<size; i++){
       cout<<arr[i]<<" ";
   }
   cout<<endl;
 
    return 0;
  }