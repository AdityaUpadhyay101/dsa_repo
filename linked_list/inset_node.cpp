
#include <iostream>
using namespace std;

// ----------------------
// Node structure
// ----------------------
class Node {
public:
    int data;      // value stored in node
    Node* next;    // pointer to next node

    Node(int value) {
        data = value;
        next = NULL;
    }
};

// ----------------------
// Linked List class
// ----------------------
class LinkedList {
private:
    Node* head;    // head pointer

public:
    LinkedList() {
        head = NULL;
    }

    // ----------------------
    // Insert at end
    // ----------------------
    void insert(int value) {
        Node* newNode = new Node(value);

        // If list is empty, new node becomes head
        if (head == NULL) {
            head = newNode;
            return;
        }

        // Otherwise, traverse to last node
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }

        // Insert new node at end
        temp->next = newNode;
    }

    // ----------------------
    // Insert at Nth position
    // ----------------------
    void insertAtPosition(int value, int position) {
        Node* newNode = new Node(value);

        // Case 1: Insert at head
        if (position == 1) {
            newNode->next = head;
            head = newNode;
            return;
        }

        Node* temp = head;

        // Move temp to (position - 1)th node
        for (int i = 1; i < position - 1; i++) {
            if (temp == NULL) {  // Position is out of bounds
                cout << "Position out of range\n";
                return;
            }
            temp = temp->next;
        }

        // If temp is NULL, position doesn't exist
        if (temp == NULL) {
            cout << "Position out of range\n";
            return;
        }

        // Insert node: link new node between temp and temp->next
        newNode->next = temp->next;
        temp->next = newNode;
    }

    // ----------------------
    // Display the list
    // ----------------------
    void display() {
        if (head == NULL) {
            cout << "List is empty\n";
            return;
        }

        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

// ----------------------
// Main function
// ----------------------
int main() {
    LinkedList list;

    // Insert some initial values
    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);

    cout << "Original List:\n";
    list.display();

    // Insert new node at position 3
    cout << "\nInserting 25 at position 3...\n";
    list.insertAtPosition(25, 3);

    cout << "Updated List:\n";
    list.display();

    return 0;
}
