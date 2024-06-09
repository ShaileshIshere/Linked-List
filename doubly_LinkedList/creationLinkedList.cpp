#include <bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    Node* next;
    Node* prev;

    Node(int val) : data(val), next(nullptr), prev(nullptr) {}
};

void insertion(Node* &head, Node* &tail, int data) {
    Node* newNode = new Node(data);

    if(!head)
        head = tail = newNode;
    else {
        newNode->prev = tail;
        tail->next = newNode;
        newNode = tail;
    }
}

void printDoublyLinkedList(Node* head) {
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
    second->prev = first;
    second->next = third;
    third->prev = second;
    third->next = fourth;
    fourth->prev = third;
    fourth->next = fifth;
    fifth->prev = fourth;
    fifth->next = nullptr;
    cout << "printing linked list :" << endl;
    printDoublyLinkedList(first);

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
    printDoublyLinkedList(head);

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