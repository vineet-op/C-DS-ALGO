#include <iostream>
using namespace std;
class Node
{
public:
    int no;
    Node *left;
    Node *right;

    Node()
    {
        left = NULL;
        right = NULL;
    }
};
class Stack
{
public:
    Node *data[20];

    int top;

public:
    Stack()
    {
        top = -1;
    }
    void push(Node *x)
    {
        top++;
        data[top] = x;
    }
    Node *pop()
    {
        Node *x;
        x = data[top];
        top--;
        return x;
    }
    int isempty()
    {
        if (top == -1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    Node *top()
    {
        if (top == -1)
        {
            return NULL;
        }
        return data[top];
    }
};

class Tree
{
public:
    Node *root;

public:
    Tree()
    {
        root = NULL;
    }
    void Create();
    void Inorder(Node *temp);
    void Preorder(Node *temp);
    void Postorder(Node *temp);
    void Inorder_nonrec();
    void Preorder_nonrec();
};
void Tree ::Create()
{
    char side;
    Node *nnode;
    Node *temp;
    do
    {
        cout << "\n\t Enter the data in the tree ";
        nnode = new Node();
        cin >> nnode->no;
        if (nnode->no == -1)
        {
            break;
        }
        if (root == NULL)
        {
            root = nnode;
        }
        else
        {
            temp = root;

            while (1)
            {
                cout << "\n\t Enter the data in l/r of the tree " << temp->no;
                cin >> side;
                if (side == 'l')
                {
                    if (temp->left == NULL)
                    {
                        temp->left = nnode;
                        break;
                    }
                    else
                    {
                        temp = temp->left;
                    }
                }
                else if (side == 'r')
                {
                    if (temp->right == NULL)
                    {
                        temp->right = nnode;
                        break;
                    }
                    else
                    {
                        temp = temp->right;
                    }
                }
            }
        }
    } while (1);
}
void Tree ::Inorder(Node *temp)
{
    if (temp != NULL)
    {
        Inorder(temp->left);
        cout << temp->no;
        Inorder(temp->right);
    }
}
void Tree ::Preorder(Node *temp)
{
    if (temp != NULL)
    {
        cout << temp->no;
        Preorder(temp->left);
        Preorder(temp->right);
    }
}
void Tree ::Postorder(Node *temp)
{
    if (temp != NULL)
    {
        Postorder(temp->left);
        Postorder(temp->right);
        cout << temp->no;
    }
}
void Tree ::Inorder_nonrec()
{
    {
        Stack s1;
        Node *temp;
        temp = root;
        while (temp != NULL)
        {
            s1.push(temp);
            temp = temp->left;
        }
        while (!s1.isempty())
        {
            temp = s1.pop();
            cout << "\n\t " << temp->no;
            if (temp->right != NULL)
            {
                temp = temp->right;
                while (temp != NULL)
                {
                    s1.push(temp);
                    temp = temp->left;
                }
            }
        }
    }
}
void Tree ::Preorder_nonrec()
{

    {
        Stack s1;
        Node *temp;
        temp = root;
        if (root == NULL)
        {
            return;
        }
        s1.push(root);
        while (!s1.isempty())
        {
            temp = s1.top();
            cout << "\n\t " << temp->no;
            s1.pop();
            if (temp->right != NULL)
            {
                s1.push(temp->right);
            }
            if (temp->left != NULL)
            {
                s1.push(temp->left);
            }
        }
    }
}
int main()
{
    Node *temp;
    Tree obj;
    int ch;
    char c;
    system("clear");
    do
    {
        cout << "\n\t___________________________________";
        cout << "\n\t --------MENU------------------";
        cout << "\n\t___________________________________";
        cout << "\n\t 1.Create the tree ";
        cout << "\n\t 2.Display the tree in inorder ";
        cout << "\n\t 3.Display the tree in preorder ";
        cout << "\n\t 4.Display the tree in postorder ";
        cout << "\n\t 5.Display the tree in Inorder by Non-Recusion ";
        cout << "\n\t 6.Display the tree in Preorder by Non-Recusion ";
        cout << "\n\t 7. exit ";
        cout << "\n\t___________________________________________";
        cout << "\n\t Enter your choice from (1-7) :-";
        cin >> ch;
        switch (ch)
        {
        case 1:
            obj.Create();
            break;
        case 2:
            obj.Inorder(obj.root);
            break;
        case 3:
            obj.Preorder(obj.root);
            break;
        case 4:
            obj.Postorder(obj.root);
            break;
        case 5:
            obj.Inorder_nonrec();
            break;
        case 6:
            obj.Preorder_nonrec();
            break;
        case 7:
            exit(0);
            break;
        default:
            cout << "\n\t Please enter the correct choice :";
        }
        cout << "\n\t Do you want to continue (y/n) :-";
        cin >> c;
    } while (c == 'y' || c == 'Y');
    return 1;
}