#include <bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    Node* next;
    Node* prev;

    Node(int val) : data(val), next(nullptr), prev(nullptr) {}
};

// here the inertion will proceeds at the tail of a linked list
void insertionAtTail(Node* &head, Node* &tail, int data) {
    Node* newNode = new Node(data);
    if(!head) 
        head = tail = newNode;
    else {
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    }
}

// here the entire linked lsit will be printed according to the [head] node
void printDoublyLinkedList(Node* head) {
    Node* temp = head;

    while(temp) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "nullptr" << endl;
}

int main() {

    Node* head = nullptr;
    Node* tail = nullptr;
    int count, data;
    cout << "enter the no. of nodes you want to insert in the linked list : ";
    cin >> count;
    for(int i=0; i<count; ++i) {
        cout << "enter data : ";
        cin >> data;
        insertionAtTail(head, tail, data);
    }
    cout << "printing the linked list according to your preference : " << endl;
    printDoublyLinkedList(head);
}


/*
enter the no. of nodes you want to insert in the linked list : 5
enter data : 10
enter data : 20
enter data : 30
enter data : 40
enter data : 50
printing the linked list according to your preference : 10 -> 20 -> 30 -> 40 -> 50 -> nullptr
*/