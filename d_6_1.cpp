#include <iostream>
#include <queue>

using namespace std;

// Definition for a binary tree node.
struct TreeNode
{
    int data;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int value) : data(value), left(nullptr), right(nullptr) {}
};

// Class to represent the Binary Tree
class BinaryTree
{
private:
    TreeNode *root;

    // Helper function for inorder traversal
    void inorderHelper(TreeNode *node)
    {
        if (node)
        {
            inorderHelper(node->left);
            cout << node->data << " ";
            inorderHelper(node->right);
        }
    }

    // Helper function for preorder traversal
    void preorderHelper(TreeNode *node)
    {
        if (node)
        {
            cout << node->data << " ";
            preorderHelper(node->left);
            preorderHelper(node->right);
        }
    }

    // Helper function for postorder traversal
    void postorderHelper(TreeNode *node)
    {
        if (node)
        {
            postorderHelper(node->left);
            postorderHelper(node->right);
            cout << node->data << " ";
        }
    }

public:
    BinaryTree() : root(nullptr) {}

    // Insert a node at the left of the tree
    void insertLeft(int value)
    {
        if (root == nullptr)
        {
            root = new TreeNode(value);
        }
        else
        {
            TreeNode *newNode = new TreeNode(value);
            newNode->left = root->left;
            root->left = newNode;
        }
    }

    // Insert a node at the right of the tree
    void insertRight(int value)
    {
        if (root == nullptr)
        {
            root = new TreeNode(value);
        }
        else
        {
            TreeNode *newNode = new TreeNode(value);
            newNode->right = root->right;
            root->right = newNode;
        }
    }

    // Delete a node from the right
    void deleteRight()
    {
        if (root == nullptr)
        {
            cout << "Tree is empty, cannot delete from right." << endl;
            return;
        }

        TreeNode *temp = root->right;
        if (temp == nullptr)
        {
            cout << "No right node to delete." << endl;
            return;
        }

        root->right = temp->right; // Bypass the node to delete
        delete temp;               // Free memory
    }

    // Inorder traversal
    void inorder()
    {
        inorderHelper(root);
        cout << endl;
    }

    // Preorder traversal
    void preorder()
    {
        preorderHelper(root);
        cout << endl;
    }

    // Postorder traversal
    void postorder()
    {
        postorderHelper(root);
        cout << endl;
    }

    // Level order traversal
    void levelOrder()
    {
        if (root == nullptr)
            return;

        queue<TreeNode *> q;
        q.push(root);

        while (!q.empty())
        {
            TreeNode *node = q.front();
            q.pop();
            cout << node->data << " ";

            if (node->left)
                q.push(node->left);
            if (node->right)
                q.push(node->right);
        }
        cout << endl;
    }
};

int main()
{
    BinaryTree tree;

    // Inserting nodes
    tree.insertLeft(10);
    tree.insertLeft(5);
    tree.insertRight(15);
    tree.insertLeft(3);
    tree.insertRight(12);

    cout << "Inorder Traversal: ";
    tree.inorder();

    cout << "Preorder Traversal: ";
    tree.preorder();

    cout << "Postorder Traversal: ";
    tree.postorder();

    cout << "Level Order Traversal: ";
    tree.levelOrder();

    // tree.deleteRight();
    // cout << "After deleting right node:" << endl;

    // cout << "Inorder Traversal: ";
    // tree.inorder();

    // cout << "Preorder Traversal: ";
    // tree.preorder();

    // cout << "Postorder Traversal: ";
    // tree.postorder();

    // cout << "Level Order Traversal: ";
    // tree.levelOrder();

    return 0;
}
