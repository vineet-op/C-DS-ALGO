#include <iostream>
using namespace std;

class Queue
{
    int Q[10];
    int front, rear;
    int size;

public:
    Queue()
    {
        front = -1;
        rear = -1;
        size = 10; // Initialize the size of the queue
    }

    bool isfull()
    {
        if ((front == 0 && rear == size - 1) || (rear == front - 1))
            return true;
        else
            return false;
    }

    bool isempty()
    {
        if (front == -1)
            return true;
        else
            return false;
    }

    void Enqueue(int no)
    {
        if (isfull())
        {
            cout << "Queue is full. Cannot enqueue.\n";
            return;
        }
        if (front == -1)
            front = 0;
        rear = (rear + 1) % size;
        Q[rear] = no;
        cout << "Element " << no << " inserted successfully.\n";
    }

    void Dequeue()
    {
        if (isempty())
        {
            cout << "Queue is empty. Cannot dequeue.\n";
            return;
        }
        int no = Q[front];
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front = (front + 1) % size;
        }
        cout << "Popped value: " << no << endl;
    }

    void display()
    {
        if (isempty())
        {
            cout << "Queue is empty.\n";
            return;
        }
        int i = front;
        while (i != rear)
        {
            cout << Q[i] << "\n\t";
            i = (i + 1) % size;
        }
        cout << Q[i] << "\n\t";
    }
};

int main()
{
    Queue q1;
    cout << "Data inserted or Enqueue successfully\n";
    q1.Enqueue(10);
    q1.Enqueue(20);
    q1.Enqueue(30);
    q1.Enqueue(40);
    q1.Enqueue(50);
    q1.display();
    cout << "\nData Dequeue or deleted successfully\n";
    q1.Dequeue();
    q1.Dequeue();
    q1.Dequeue();
    q1.Dequeue();
    q1.Dequeue();
    q1.display();

    return 0;
}