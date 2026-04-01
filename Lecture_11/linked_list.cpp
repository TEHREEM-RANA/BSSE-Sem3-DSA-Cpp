

#include <iostream>
using namespace std;

// Node class
class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

// Linked List class
class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = NULL;
    }

    // 🔹 Insert at end
    void insert(int value) {
        Node* newNode = new Node(value);

        if (head == NULL) {
            head = newNode;
            return;
        }

        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    // 🔹 Display (Traversal / Access)
    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    // 🔹 Search (O(n))
    void search(int key) {
        Node* temp = head;
        int index = 0;

        while (temp != NULL) {
            if (temp->data == key) {
                cout << "Found at position: " << index << endl;
                return;
            }
            temp = temp->next;
            index++;
        }
        cout << "Not Found" << endl;
    }

    // 🔹 Delete by value
    void deleteNode(int key) {
        if (head == NULL) return;

        // delete head
        if (head->data == key) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node* temp = head;
        while (temp->next != NULL && temp->next->data != key) {
            temp = temp->next;
        }

        if (temp->next != NULL) {
            Node* del = temp->next;
            temp->next = temp->next->next;
            delete del;
        }
    }
};

int main() {
    LinkedList list;

    // 🔹 Insertion
    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);

    cout << "List: ";
    list.display();

    // 🔹 Access (Traversal)
    cout << "Traversal: ";
    list.display();

    // 🔹 Search
    list.search(30);

    // 🔹 Deletion
    list.deleteNode(20);

    cout << "After Deletion: ";
    list.display();

    return 0;
}