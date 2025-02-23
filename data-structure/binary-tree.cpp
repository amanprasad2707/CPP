#include<iostream>
#include<queue>
using namespace std;
class Node{
public:
  int data;
  Node* left;
  Node* right;

  Node(int data){
    this->data = data;
    this->left = NULL;
    this->right = NULL;
  }
};

Node* buildTree(Node* root){
  cout << "Enter the data: " << endl;
  int data;
  cin >> data;
  root = new Node(data);
  if(data == -1){
    return NULL;
  }
  cout << "Enter data for inserting in the left of " << data << endl;
  root->left = buildTree(root->left);
  cout << "Enter data for inserting in the right of " << data << endl;
  root->right = buildTree(root->right);
  return root;
}

void levelOfTraversal(Node* root){
  queue<Node*> q;
  q.push(root);
  q.push(NULL);

  while(!q.empty()){
    Node* temp = q.front();
    q.pop();

    if(temp == NULL){  // last level is completely traversed
      cout << endl;
      if(!q.empty()){  // queue still have some child nodes
        q.push(NULL);
      }
    }
    else{
      cout << temp->data << " ";
      if(temp->left){
        q.push(temp->left);
      }
      if(temp->right){
        q.push(temp->right);
      }
    }
  }
}
void buildFromLevelOrder(Node* &root){
  queue<Node*> q;
  cout << "Enter data for root\n";
  int data;
  cin >> data;
  root = new Node(data);
  q.push(root);

  while(!q.empty()){
    Node* temp = q.front();
    q.pop();

    cout << "Enter left node for " << temp->data << endl;
    int leftData;
    cin >> leftData;
    if(leftData != -1){
      temp->left = new Node(leftData);
      q.push(temp->left);
    }
    cout << "Enter right node for " << temp->data << endl;
    int rightData;
    cin >> rightData;
    if(rightData != -1){
      temp->right = new Node(rightData);
      q.push(temp->right);
    }
  }
}
void display(Node* root){        // without using NULL for newLine printing
  queue<Node*> q;
  q.push(root);
  while(!q.empty()){
      int n = q.size();
      for(int i = 0; i < n; i++){
          Node* temp = q.front();
          q.pop();
          cout << temp->data << " ";
          if(temp->left) q.push(temp->left);
          if(temp->right) q.push(temp->right);
      }
      cout << endl;
  }
}

void inorder(Node* root){  // LNR
  // base case
  if(root == NULL){
    return;
  }
  inorder(root->left);
  cout << root->data << " ";
  inorder(root->right);
}
void preorder(Node* root){  // NLR
  // base case
  if(root == NULL){
    return;
  }
  cout << root->data << " ";
  preorder(root->left);
  preorder(root->right);
}

void postOrder(Node* root){  // LRN
  // base case
  if(root == NULL){
    return;
  }
  postOrder(root->left);
  postOrder(root->right);
  cout << root->data << " ";
}
//! homework -> reverse level order traversal
int main(){
  Node* root = NULL;
  // creating a tree
  // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
/*   root = buildTree(root);
  // level of traversal
  cout << "level of traversal\n";
  levelOfTraversal(root);
  cout << endl;
  // in order traversal
  cout << "inorder traversal\n";
  inorder(root);
  cout << endl;
  cout << "preorder traversal\n";
  preorder(root);
  cout << endl;
  cout << endl;
  // display(root);
  cout << "post order\n";
  postOrder(root); */
  buildFromLevelOrder(root);  // 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1
  display(root);
  return 0;
}