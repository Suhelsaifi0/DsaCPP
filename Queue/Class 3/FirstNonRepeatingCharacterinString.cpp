#include<iostream>
#include<queue>
 using namespace std;

  int main(){

  string str = "ababc";
  queue<int> q;
  int freq[26] = {0};

  for(int i=0; i<str.length(); i++){
    char ch = str[i];
    freq[ch - 'a']++;
    q.push(ch);
  

  // Answer Find Karo
  while(!q.empty()){
    char frontCharacter = q.front();  // Yaha Par Galti Ho gai thi Char Ki Jaga Mene Int Likh diya
    if(freq[frontCharacter - 'a'] > 1){
        // Pop Isliye Kara Kyo Ki Ye Anser Nahi Hai
        q.pop();
    }

    else{
        // == 1 Yahi Hi Answer hai
        cout<< frontCharacter <<" ";
        break;
     }
   }
   
   if(q.empty()){
    // Koi Answer Nahi Hai
    cout<<"#"<<" ";
    }
  }


    return 0;
  }