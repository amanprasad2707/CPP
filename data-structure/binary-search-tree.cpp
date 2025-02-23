#include<iostream>
#include<queue>
using namespace std;
class Node{
  public: 
    int data;
    Node* right;
    Node* left;
    Node(int data){
      this->data = data;
      this->left = NULL;
      this->right = NULL;
    }
};
Node* insertIntoBST(Node* root, int data){  // insertion time complexity O(logn)
  // base case
  if(root == NULL){
    root = new Node(data);
    return root;
  }
  if(data > root->data){
    // insert at right part
    root->right = insertIntoBST(root->right, data);
  }
  else{
    // insert at left part
    root->left = insertIntoBST(root->left, data);
  }
  return root;
}
void takeInput(Node* &root){
  int data;
  cin >> data;
  while(data != -1){
    root = insertIntoBST(root, data);
    cin >> data;
  }
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
int getMin(Node* root){
  Node* temp = root;
  while (temp->left != NULL)
  {
    temp = temp->left;
  }
  return temp->data;
}
int getMax(Node* root){
  Node* temp = root;
  while (temp->right != NULL)
  {
    temp = temp->right;
  }
  return temp->data;
}
Node* deleteFromBST(Node* root, int val){
  // base case
  if(root == NULL) return NULL;
  if(root->data == val){
    // 0 child
    if(root->left == NULL && root->right == NULL){
      delete root;
      return NULL;
    }
    // 1 child
        // left child
    if(root->left != NULL && root->right == NULL){
      Node* temp = root->left;
      delete root;
      return temp;
    }
        // right child
        if(root->right != NULL && root->left == NULL){
          Node* temp = root->right;
          delete root;
          return temp;
        }

    // 2 child
    if(root->left != NULL && root->right != NULL){
      int minVal = getMin(root->right);
      root->data = minVal;
      root->right = deleteFromBST(root->right, minVal);
      return root;
    }
  }
  else if(root->data > val){ // left part
    root->left = deleteFromBST(root->left, val);
    return root;
  }
  else{ // right part
    root->right = deleteFromBST(root->right, val);
    return root;
  }

}
int main(){
  Node* root = NULL;
  cout << "enter data to create BST" << endl;
  takeInput(root);
  root = deleteFromBST(root, 30);
  levelOfTraversal(root);
  cout << "minimum element in BST: " << getMin(root) << endl;
  cout << "minimum element in BST: " << getMax(root) << endl;
return 0;
}