//Array
#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    cout << "Array elements: ";
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}

//Stack using Array
#include <iostream>
using namespace std;

#define SIZE 5
class Stack {
    int top;
    int arr[SIZE];
public:
    Stack() { top = -1; }

    void push(int val) {
        if(top >= SIZE - 1)
            cout << "Stack Overflow\n";
        else
            arr[++top] = val;
    }

    void pop() {
        if(top < 0)
            cout << "Stack Underflow\n";
        else
            top--;
    }

    void display() {
        if(top < 0) {
            cout << "Stack is empty\n";
            return;
        }
        cout << "Stack: ";
        for(int i = top; i >= 0; i--)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    s.pop();
    s.display();
    return 0;
}

//Queue using array
#include <iostream>
using namespace std;

#define SIZE 5
class Queue {
    int arr[SIZE];
    int front, rear;

public:
    Queue() {
        front = rear = -1;
    }

    void enqueue(int val) {
        if(rear == SIZE - 1)
            cout << "Queue Overflow\n";
        else {
            if(front == -1) front = 0;
            arr[++rear] = val;
        }
    }

    void dequeue() {
        if(front == -1 || front > rear)
            cout << "Queue Underflow\n";
        else
            front++;
    }

    void display() {
        if(front == -1 || front > rear)
            cout << "Queue is empty\n";
        else {
            cout << "Queue: ";
            for(int i = front; i <= rear; i++)
                cout << arr[i] << " ";
            cout << endl;
        }
    }
};

int main() {
    Queue q;
    q.enqueue(100);
    q.enqueue(200);
    q.enqueue(300);
    q.display();
    q.dequeue();
    q.display();
    return 0;
}

//singly linked list
#include <iostream>
using namespace std;

#define SIZE 5
class Queue {
    int arr[SIZE];
    int front, rear;

public:
    Queue() {
        front = rear = -1;
    }

    void enqueue(int val) {
        if(rear == SIZE - 1)
            cout << "Queue Overflow\n";
        else {
            if(front == -1) front = 0;
            arr[++rear] = val;
        }
    }

    void dequeue() {
        if(front == -1 || front > rear)
            cout << "Queue Underflow\n";
        else
            front++;
    }

    void display() {
        if(front == -1 || front > rear)
            cout << "Queue is empty\n";
        else {
            cout << "Queue: ";
            for(int i = front; i <= rear; i++)
                cout << arr[i] << " ";
            cout << endl;
        }
    }
};

int main() {
    Queue q;
    q.enqueue(100);
    q.enqueue(200);
    q.enqueue(300);
    q.display();
    q.dequeue();
    q.display();
    return 0;
}

