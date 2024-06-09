#include <bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    Node* next;
    Node* prev;

    Node(int val) : data(val), next(nullptr), prev(nullptr) {}
};

int findLength(Node* head) {
    Node* temp = head;
    int count = 0;
    while(temp) {
        ++count;
        temp = temp->next;
    }
    return count;
}

void insertion(Node* &head, Node* &tail, int data) {
    Node* newNode = new Node(data);

    if(!head)
        head = tail = newNode;
    else {
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    }
}

void insertionAtMiddle(Node* &head, Node* &tail, int data, int length, int position) {
    if(position >= length || position <= (length - (length - 1))) {
        cout << "insertion not possible" << endl;
        return;
    }
    else {
        Node* newNode = new Node(data);
        Node* prev = nullptr;
        Node* curr = head;
        while(position != 1) {
            --position;
            prev = curr;
            curr = curr->next;
        }
        prev->next = newNode;
        newNode->prev = prev;
        newNode->next = curr;
        curr->prev = newNode;
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

    int count, data, length, position;
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

    length = findLength(head);
    cout << "which position you want to insert a new node : ";
    cin >> position;
    cout << "enter data : ";
    cin >> data;
    insertionAtMiddle(head, tail, data, length, position);
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
    which position you want to insert a new node : 3 
    enter data : 25
    printing linked list : 10 -> 20 -> 25 -> 30 -> 40 -> 50 -> nullptr
    */

}