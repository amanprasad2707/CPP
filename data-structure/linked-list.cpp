#include <iostream>
using namespace std;

class Node{
public:
  int data;
  Node *next;

  Node(int val){   // parameterized constructor
    data = val;
    next = NULL;
  }
};

class List{
private:
  Node *head;
  Node *tail;

public:
  List(){
    head = tail = NULL;
  }

  void push_front(int val){ //* O(1)
    Node *newNode = new Node(val); // dynamic object -> persists even the function call in ended
    // Node newNode(val);  // static object -> this object is automatically deleted when the control is out of the function
    if (head == NULL){
      head = tail = newNode;
      return;
    }
    else{
      newNode->next = head;
      // (*newNode).next = head;  // same as upper line
      head = newNode;
    }
  }

  void push_back(int val){  //* O(1)
    Node *newNode = new Node(val);
    if (head == NULL){
      head = tail = newNode;
    }
    else{
      tail->next = newNode;
      tail = newNode;
    }
  }

  void pop_front(){  //* O(1)
    if (head == NULL){
      cout << "linked-list is empty\n";
      return;
    }
    Node *temp = head;
    head = head->next;
    temp->next = NULL;
    delete temp;
  }

  void pop_back(){  //* O(n)
    if (head == NULL){
      cout << "linked-list is empty\n";
      return;
    }
    Node *temp = head;
    while (temp->next != tail){ // or temp->next->next != NULL
      temp = temp->next;
    }
    temp->next = NULL;
    delete tail; // delete keyword doesn't delete the variable name it delete the internal heap memory of the variable
    tail = temp;
  }

  void insert(int val, int pos){  //* O(n)
    if (pos < 0){
      cout << "Invalid position\n";
      return;
    }
    else if (pos == 0){
      push_front(val);
      return;
    }
    else{
      Node *temp = head;
      for (int i = 0; i < pos - 1; i++){
        if (temp == NULL){
          cout << "Invalid position\n";
          return;
        }
        temp = temp->next;
      }
      Node *newNode = new Node(val);
      newNode->next = temp->next;
      temp->next = newNode;
    }
  }

  int search(int key){  //* O(n)
    Node *temp = head;
    int idx = 0;
    while (temp != NULL){
      if (temp->data == key){
        return idx;
      }
      else{
        temp = temp->next;
        idx++;
      }
    }
    return -1;
  }

  /* we use temperory pointer temp to print all the linked list elements
because if we update the head pointer then backward traversal is not possible
In linkedlist we can only travel in forward direction by using head pointer */
  void printLinkedLIst(){  //* O(n)
    Node *temp = head;
    while (temp != NULL){
      // cout << temp->data << " :  " << temp->next  << endl;
      cout << temp->data << "-> ";
      temp = temp->next;
    }
    cout << "NULL\n";
  }
};

int main(){
  List ll;
  ll.push_front(1);
  ll.push_front(2);
  ll.push_front(3);
  ll.push_back(4);
  ll.printLinkedLIst();
  // ll.pop_front();
  // ll.pop_back();
  ll.insert(12, 2);
  ll.printLinkedLIst();
  cout << ll.search(41);
  return 0;
}