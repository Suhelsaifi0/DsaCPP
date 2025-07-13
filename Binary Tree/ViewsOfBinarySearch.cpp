#include<iostream>
#include<map>
#include<queue>
 using namespace std;

  class Node{
    
    public:

    int data;
    Node* left;
    Node* right;

    Node(int val){
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }

  };

  Node* createTree(){

    int data;
    cout<<"Enter the Value For Node : "<<endl;
    cin>>data;
    
    // Base Case
    if(data == -1){
      return NULL;
    }

    // Create NewNode
    Node* newNode = new Node(data);

    // Create Left Subtree
    cout<<"Left Of Node: "<< newNode->data << endl;
    newNode->left = createTree();

    // Create Right Subtree
    cout<<"Right Of Node: "<< newNode->data << endl;
    newNode->right = createTree();

    return newNode;
  }

  // PREORDER TRAVERSAL
  void preOrderTraversal(Node* root){
    
    // Base Case
    if(root == NULL){
      return;
    }

    // N L R 
    // N
    cout<< root->data << " ";
    // L
    preOrderTraversal(root->left);
    // R
    preOrderTraversal(root->right);
  } 

  // INORDER TRAVERSAL
  void inOrderTraversal(Node* root){
    
    // Base Case
    if(root == NULL){
      return;
    }

    // L N R 
    // L
    inOrderTraversal(root->left);
    // N
    cout<< root->data << " ";
    // R
    inOrderTraversal(root->right);
  }
  
  // POSTORDER TRAVERSAL
  void postOrderTraversal(Node* root){
    
    // Base Case
    if(root == NULL){
      return;
    }

    // L R N 
    // L
    postOrderTraversal(root->left);
    // R
    postOrderTraversal(root->right);
    // N
    cout<< root->data << " ";
  }

  // Level Order Traversal
  void levelOrderTraversal(Node* root){

     queue<Node*> q;
     q.push(root);
     q.push(NULL);

    while(q.size() > 1){ // Yaha Par Galti Ho Gayi Thi Infinte Loop ME Fass Gaya Tha -> Galti Thi !q.empty()
    Node* front = q.front();
     q.pop();
      
     if(front == NULL){
       cout<<endl;
       q.push(NULL); 
     }
     
     else{
      // Valid Node Vala Case
     cout<<front->data<<" ";
    
     if(front->left != NULL){
       q.push(front->left);
      }
      if(front->right != NULL){
        q.push(front->right);
      }
     }
    }
  }

  // Left Level View
  void PrintLeftView(Node* root, int level, vector<int>& leftview){
        // Base Case
        if(root == NULL){
            return;
        } 

        if(level == leftview.size()){
            leftview.push_back(root->data);
        }

        PrintLeftView(root->left, level+1, leftview);
        PrintLeftView(root->right, level+1, leftview);
  }

  // Right Level View 
  void PrintRightView(Node* root, int level, vector<int>& rightview){
        // Base Case
        if(root == NULL){
            return;
        } 

        if(level == rightview.size()){
            rightview.push_back(root->data);
        }

        PrintRightView(root->right, level+1, rightview);
        PrintRightView(root->left, level+1, rightview);
  }


  // Top Level View

  void TopLevelView(Node* root){
       map<int,int> hdtoNodeMap; // Sabse Phele Map Create kar
       queue<pair <Node* , int>> q; // Phir Queue Create kari Pair Ki Jiss Ke andar Node or Horizonatal Distance Dala 
       q.push(make_pair(root, 0));  // Queue ke andar root or distance dal diya
       
       while(!q.empty()){
            pair<Node*, int> temp = q.front();
            q.pop();

            Node* frontNode = temp.first;
            int hd = temp.second;


            // if there is No Entry for hd in Map , then create new entry
            if(hdtoNodeMap.find(hd) == hdtoNodeMap.end()){
              hdtoNodeMap[hd] = frontNode->data;
            }

            // Child Node KO Dekhna Hai Abb
            if(frontNode->left != NULL){
               q.push(make_pair(frontNode->left, hd-1));
            }
            if(frontNode->right != NULL){
              q.push(make_pair(frontNode->right, hd+1));
            }
       }

       cout<<"Printing Top View : "<<endl;
       for(auto i : hdtoNodeMap){
          cout<<i.second<<" ";
       } 
  }

  // Bottom Level View

  void BottomLevelView(Node* root){
       map<int,int> hdtoNodeMap; // Sabse Phele Map Create kar
       queue<pair <Node* , int>> q; // Phir Queue Create kari Pair Ki Jiss Ke andar Node or Horizonatal Distance Dala 
       q.push(make_pair(root, 0));  // Queue ke andar root or distance dal diya
       
       while(!q.empty()){
            pair<Node*, int> temp = q.front();
            q.pop();

            Node* frontNode = temp.first;
            int hd = temp.second;

            // OverWrite Answer So that the Deeper Nodes Can Be Stored
              hdtoNodeMap[hd] = frontNode->data;

            // Child Node KO Dekhna Hai Abb
            if(frontNode->left != NULL){
               q.push(make_pair(frontNode->left, hd-1));
            }
            if(frontNode->right != NULL){
              q.push(make_pair(frontNode->right, hd+1));
            }
       }

       cout<<"Printing Top View : "<<endl;
       for(auto i : hdtoNodeMap){
          cout<<i.second<<" ";
       } 
  }

  
  // Boundary View
  
  void PrintLeftBoundary(Node* root){
       if(root == NULL){
        return; 
       } 

       if(root->left == NULL && root->right == NULL){
        return;
       }

       cout<<root->data<<" ";
       if(root->left != NULL){
         PrintLeftBoundary(root->left);
       }
       else{
        PrintLeftBoundary(root->right);
       }
  }

  void PrintRightBoundary(Node* root){
       if(root == NULL){
        return; 
       } 

       if(root->left == NULL && root->right == NULL){
        return;
       }  

       if(root->right != NULL){
         PrintRightBoundary(root->right);
       }
       else{
        PrintRightBoundary(root->left);
       }
       cout<<root->data<<" ";  
}

  void PrintleafBoundary(Node* root){
    if(root == NULL)
    return;

    if(root->left == NULL && root->right == NULL){
      cout<<root->data<<" ";
    }
    PrintleafBoundary(root->left);
    PrintleafBoundary(root->right);
  }

  void BoundaryTraversal(Node* root){
       if(root == NULL){
        return;
       } 
       PrintLeftBoundary(root);
       PrintleafBoundary(root);
       PrintRightBoundary(root);
  } 

  int main(){

    Node* root = createTree();
   // cout<<root->data<<endl;

   cout<<"Printing PreOrder: ";
   preOrderTraversal(root);
   cout<<endl;

   cout<<"Printing inOrder: ";
   inOrderTraversal(root);
   cout<<endl;

   cout<<"Printing PostOrder: ";
   postOrderTraversal(root); 
   cout<<endl;

   cout<<"Printing level Order: ";
   levelOrderTraversal(root);
   cout<<endl;

   vector<int> leftview;
   PrintLeftView(root, 0, leftview);
   
   cout<<"Printing Left View: "<<endl;
   for(int i = 0; i <leftview.size(); i++){
    cout<<leftview[i]<<" ";
   }

   vector<int> rightview;
   PrintRightView(root, 0, rightview);
   
   cout<<"Printing Right View: "<<endl;
   for(int i = 0; i <rightview.size(); i++){
    cout<<rightview[i]<<" ";
   }

   TopLevelView(root);
   cout<<endl;

   BottomLevelView(root);
   cout<<endl;

   BoundaryTraversal(root);
   cout<<endl; 

    return 0;
  }