#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class Queue {
private:
    Node* front;
    Node* rear;

public:
    Queue() : front(NULL), rear(NULL) {}

    bool isEmpty() {
        return front == NULL;
    }

    void enqueue(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = NULL;

        if (isEmpty()) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }

        cout << "Enqueued: " << value << endl;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty. Cannot dequeue." << endl;
            return;
        }

        Node* temp = front;
        front = front->next;
        cout << "Dequeued: " << temp->data << endl;
        delete temp;

        if (front == NULL) {
            rear = NULL;
        }
    }

    void displayQueue() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }

        Node* current = front;
        cout << "Queue elements: ";
        while (current != NULL) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }

    ~Queue() {
        while (!isEmpty()) {
            dequeue();
        }
    }
};

int main() {
    Queue mQueue;

    mQueue.enqueue(1);
    mQueue.enqueue(2);
    mQueue.enqueue(3);
    mQueue.enqueue(4);
    mQueue.enqueue(5);

    mQueue.displayQueue();

    mQueue.dequeue();
    mQueue.dequeue();

    mQueue.enqueue(7);

    mQueue.displayQueue();

    return 0;
}
