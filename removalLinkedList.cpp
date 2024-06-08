#include <bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
};

void insertion(Node* &head, Node* &tail, int data) {
    Node* newNode = new Node(data);

    if(!head)
        head = tail = newNode;
    else {
        tail->next = newNode;
        tail = newNode;
    }
}

void printLinkedList(Node* head) {
    Node* temp = head;
    
    while(temp) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "nullptr" << endl;
}

void removeFromLinkedList(Node* &head, Node* &tail, int obj) {

    // if the node belongs to [head]
    if (head != nullptr && obj == head->data) {
        Node* temp = head;
        head = temp->next;
        temp->next = nullptr;
    }

    // if the node belongs to [tail]
    else if(obj == tail->data) {
        Node* prev = head;
        while(prev->next != tail)
            prev = prev->next;
        prev->next = nullptr;
        tail = prev;
    }

    // if the node belongs in the middle of the linked list
    else {
        Node* prev = head;
        while(prev->next->data != obj) 
            prev = prev->next;
        Node* next = prev->next->next;
        prev->next->next = nullptr;
        prev->next = next;
    }
}

int main() {

    Node* head = nullptr;
    Node* tail = nullptr;
    int count, data, remove;
    cout << "enter the no. of nodes to create a linked list : ";
    cin >> count;
    
    for(int i=0; i<count; ++i) {
        cout << "enter data : ";
        cin >> data;
        insertion(head, tail, data);
    }

    cout << "printing linked list : ";
    printLinkedList(head);

    cout << "enter the data to remove : ";
    cin >> remove;
    removeFromLinkedList(head, tail, remove);
    
    cout << "printing linked list after removal : ";
    printLinkedList(head);
    
    
    /*
    removal from [head]
    enter the no. of nodes to create a linked list : 
    enter data : 10
    enter data : 20
    enter data : 30
    enter data : 40
    enter data : 50
    printing linked list : 10 -> 20 -> 30 -> 40 -> 50 -> nullptr
    enter the data to remove : 10
    printing linked list after removal : 20 -> 30 -> 40 -> 50 -> nullptr

    removal from [tail]
    enter the no. of nodes to create a linked list : 
    enter data : 10
    enter data : 20
    enter data : 30
    enter data : 40
    enter data : 50
    printing linked list : 10 -> 20 -> 30 -> 40 -> 50 -> nullptr
    enter the data to remove : 50 
    printing linked list after removal : 10 -> 20 -> 30 -> 40 -> nullptr

    removal from [middle]
    enter the no. of nodes to create a linked list : 
    enter data : 10
    enter data : 20
    enter data : 30
    enter data : 40
    enter data : 50
    printing linked list : 10 -> 20 -> 30 -> 40 -> 50 -> nullptr
    enter the data to remove : 30 (you can choose any element from the middle)
    printing linked list after removal : 10 -> 20 -> 40 -> 50 -> nullptr
    */

}