#include<iostream>
 using namespace std;

  bool TargetSearch(int arr[][3], int i, int j, int target){
 
           for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
              if(arr[i][j]==target)
              return true;
           }
      }
      return false;
  }

  int main(){

    int arr[3][3];
    int i=3;
    int j =3;
    cout<<"ENTER NUMBER HERE : "<<endl;
    for(int i=0; i<3; i++){
       for(int j=0; j<3; j++){
        cin>>arr[i][j];
       }
    }
   
   cout<<"ARRAY PRINTED :"<<endl;
   for(int i=0; i<3; i++){
     for(int j=0; j<3; j++){
      cout<<arr[i][j]<<" ";
     }
     cout<<endl;
   }

   int target;
   cout<<"ENTER TARGET HERE : "<<endl;
   cin>>target;

   bool ans = TargetSearch(arr, i , j , target);  
     if(ans==true){
      cout<<"CONGRATULATION TARGET FOUND "<<endl;
     }
     else{
      cout<<"TARGET NOT FOUND "<<endl;
     }

    return 0;
  }