#include <iostream>
using namespace std;

  class heap{
  
  // Array se Heap banta hai heapify operation ki maddh se 
  public:
  int *arr; 
  int capacity; // Abhi Kitna Bhara hai Heap -> Kinti Capacity hai fill kar Ne ki -> jasi ke 1 jarr ki kitni capacity hai water store kare ne ki
  int size;     // Array ka Size
  
  // Constructor
  heap(int capacity){
    this->arr = new int[capacity]; // Create Array
    this->capacity = capacity;
    // Size -> Current Number of Element in Heap
    this->size = 0;
  }

  // Insert Value 
  void insert(int val){
       if(size == capacity){ // -> Array ka size 10 hai or Capacity bhi Full Ho gaee hai 10 Ho gaee hai 
        cout<<"Heap OverFlow"<<endl;
        return;
       }

       //  Abb agar Capacity Full Nahi Huhi hai -> Size Increase Kar Jaega
       size++;
       int index = size;
       // Heap Ki Khali Jaga ko Phile Kardiya
       arr[index] = val;

       // Take the value to it Correct Postion
       while(index > 1){ // Agar Index 1 se baddi hai
        int parentIndex = index/2;
        if(arr[index] > arr[parentIndex]){
          swap(arr[index], arr[parentIndex]);
           index = parentIndex;
        }
        else{
          // Parent Already bada ha No Need to return
          break;
        }
     }       
  }

  void printHeap(){
    for(int i=0; i<=size; i++){
    cout<<arr[i]<<" ";
   }
  }
  
  // Delete Heap Node
  int deleteToHeap(){
       // Index First Ka Element Store Karnge Phele Answer Mee
       int answer = arr[1];
       // Replace KarDiya or Size Ko minus Kar diya
       arr[1] = arr[size];
       size--;
       
       int index = 1;
       while(index < size){
             int leftIndex = 2*index;
             int rightIndex = 2*index + 1;
             int largestKaIndex = index;
             
             if(leftIndex <= size && arr[largestKaIndex] < arr[leftIndex]){
              largestKaIndex = leftIndex;
             }
             if(rightIndex <= size && arr[largestKaIndex] < arr[rightIndex]){
              largestKaIndex = rightIndex;
             }

             // No Change
             if(largestKaIndex == index){
              break;
             }
             else{
              swap(arr[largestKaIndex], arr[index]);
              index = largestKaIndex;
             }
         }
      return answer;
   }
}; 

   void heapify(int *arr, int n, int index){
        int leftIndex = 2*index;
        int rightIndex = 2*index + 1;
        int largestKaIndex = index;
 
        // Teno me se Bada 
        if(leftIndex <= n && arr[leftIndex] > arr[largestKaIndex]){
          largestKaIndex = leftIndex;
        }
        if(rightIndex <= n && arr[rightIndex] > arr[largestKaIndex]){
          largestKaIndex = rightIndex;
        }
        
        if(largestKaIndex != index){
          swap(arr[index], arr[largestKaIndex]);
        // Recursion sambal lega
        index = largestKaIndex;
        heapify(arr, n , index);
      }
   }

   void buildHeap(int arr[], int n){
     for(int index = n/2; index > 0; index--){
      heapify(arr, n, index);
     }
   }

   void heapSort(int arr[], int n){
        while(n != 1){
        swap(arr[1], arr[n]);
        n--;
        heapify(arr, n , 1);
   }
}

int main() {
 
   int arr[] = {-1,10,15,17,18,12,16};
   int n = 6;
   buildHeap(arr, 6);
   
   cout<<"Printing heap"<<endl;
   for(int i=1; i<=n; i++){
      cout<<arr[i]<<" ";
   }
   cout<<endl;
   
   heapSort(arr, n);
   cout<<"PRINTING HEAPSORT"<<endl;
   for(int i=1; i<=n; i++){
    cout<<arr[i]<<" ";
   }
   cout<<endl;

  // heap h(10);
  // //Insertion
  // h.insert(10);
  // h.insert(20);
  // h.insert(5);
  // h.insert(11);
  // h.insert(6);

  // cout<<"Printing Heap : "<<endl;
  // h.printHeap();

  // int answer = h.deleteToHeap();
  // cout<<"ANSWER : "<<answer<<endl;
  // cout<<"Printing Heap : "<<endl;
  // h.printHeap();

  return 0;
}  