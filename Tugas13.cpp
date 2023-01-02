#include <iostream>
using namespace std;

struct Node {
  int data;
  Node *next;
  Node(int val=0) :data(val), next(nullptr){}
  Node(int val, Node *tempNext):data(val), next(tempNext){}
};
class Linkedlist
{
  Node* head;
public:
  Linkedlist():head(nullptr)
  {
  }
  void insert(int val) {
    Node* new_node = new Node(val);
    if (head == nullptr) {
      head = new_node;
    }
    else {
      new_node->next = head;
      head = new_node;
    }
  }
  bool search(int val) {
    Node* temp = head;
    while(temp != nullptr) {
      if(temp->data == val)
        return true;
      temp = temp->next;
    }
    return false;
  }

void remove(int val) {
  Node* temp = head;
  // If the head is to be deleted
  if (temp != nullptr && temp->data == val) {
    head = temp -> next;
    delete temp;
    return;
  }
  else {
    Node* curr = head;
    while(temp != nullptr && temp->data != val) {
      curr = temp;
      temp = temp->next;
    }
    if(!temp) {
      cout << "value not found" << endl;
      return;
    }
    curr -> next = temp -> next;
    delete temp;
  }
}
void display() {
  Node* temp = head;
  while(temp != nullptr) {
    cout << temp -> data << " ";
    temp = temp -> next;
  }
   cout << endl;
 }
};
int main() {

  Linkedlist l;

  l.insert(6);
  l.insert(9);
  l.insert(1);
  l.insert(3);
  l.insert(7);
  cout << "Current Linked List: ";
  l.display();
  cout << "Deleting 3: ";
  l.remove(3);
  l.display();
  cout << "Deleting 13: ";
  l.remove(13);
  cout << "searching for 7: ";
  cout << l.search(7) << endl;
  cout << "searching for 13: ";
  cout << l.search(13) << endl;
}