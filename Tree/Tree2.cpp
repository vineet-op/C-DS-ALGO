#include <iostream>
using namespace std;

class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class BinaryTree
{
public:
    TreeNode *root;

    BinaryTree() : root(nullptr) {}

    void insert(int val)
    {
        TreeNode *new_node = new TreeNode(val);
        if (root == nullptr)
        {
            root = new_node;
            return;
        }
        TreeNode *curr = root;
        while (true)
        {
            cout << "Insert " << val << " to left or right of " << curr->val << "? (L/R): ";
            char choice;
            cin >> choice;
            if (choice == 'L' || choice == 'l')
            {
                if (curr->left == nullptr)
                {
                    curr->left = new_node;
                    break;
                }
                curr = curr->left;
            }
            else if (choice == 'R' || choice == 'r')
            {
                if (curr->right == nullptr)
                {
                    curr->right = new_node;
                    break;
                }
                curr = curr->right;
            }
            else
            {
                cout << "Invalid choice. Please enter L or R." << endl;
            }
        }
    }

    void inOrderTraversal(TreeNode *node)
    {
        if (node == nullptr)
            return;
        inOrderTraversal(node->left);
        cout << node->val << " ";
        inOrderTraversal(node->right);
    }
};

int main()
{
    BinaryTree bt;
    int n;
    cout << "Enter the number of nodes: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cout << "Enter the value of node " << i + 1 << ": ";
        cin >> val;
        bt.insert(val);
    }
    bt.inOrderTraversal(bt.root); // output: values in-order
    return 0;
}
