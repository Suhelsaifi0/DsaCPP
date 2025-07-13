#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

  vector<int> Find2sCompliment(vector<int> binary){
    int n = binary.size();
    vector<int> TwoComp(n , 0);

    // Step 1 - Flip
    for(int i=0; i<n; i++){
        if(binary[i]==0)
        TwoComp[i] = 1;
        else{
            TwoComp[i] = 0;
        }
    }

    // Step 2 - Add 1
    int Carry = 1;
    for(int i = TwoComp[i]-1; i>=0; i--){
         int sum = TwoComp[i] + Carry;
         TwoComp[i] = sum%2;
         Carry = sum/2;

         if(Carry==0){
            break;
         }
    }
    return TwoComp;
  }


int main()
{

     vector<int> binary = {1,0,0,1,1,0};
     vector<int> TwoComp = Find2sCompliment(binary); // Function Call in Vector
     for(int i=0; i<TwoComp.size(); i++){    // Print in vector
        cout<<TwoComp[i]<<" ";
     }
     cout<<endl;


    return 0;
}