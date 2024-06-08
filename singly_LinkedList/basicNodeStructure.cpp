#include <bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    Node* next;

    // creation of defalut constructor
    Node() : next(nullptr) {
        cout << "I'm inside default constructor" << endl;
    }

    // creation of a parametarized constructor
    Node(int val) : data(val), next(nullptr) {
        cout << "I'm inside parametarized constructor" << endl;
    }
};

int main() {

    // initialization of default constructor
    Node a; // static memory allocation
    Node *head = new Node(); // dynamic memory allocation

    /*
    I'm inside default constructor
    I'm inside default constructor
    */

    // initialization of prametarized constructor
    Node A(10); // static memory allocation
    Node *HEAD = new Node(10); // dynamic memory allocation

    /*
    I'm inside parametarized constructor
    I'm inside parametarized constructor
    */

  return 0;
}