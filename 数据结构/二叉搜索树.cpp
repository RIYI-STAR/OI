#include <iostream>
using namespace std;

//树结构
struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode* parent;
    TreeNode(int d) : data(d), left(nullptr), right(nullptr), parent(nullptr) {}
};

TreeNode* search(int d, TreeNode* root){
    if (root == nullptr) return nullptr;
    if(root->data == d) return root;
    else if(root->data < d) return search(d, root->right);
    else return search(d, root->left);
}

void insert(int d, TreeNode* root){
    TreeNode* p = root;
    TreeNode* parent = nullptr;
    TreeNode* newNode = new TreeNode(d);
    while(p!=nullptr) {
        parent = p;
        if(p->data < d) p = p->right;
        else if(p->data > d) p = p->left;
        else return;
    }
    newNode->parent = parent;
    
    if(parent->data > d) parent->left = newNode;
    else parent->right = newNode;
}

void deleteNode(int d, TreeNode* root){
    TreeNode* p = search(d, root);
    if(p == nullptr) return;
    if(p->left == nullptr && p-> right == nullptr) {
        if (p->parent->left == p) p->parent->left = nullptr;
        else p->parent->right = nullptr;
        delete p;
    }
    else if(p->left == nullptr) {
        if (p->parent->left == p) p->parent->left = p->right;
        else p->parent->right = p->right;
        p->right->parent = p->parent;
        delete p;
    }
    else if(p->right == nullptr) {
        if(p->parent->left == p) p->parent->left = p->left;
        else p->parent->right = p->left;
        p->left->parent = p->parent;
        delete p;
    }
    else {
        TreeNode* pp = p->left;
        TreeNode* parent = nullptr;
        while(pp != nullptr){
            parent = pp;
            pp = pp->right;
        }
        if (parent != nullptr) {
            p->data = parent->data;
            if (parent->parent != nullptr) {
                if (parent->parent->left == parent) {
                    parent->parent->left = nullptr;
                } else {
                    parent->parent->right = nullptr;
                }
            } else {
                p->left = nullptr; 
            }
            delete parent;
        }
    }
}

void inOrder(TreeNode* root){
    if (root->left != nullptr) inOrder(root->left);
    cout << root->data << " ";
    if (root->right != nullptr) inOrder(root->right);
}

int main() {
    //创建树
    TreeNode* n1 = new TreeNode(1);
    
    int arr[7] = {2, 3, 4, 5, 6, 7, 8};
    for(int i=0;i<7;i++) insert(arr[i], n1);
    inOrder(n1);

    cout << endl;
    deleteNode(2, n1);
    inOrder(n1);

    // TreeNode* res = search(3, n1);
    // cout << res->data << endl;
}