#include <iostream>
using namespace std;

class TNode
{

public:
    int no;
    TNode *left, *right;

    TNode()
    {
        left = NULL;
        right = NULL;
    }
};

class GBT
{

    TNode *root;

    GBT()
    {

        root = NULL;
    }

    // Ddining the methods

    void Create();
    void Inorder();
    void Preorder();
    void Postorder();
};

void GBT ::Create()
{

    char side, l, r;
    TNode *nnode, *temp;

    do
    {
        cout << "Enter the element";
        nnode = new TNode();
        cin >> temp->no;

        if (temp->no == -1)
            break;

        if (root == NULL)
        {
            root = nnode;
        }

        else
        {
            temp = root;
        }

        cout << "Enter Left or Right side of" << temp->no;
        cin >> side;

        if (side == l)
        {
            if (temp->left == NULL)
            {
                temp->left = nnode;
            }

            else
            {
                temp = temp->left;
            }
        }

        else if (side == r)
        {
            if (temp->right == NULL)
            {
                temp->right = nnode;
            }

            else
            {
                temp = temp->right;
            }
        }
    } while (1);
}

void GBT ::Inorder(TNode *temp)
{
    if (temp != Null)
    {
        Inorder(temp->left);
        cout << temp->no;
        Inorder(temp->right);
    }
}