#include <iostream>
using namespace std;

// Declaring Class Node
class Node
{

public:
    int no;
    Node *Next;
    Node *Prev;
    // Defining Constructor
    Node()
    {

        Next = NULL;
        Prev = NULL;
    }
};

// Declaring Main Class

class Linklist
{

    Node *head;

public:
    Linklist()
    {

        head = NULL;
    }

    // Methods
    void Create();
    void Display();
    void Display_rev();
    void Insert_begin();
    void Insert_between();
    void Insert_end();
    void Insert_position();
    void Delete_Beg();
    void Delete_Between();
};

void Linklist ::Create()
{
    Node *nnode, *temp;

    do
    {
        cout << "/n/t Enter elements to create the linklist or press -1 to terminate";
        nnode = new Node; // Assigning the place to the nnode
        cin >> nnode->no; // storing elements in the no variable

        // Condition to the linklist

        if (nnode->no == -1)
        {
            break;
        }
        if (head == NULL)
        {
            head = nnode;
        }
        else
        {
            for (temp = head; temp != NULL; temp = temp->Next)
            {
                temp->Next = nnode;
            }
        }

    } while (1);
}

void Linklist ::Display()
{

    Node *temp;

    for (temp = head; temp != NULL; temp = temp->Next)
    {
        cout << "/n /t" << temp->no;
    }
}

void Linklist::Display_rev()
{
    Node *temp;
    for (temp = head; temp != NULL; temp = temp->Next)
        ;
    {
        for (; temp != NULL; temp = temp->Prev)
        {
        }
    }
}

void Linklist ::Insert_begin()
{

    Node *nnode;
    nnode = new Node;
    cout << " /n /t Enter the node you want to insert";
    cin >> nnode->no;
    nnode->Next = head;
    head = nnode;
    nnode->Next->Prev = nnode;
}

void Linklist::Insert_begin()
{
    int data, f = 0;
    Node *nnode;
    cout << "\n\t Enter a data to insert a new node in between the list ";
    cin >> data;
    for (Node *temp; temp != NULL; temp = temp->Next)
    {
        if (data == nnode->no)
        {
            cout << "\n\t Enter the data ";
            nnode = new Node;
            cin >> nnode->no;
            nnode->Prev = temp;
            nnode->Next = temp->Next;
            temp->Next = nnode;
            nnode->Next->Prev = nnode;
            f = 1;
            break;
        }
    }

    if (f == 0)
    {
        cout << "\n\t Data not found successfully. ";
    }
}

void Linkdelist ::Insert_end()
{
    Node *temp;
    Node *nnode;
    nnode = new Node;
    cout << "\n\t Enter a new node to inserrt a data at end :";
    cin >> nnode->no;
    for (temp = head; temp->Next != NULL; temp = temp->Next)
        ;
    {
        temp->Next = nnode;
        // nnode->Next->Prev=nnode;
    }
}
void Linkdelist ::Insert_position()
{
    int pos;
    int i;
    Node *temp;
    Node *nnode;
    cout << "\n\t Enter the position where to insert the data :";
    cin >> pos;
    cout << "\n\t Enter the data to insert :";
    nnode = new Node;
    cin >> nnode->no;
    if (pos == 1)
    {
        nnode->Next = head;
        head = nnode;
    }
    else
    {
        for (temp = head, i = 1; temp->Next != NULL; temp = temp->Next, i++)
        {
            if (pos == -1)
            {
                nnode->Next = temp->Next;
                temp->Next = nnode;
                break;
            }
        }
    }
    if (pos > i)
    {
        for (temp = head; temp->Next != NULL; temp = temp->Next)
            ;
        {
            temp->Next = nnode;
        }
    }
}
void Linkdelist ::Delete_Beg()
{
    Node *x;
    x = head;
    head = head->Next;
    delete x;
}
void Linkdelist ::Delete_Between()
{
    Node *x;
    int data;
    Node *temp;
    cout << "\n\t Which data to be delete :";
    cin >> data;
    for (temp = head; temp->Next != NULL; temp = temp->Next)
    {

        if (temp->Next->no == data)
        {
            cout << "\n\t " << temp->Next->no;
            x = temp->Next;
            temp->Next = x->Next;
            delete x;
            cout << "\n\t " << temp->Next->no;
        }
    }
}
int main()
{
    Linkdelist obj;
    int ch;
    char c;
    system("clear");
    do
    {
        cout << "\n\t_____________";
        cout << "\n\t     ------MENU-------";
        cout << "\n\t______________";
        cout << "\n\t     1. Create Linkedlist ";
        cout << "\n\t     2. Display Linkedlist ";
        cout << "\n\t     3. Insert at beginning ";
        cout << "\n\t     4. Insert at between ";
        cout << "\n\t     5. Insert at end ";
        cout << "\n\t     6. Insert at position ";
        cout << "\n\t     7. Delete at beginning ";
        cout << "\n\t     8. Delete at between ";
        cout << "\n\t     9. Display reverse Linkedlist ";
        cout << "\n\t     10. exit ";
        cout << "\n\t_____________";
        cout << "\n\t Enter your choice from (1-10) :-";
        cin >> ch;
        switch (ch)
        {
        case 1:
            obj.Create();
            break;
        case 2:
            obj.Display();
            break;
        case 3:
            obj.Insert_begin();
            break;
        case 4:
            obj.Insert_between();
            break;
        case 5:
            obj.Insert_end();
            break;
        case 6:
            obj.Insert_position();
            break;
        case 7:
            obj.Delete_Beg();
            break;
        case 8:
            obj.Delete_Between();
            break;
        case 9:
            obj.Display_rev();
            break;
        case 10:
            exit(0);
            break;
        default:
            cout << "\n\t Please enter the correct choice :";
        }
        cout << "\n\t Do you want to continue (y/n) :-";
        cin >> c;
    } while (c == 'y' || c == 'Y');
    return 0;
}