#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class CircularLinkedList {
private:
    Node* head;

public:
    CircularLinkedList() {
        head = nullptr;
    }

    void insertAtHead(int value) {
        Node* new_Node = new Node(value);

        if (head == nullptr) { // List is empty
            new_Node->next = new_Node;
            head = new_Node;
        } else {
            Node* temp = head;
            while (temp->next != head) {
                temp = temp->next;
            }
            temp->next = new_Node;
            new_Node->next = head;
            head = new_Node;
        }
    }

    void display() {
        if (head == nullptr) {
            cout << "List is empty" << endl;
            return;
        }
        Node* temp = head;
        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);
        cout << endl;
    }
};

int main() {
    CircularLinkedList cll;
    cll.insertAtHead(10);
    cll.insertAtHead(20);
    cll.insertAtHead(30);

    cll.display(); // Output: 30 20 10

    return 0;
}
