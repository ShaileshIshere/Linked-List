#include <bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    Node* next;
    
    // creation of parametarized constructor
    Node(int val) : data(val), next(nullptr) {}
};

// this function will connect nodes and eventually forms a linked list
void insertion(Node* &head, Node* &tail, int data) {
    // creation of a new node based on the [data]
    Node* newNode = new Node(data);

    // this is the insertion of the very first node in linked list
    if(!head)
        head = tail = newNode;
    
    // after the first insertion there goes all nodes after the first one
    else {
        tail->next = newNode;
        tail = newNode;
    }
}

// this function will print the entire linked list on the basis of their [first node]
void printLinkedList(Node* head) {

    // always create a [temp] variable to iterate on a linked list
    Node* temp = head;

    while(temp) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "nullptr" << endl;
}

int main() {

    // noob/beginner way of assigning data into linked list
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = nullptr;
    cout << "printing linked list :" << endl;
    printLinkedList(first);

    /*
    printing linked list : 10 -> 20 -> 30 -> 40 -> 50 -> nullptr
    */

    // advance way of assigning data into linked list
    int count, data;
    Node* head = nullptr;
    Node* tail = nullptr;
    cout << "enter the no. of nodes to create a linked list : ";
    cin >> count;
    for(int i=0; i<count; ++i) {
        cout << "enter data : ";
        cin >> data;
        insertion(head, tail, data);
    }
    cout << "printing linked list :" << endl;
    printLinkedList(head);

    /*
    enter the no. of nodes to create a linked list : 5
    enter data : 10
    enter data : 20
    enter data : 30
    enter data : 40
    enter data : 50
    printing linked list : 10 -> 20 -> 30 -> 40 -> 50 -> nullptr
    */
   
}