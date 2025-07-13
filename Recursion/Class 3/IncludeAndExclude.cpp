#include<iostream>
#include<vector>
 using namespace std;
  
  void printSubsequnce(string str, int i , string output , vector<string> &ans){
    
    // Base Case
    if(i == str.length()){
    //    cout<<output<<endl;
       ans.push_back(output);
       return ;
    }
   
    // 1 case me solve karunga
    char ch = str[i];

    // Baki recursion sambal Lega
    // include Ch
    printSubsequnce(str, i+1, output + ch, ans);
    // Exclude Ch
    printSubsequnce(str, i+1, output, ans);

}
  
  int main(){

   string str = "abc";
   string output = " ";
   int i = 0;

   vector<string> ans;
   printSubsequnce(str, i , output, ans);
   cout<<ans.size()<<endl;

   for(auto i: ans){
    cout<<i<<endl;
   }

    return 0;
  }