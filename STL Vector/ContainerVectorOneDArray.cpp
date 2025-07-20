#include<iostream>
#include<vector>
using namespace std; 
 int main(){

    vector<int> marks;
    vector<int> marks1;

    // v.push_back(10);
    // v.push_back(20);
    // v.push_back(30);

    // int n;
    // cout<<"ENTER MARKS : ";
    // cin>>n;

    // FOR EARCH LOOP
    // for(int i=0; i<n; i++){
    //     int d;
    //     cin>>d;
    //     marks.push_back(d);
    // }

    // for(auto it:marks){
    //     cout<<it<<" ";
    // }
    
    // cout<<endl;

    // cout<<"BEGIN NUMBER : "<<*marks.begin();

    marks.push_back(10);
    marks.push_back(20);
    marks.push_back(30);
    marks.push_back(40);
    marks.push_back(50);

    marks1.push_back(100);
    marks1.push_back(200);
    marks1.push_back(300);
    marks1.push_back(400);
    marks1.push_back(500);

    cout<<"SIZE : "<<marks.size()<<endl;
    marks.pop_back();
    cout<<"SIZE : "<<marks.size()<<endl;
    cout<<"FRONT ELEMENT : "<<marks.front()<<endl;

    // cout<<"EMPTY : "<<marks.empty()<<endl;
    if(marks.empty() == true){
        cout<<"VECTOR IS EMPTY ";
    }
    else{
        cout<<"VECTOR IS NOT EMPTY "<<endl;
    }

    cout<<"INDEX BASED ACCESS ELEMENT : "<<marks[0]<<endl;
    // cout<<"INDEX BASED ACCESS ELEMENT : "<<marks.at[1]<<endl; 

    cout<<"CAPACITY : "<<marks.capacity()<<" "<<"SIZE : "<<marks.size()<<endl;

    // cout<<"RESERVE : "<<marks.reserve(10)<<endl;

    marks.clear();
    marks.insert(marks.begin(), 100);
    marks.erase(marks.begin(), marks.end());
    cout<<"SIZE : "<<marks.size()<<endl;

   marks.swap(marks1);
   // cout<<"SWAP : "<<marks[0] << " " <<marks[1] << " " <<marks[2] << " " <<marks[3] << " "<<endl;

   // FOR EARCH LOOP
   cout<<"SWAP : ";
   for(auto it : marks){
    cout<<it<<" ";
   }

   cout<<endl;
   // TRAVERSING VECTOR USING ITERATOR
   cout<<"ITERATOR : ";
   vector<int>::iterator it = marks.begin();
   while(it != marks.end()){
    cout<<*it<<" ";
    it++;
   }


   
    return 0;
 }