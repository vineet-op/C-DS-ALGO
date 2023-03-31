#include <iostream>
using namespace std;

class Node
{
public:
    int no;
    Node *Next;

    // Assigned the constructor
    Node()
    {

        Next = NULL;
    }
};

class Linklist
{

    Node *head;

public:
    Linklist()
    {

        head = NULL;
    }

    void create();
    void display();
    void insert_begin();
    void insert_end();
    void insert_pos();
};

void Linklist ::create()
{

    Node *nnode, *temp;

    do
    {

        cout << "\n\t Enter the elements to create the linklist or -1 to terminate the linklist";
        nnode = new Node; // Assigning the place to nnode
        cin >> nnode->no; // Giving the  data value to

        // Condition to break the linklist

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

            for (temp = head; temp->Next != NULL; temp = temp->Next)
                ;
            temp->Next = nnode;
        }

    } while (1);
}

void Linklist ::display()
{
    Node *temp;

    for (temp = head; temp != NULL; temp = temp->Next)
    {
        cout << "\n\t" << temp->no;
    }
}

void Linklist ::insert_begin()
{
    Node *nnode;
    nnode = new Node; // Assigning the place to nnode
    cout << "Enter the node you want to enter";
    cin >> nnode->no;
    nnode->Next = head;
    head = nnode;
}
void Linklist ::insert_end()
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
    }
}

void Linklist ::insert_pos()
{

    int pos, i;
    Node *nnode, *temp;

    cout << "Enter the specific position to insert elements";
    cin >> pos;

    cout << "Enter the data you want to insert";
    nnode = new Node();
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
            if (i == pos - 1)
            {
                nnode->Next = temp->Next;
                temp->Next = nnode;
                i++;
                break;
            }
        }
    }

    if (i > pos)
    {
        for (temp = head; temp->Next != NULL; temp = temp->Next)
        {
            temp->Next = nnode;
        }
    }
}

int main()
{
    Linklist obj;
    int ch;
    char c;
    system("clear");
    do
    {
        cout << "\n\t_____";
        cout << "\n\t------MENU-------";
        cout << "\n\t_____";
        cout << "\n\t 1. Create_Linkedlist ";
        cout << "\n\t 2. Display_Linkedlist ";
        cout << "\n\t 3. Insert at beginning ";
        cout << "\n\t 4. Insert at Ending";
        cout << "\n\t 5. insert At position";
        cout << "\n\t 6. exit ";
        cout << "\n\t______";
        cout << "\n\t Enter your choice from (1-3) :-";
        cin >> ch;
        switch (ch)
        {
        case 1:
            obj.create();
            break;
        case 2:
            obj.display();
            break;
        case 3:
            obj.insert_begin();
            break;
        case 4:
            obj.insert_end();
            break;

        case 5:
            obj.insert_pos();
            break;
        case 6:
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