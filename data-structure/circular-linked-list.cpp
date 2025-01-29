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

class CircularList{
private:
  Node* head;
  Node* tail;

public:
  CircularList(){
    head = tail = NULL;
  }

  void insertAtHead(int val){
    Node* newNode = new Node(val);
    if(head == NULL){  // we can write tail == NULL as well
      head = tail = newNode;
      tail->next = head;
    }else{
      newNode->next = head;
      head = newNode;
      tail->next = head;
    }
  }

  void insertAtTail(int val){
    Node* newNode = new Node(val);
    if(head == NULL){
      head = tail = newNode;
      tail->next = head;
    }else{
      tail->next = newNode;
      newNode->next = head;
      tail = newNode;
    }
  }

  void deleteAtHead(){
    if(head == NULL) return;
    else if(head == tail){  // single node
      delete head;
      head = tail = NULL;
    }
    else{
      Node* temp = head;
      head = head->next;
      tail->next = head;
      temp->next = NULL;
      delete temp;
    }
  }

  void deleteAtTail(){
    if(head == NULL) return;
    else if(head == tail){
      delete head;
      head = tail = NULL;
    }
    else{
      Node* temp = tail;
      Node* prev = head;
      while(prev->next != tail){
        prev = prev->next;
      }
      tail = prev;
      tail->next = head;
      temp->next = NULL;
      delete temp;

    }
  }

  void printCircularList(){
    if(head == NULL) return;
    cout << head->data << " -> ";
    Node* temp = head->next;
    while(temp != head){
      cout << temp->data << " -> ";
      temp = temp->next;
    }
    cout << "NULL\n";
  }

};
int main(){
  CircularList cl;
  cl.insertAtHead(1);
  cl.insertAtHead(2);
  cl.insertAtHead(3);
  cl.insertAtTail(4);
  cl.insertAtTail(5);
  cl.deleteAtHead();
  cl.deleteAtTail();
  cl.printCircularList();
return 0;
}