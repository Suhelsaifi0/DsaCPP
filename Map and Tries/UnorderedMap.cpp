#include<iostream>
#include<unordered_map>
#include<map>
using namespace std;
 int main(){

    // Creation of Unorderd Map
    unordered_map<int,string> un_map;
    // Creation of Ordered Map
    map<int,string> oMap;

    // Insertion -> Bhot sare Tareke hai 
    // 1-> insert()
    // 2-> []

    un_map[2] = "scorpio";
    un_map[3] = "fortuner";
    un_map[1] = "Baleno";

    oMap[2] = "scorpio";
    oMap[3] = "fortuner";
    oMap[1] = "Baleno";

    cout<<"Printing Ordered Map "<<endl;
    for(auto i: oMap){
        cout<<i.first<<"->"<<i.second<<endl;
    } 

    cout<<"Printing unOrdered Map "<<endl;
    for(auto i: un_map){
        cout<<i.first<<"->"<<i.second<<endl;
    } 

    // Search or Find
    // Count() and find()
    // if(un_map.find(1) == un_map.end()){
    //     cout<<"ONE is Not FOUND"<<endl;
    // }
    // else{
    //     cout<<"ONE is Found"<<endl;
    // }

     if(un_map.count(3) == 0){
        cout<<"3 Nahi Mila"<<endl;
     }
     else{
        cout<<"3 Mile Gaya"<<endl; 
     }
    
     // Count Number Of Element  
     cout<<un_map.count(3)<<endl;

    return 0;
 }
