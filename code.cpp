#include<iostream>
using namespace std;

class Node{
  public:
    int data;
    Node* next;

    Node(int val){
      data = val;
      next = NULL;
    }
};

class List{
  private:
    Node* head;
    Node* tail;
  public:
    List(){
      head = NULL;
      tail = NULL;
    }
    void push_front(int val){
      Node* newNode = new Node(val);
      if(head == NULL){
        head = tail = newNode;
        return;
      }
      else{
        newNode->next = head;
        head = newNode;
      }
    }

    void push_back(int val){
      Node* newNode = new Node(val);
      if(head == NULL){
        head = tail = newNode;
        return;
      }
      else{
        tail->next = newNode;
        tail = newNode;
      }
    }

    void pop_front(){
      if(head == NULL){
        cout << "List is empty\n";
        return;
      }
      else{
        Node* temp = head;
        head = temp->next;
        temp->next = NULL;
        delete temp;
      }
    }

    void pop_back(){
      if(head == NULL){
        cout << "List is empty\n";
        return;
      }
      Node* temp = head;
      while(temp->next->next != NULL){
        temp = temp->next;
      }
      temp->next = NULL;
      delete tail;
      tail = temp;
    }

    void insert(int val, int pos){
      if(pos < 0){
        cout << "Invalid position\n";
        return;
      }
      else if(pos == 0){
        push_front(val);
      }
      else {
        Node*  temp = head;
        for(int i = 0; i<pos-1; i++){
          if(temp == NULL){
            return;
          }
          temp = temp->next;
        }
        Node* newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;
      }
    }

    int search(int key){
      int idx = 0;
      Node* temp = head;
      while(temp != NULL){
        if(temp->data == key){
          return idx;
        }
        idx++;
        temp = temp->next;
      }
      return -1;
    }


    void printLL(){
      Node* temp = head;
      while (temp != NULL){
        cout << temp->data << "->";
        temp = temp->next;
      }
      cout << "NULL\n";
    }
};
int main(){
  List ll;
  ll.push_front(2);
  ll.push_front(9);
  ll.push_back(3);
  ll.push_back(5);
  ll.printLL();
  ll.insert(15,2);
  // ll.pop_front();
  // ll.pop_back();
  ll.printLL();
  cout << ll.search(125);
  return 0;
}