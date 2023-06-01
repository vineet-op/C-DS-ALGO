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
        front = 0;
        rear = -1;
        size = 10; // Initialize the size of the queue
    }

    void Enqueue(int no)
    {
        if (isfull())
        {
            cout << "Queue is full. Cannot enqueue.\n";
            return;
        }
        rear++;
        Q[rear] = no;
    }

    int Denqueue()
    {
        if (isempty())
        {
            cout << "Queue is empty. Cannot dequeue.\n";
            return -1; // Return a default value indicating an error
        }
        int no = Q[front];
        front++;
        return no;
    }

    bool isempty()
    {
        if (rear + 1 == front)
            return true;
        else
            return false;
    }

    bool isfull()
    {
        if (rear == size - 1)
            return true;
        else
            return false;
    }

    void display()
    {
        if (isempty())
        {
            cout << "Queue is empty.\n";
            return;
        }
        for (int i = front; i <= rear; i++)
        {
            cout << Q[i] << "\n\t";
        }
        cout << endl;
    }
};

int main()
{
    Queue q1;
    cout << "\n\t Data inserted or Enqueue successfully";
    q1.Enqueue(10);
    q1.Enqueue(20);
    q1.Enqueue(30);
    q1.Enqueue(40);
    q1.Enqueue(50);
    q1.display();
    cout << "\n\t Data Dequeue or deleted successfully\n";
    cout << "Popped value: " << q1.Denqueue() << endl;
    cout << "Popped value: " << q1.Denqueue() << endl;
    cout << "Popped value: " << q1.Denqueue() << endl;
    cout << "Popped value: " << q1.Denqueue() << endl;
    cout << "Popped value: " << q1.Denqueue() << endl;
    q1.display();
    return 0;
}
