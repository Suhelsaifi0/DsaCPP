#include<iostream>
#include<algorithm>
#include<vector> 
 using namespace std;

  void print(vector<int> &v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
  }

//  bool mycomp(int &a, int &b){
//      // return a < b; // increasing Order
//       return a > b; // Decreasing Order
//  }


   void printvv(vector<vector<int>> &v){
       for(int i=0; i<v.size(); i++){
          vector<int>&temp = v[i];
          int a = temp[0];
          int b = temp[1];
          cout<<a<<" "<<b <<endl;      
       }
       cout<<endl;
   }

  bool myCompFor1stindex(vector<int> &a, vector<int> &b){
     return a[1] < b[1];
  }

  int main(){

//    vector<int> v = {55,33,22,44,11};
//    sort(v.begin(), v.end() , mycomp);
//    print(v);

     vector<vector<int>> v;

     int n;
     cout<<"ENTER NUMBER HERE : "<<endl;
     cin>>n;

     for(int i=0; i<n; i++){
        int a,b;
        cout<<"ENTER VALUE OF A AND B : "<<endl;
        cin>>a>>b;
        vector<int> temp;
        temp.push_back(a);
        temp.push_back(b);
        v.push_back(temp);
     }
    cout<<"VALUES PRINTED HERE : "<<endl;
    printvv(v);
    cout<<"SORTED BY 1st INDEX : "<<endl;
    sort(v.begin(), v.end() , myCompFor1stindex);
    printvv(v);

    return 0;
  }