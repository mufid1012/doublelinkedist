#include <iostream>
#include <string>
using namespace std;

struct Node
{
    int noMhs;
    string name;
    Node* next;
    Node* prev;
};

Node* START = NULL;

void addNode() {
    Node* newNode = new Node(); // step 1: create a new node
    cout << "\nEnter the roll number of the student: ";
    cin >> newNode->noMhs;      // Assign value to the data field of the new node
    cout << "\nEnter the name of the student: ";
    cin >> newNode->name;       // Assign value to the data field of the new node

    //insert the new node in the list
    if (START == NULL || newNode->noMhs <= START->noMhs) {
        
         if (START != NULL && newNode->noMhs == START->noMhs) { // step 2: insert the new node
            cout << "\003[31mDuplicate roll numbers not allowed\003[0m" << endl;
            return;
    }

}