#include<iostream>
using namespace std;

class Node{
public:
  int data;
  Node* next;
  Node* prev;

  Node(int val){
    data = val;
    next = NULL;
    prev = NULL;
  }
};

class DoublyLL{
  private:
    Node* head;
    Node* tail;

  public:
    DoublyLL(){
      head = tail = NULL;
    }

    void push_front(int val){
      Node* newNode = new Node(val);
      if(head == NULL){
        head = tail = newNode;
        return;
      }
      head->prev = newNode;
      newNode->next = head;
      head = newNode;
    }

    void push_back(int val){
      Node* newNode = new Node(val);
      if(head == NULL){
        head = tail = newNode;
        return;
      }
      newNode->prev = tail;
      tail->next = newNode;
      tail = newNode;
    }

    void pop_front(){
      if(head == NULL){
        cout << "linked list is empty";
        return;
      }
      Node* temp = head;
      head = head->next;
      if(head->next != NULL){
        head->prev = NULL;
      }
      temp->next = NULL;
      delete temp;
    }

    void pop_back(){
      if(head == NULL){
        cout << "linked list is empty";
        return;
      }
      Node* temp = tail;
      tail = tail->prev;
      if(tail->next != NULL){
        tail->next = NULL;
      }
      temp->prev = NULL;
      delete temp;
    }

    void printLL(){
      Node* temp = head;
      if(head == NULL){
        cout << "Linked list is empty\n";
        return;
      }
      while(temp != NULL){
        cout << temp->data << " <--> ";
        temp = temp->next;
      }
      cout << "NULL\n";
    }
};
int main(){
  DoublyLL dll;
  dll.push_front(3);
  dll.push_front(2);
  dll.push_front(1);
  dll.push_back(4);
  dll.push_back(5);
  dll.pop_front();
  dll.pop_back();
  dll.pop_back();
  dll.printLL();
return 0;
}