#include <iostream>
using namespace std;

class Node{
    public:
    int val;
    Node *left;
    Node *right;
    Node(int data){
        val = data;
        left = NULL;
        right = NULL;
    }
};

//Binary Search Tree
class BinaryTree{
    public:
    BinaryTree(){
        root = NULL;
    }
    bool search(Node *root, int key){
        return searchRecursive(root, key);
    }
    void insert(int key){
        root = insertRecursive(root, key);
    }

    void deleteR(int key){
        root = deleteRecursive(root, key);
    }

    

    private:
    //maintain a pointer to the root node
    Node *root;

    //search for a key in the tree
    bool searchRecursive(Node *root, int key){
        if(root ==NULL){
            return false;
        }
        if(root->val==key){
            return true;
        }else if(root->val>key){
            return searchRecursive(root->left, key);
        }else{
            return searchRecursive(root->right, key);
        }
    }

    //insert a key in the tree
    Node *insertRecursive(Node *root, int key){
        if(root == NULL){
            root = new Node(key);
            return root;
        }
        if(root->val>key){
            root->left = insertRecursive(root->left, key);
        }else{
            root->right = insertRecursive(root->right, key);
        }
        return root;
    }

    //delete a key in the tree
    Node *deleteRecursive(Node *root, int key){
        return root;
    }

    
};



int main(){
    return 0;
}
