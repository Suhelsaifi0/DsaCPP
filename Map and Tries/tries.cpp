#include<iostream>
#include<unordered_map>
using namespace std;

 class TrieNode{
   public:
   char value; // Hamre Pass Value Hai
   unordered_map<int, TrieNode*> children; // Ek Map Hai
   bool isTerminal; // LastNode Ke liye ke Terminal Hai

   // Abb Ke Constructor Create Karnge 
   TrieNode(char data){
    value = data;
    isTerminal = false;
   }
};

// Insertion Logic
 void insertIntoTries(TrieNode* root, string word){
    // Base Case -> Ekk time aisa aaega , jab aapki string empty aagegi
    if(word.length() == 0){
        root->isTerminal = true;
        return;
    }

    // 1 case Solve Karna
    // 1 character ko Trie me Insert Kardeta hu
    char ch = word[0];
    TrieNode* child;

    //Present hai Too Vaha Chale jao
    //Absent hai to Create kardo

    if(root->children.count(ch) == 1){
       child = root->children[ch];
    }
    else{
        // Absent
        child = new TrieNode(ch);
        //link
         root->children[ch] = child; 
    }
    // Baaki Recursion Sambhal Lega
    insertIntoTries(child, word.substr(1));
 }

 // SearchLogic
 bool searchTrie(TrieNode* root, string word){
     // Base Case
     // Check Last Character Terminal ha ya nahi
     if(word.length() ==0){
        // Iska Matlab root me last Character Pada hua hai
        if(root->isTerminal == true){
            return true;
        }
        else{
            return false;
        }
     }


     // 1 case main Solve karunga
     char ch = word[0];
     TrieNode* child; 

     if(root->children.find(ch) != root->children.end()){
        //Present
        child = root->children[ch];
     }
     else{
        //absent
        return false;
     }
     //baaki recusrion
     bool recursionKaAns = searchTrie(child, word.substr(1));
     return recursionKaAns;  
 }

 int main(){
 
    TrieNode* root = new TrieNode('-');

    insertIntoTries(root, "Cover"); 
    insertIntoTries(root, "Car"); 
    insertIntoTries(root, "Care"); 
    insertIntoTries(root, "Coat"); 
    insertIntoTries(root, "snake"); 
    insertIntoTries(root, "love"); 
    insertIntoTries(root, "lonely"); 
    insertIntoTries(root, "amiable"); 
    insertIntoTries(root, "satranga"); 
    insertIntoTries(root, "wohdin"); 
    insertIntoTries(root, "catch"); 

    bool ans = searchTrie(root, "satranga");
    if(ans){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not Found";
    }

    return 0;
 }