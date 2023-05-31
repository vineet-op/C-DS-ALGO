// Stack using linked list
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
class Stack
{
private:
    Node *top;

public:
    Stack()
    {
        top = NULL;
    }
    void push(int no)
    {
        Node *nnode;
        nnode = new Node(no);
        if (nnode == NULL)
        {
            cout << "\n\t Stack overflow occurs ";
        }
        if (top == NULL)
        {
            top = nnode;
        }
        else
        {
            nnode->next = top;
            top = nnode;
        }
    }
    int pop()
    {
        if (top == nullptr)
        {
            cout << "\n\t Stack underflow occurs";
            return -1;
        }
        Node *x;
        int no;
        no = top->data;
        top = top->next;
        delete x;
        return no;
    }
    int isempty()
    {
        if (top == NULL)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    void display()
    {
        Node *temp;
        for (temp = top; temp != NULL; temp = temp->next)
        {
            cout << temp->data;
        }
    }
};
int main()
{
    Stack s1;
    cout << "\n\t Data pushed or insert successfully ";
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);
    cout << "\n\t Data pop or delete successfully ";
    cout << "Popped value: " << s1.pop() << endl;
    cout << "Popped value: " << s1.pop() << endl;
    cout << "Popped value: " << s1.pop() << endl;
    cout << "Popped value: " << s1.pop() << endl;
    cout << "Popped value: " << s1.pop() << endl;
    return 0;
}