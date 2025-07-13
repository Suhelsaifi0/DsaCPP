#include<iostream> 
using namespace std;
  int main(){
  
    int arr[3][3] = {
                    {10,20,30},
                    {110,120,130},
                    {210,220,230}
                    };
    
    // Row Wise Print
    cout<<"Row wise"<<endl;
    int rowSize=3;
    int colSize=3;
     for(int i=0; i<rowSize; i++){
        for(int j=0; j<colSize; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
     }      

     // Column Wise Print  
     cout<<"Colume wise"<<endl;
     for(int j=0; j<colSize; j++){
        for(int i=0; i<rowSize; i++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
     }          

     cout<<"Diagonal wise"<<endl;
     for(int j=0; j<colSize; j++){
        for(int i=0; i<rowSize; i++){
            if(i==j)
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
     } 

    return 0;
  }
