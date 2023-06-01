#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int no)
    {
        data = no;
        next = NULL;
    }
};
class Queue
{
    Node *front, *rear;

public:
    Queue()
    {
        front = NULL;
        rear = NULL;
    }
    void Enqueue(int no)
    {
        Node *nnode;
        nnode = new Node(no);
        if (front == NULL && rear == NULL)
        {
            front = nnode;
            rear = nnode;
        }
        else
        {
            rear->next = nnode;
            rear = nnode;
        }
    }
    int Dequeue()
    {
        int no;
        Node *x;
        no = front->data;
        x = front;
        front = front->next;
        delete x;
        return no;
    }
    int isempty()
    {
        if (front == NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void display()
    {
        Node *temp;
        for (temp = front; temp != NULL; temp = temp->next)
        {
            cout << temp->data << "\n\t";
        }
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
    cout << "Deleted value: " << q1.Dequeue() << endl;
    cout << "Deleted value: " << q1.Dequeue() << endl;
    cout << "Deleted value: " << q1.Dequeue() << endl;
    cout << "Deleted value: " << q1.Dequeue() << endl;
    cout << "Deleted value: " << q1.Dequeue() << endl;
    q1.display();
    return 0;
}