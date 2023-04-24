#include <iostream>
using namespace std;

class TNode
{

public:
    int no;
    TNode *left;
    TNode *right;

    TNode()
    {
        left = NULL;
        right = NULL;
    }
};

class GBT
{
public:
    TNode *root;

public:
    GBT()
    {
        root = NULL;
    }

    // Defining the methods
    void Create();
    void Inorder(TNode *temp);
    void Preorder(TNode *temp);
    void Postorder(TNode *temp);
};

void GBT ::Create()
{

    char side;
    TNode *nnode;
    TNode *temp;

    do
    {
        cout << "Enter the element";
        nnode = new TNode();
        cin >> nnode->no;

        if (nnode->no == -1)
            break;

        if (root == NULL)
        {
            root = nnode;
        }

        else
        {
            temp = root;

            while (1)
            {

                cout << "Enter Left or Right side of" << temp->no;
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

void GBT ::Inorder(TNode *temp)
{
    if (temp != NULL)
    {
        Inorder(temp->left);
        cout << temp->no;
        Inorder(temp->right);
    }
}
void GBT ::Preorder(TNode *temp)
{
    if (temp != NULL)
    {
        cout << temp->no;
        Preorder(temp->left);
        Preorder(temp->right);
    }
}
void GBT ::Postorder(TNode *temp)
{
    if (temp != NULL)
    {
        Postorder(temp->left);
        Postorder(temp->right);
        cout << temp->no;
    }
}

int main()
{

    TNode *temp;
    GBT obj;
    int ch;
    char c, y, Y;
    system("clear");

    do
    {
        cout << "\n\t_______________________________";
        cout << "\n\t --------MENU------------------";
        cout << "\n\t_______________________________";
        cout << "\n\t 1.Create the tree ";
        cout << "\n\t 2.Display the tree in inorder ";
        cout << "\n\t 3.Display the tree in preorder ";
        cout << "\n\t 4.Display the tree in postorder ";
        cout << "\n\t 5. exit ";
        cout << "\n\t____________";
        cout << "\n\t Enter your choice from (1-5) :-";
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
            exit(0);
            break;

        default:
            cout << "\n\t Please enter the correct choice :";
            break;
        }

        cout << "\n\t Do you want to continue (y/n) :-";
        cin >> c;
    } while (c == 'y' || c == 'Y');
    return 1;
}