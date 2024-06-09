#include <bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    Node* next;
    Node* prev;

    // creation of default constructor of a doubly linked list
    Node() : next(nullptr), prev(nullptr) {
        cout << "I'm inside default constructor" << endl;
    }

    // creation of parametarized constructor of a doubly linked list
    Node(int val) : data(val), next(nullptr), prev(nullptr) {
        cout << "I'm inside parametarized constructor" << endl;
    }
};

int main() {

    // initialization of a default constructor
    Node a; // static memory allocation
    Node *head = new Node(); // dynamic memory allocation

    /*
    I'm inside default constructor
    I'm inside default constructor
    */

    // initialization of a parametarized constructor
    Node A(10); // static memory allocation
    Node* HEAD = new Node(10); // dynamic memory allocation

    /*
    I'm inside parametarized constructor
    I'm inside parametarized constructor
    */

}