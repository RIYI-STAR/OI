#include <iostream>
#include <vector>
#include <queue>
#include <stack>
using namespace std;

//树的结构
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode* parent;
    TreeNode(int x): val(x), left(nullptr), right(nullptr), parent(nullptr) {}
};

//层序遍历
vector<int> levelOrder(TreeNode* root) {
    vector<int> result;
    queue<TreeNode*> q;

    q.push(root);
    while(true){
        TreeNode* temp = q.front();
        q.pop();
        result.push_back(temp->val);
        if(temp->left!= nullptr) q.push(temp->left);
        if(temp->right!=nullptr) q.push(temp->right);
        if(q.empty()) break;
    }
    return result;
}

//其他
vector<int> res;
//前序遍历
void preOrder(TreeNode* root) {
    if(root == nullptr) return;
    res.push_back(root->val);
    preOrder(root->left);
    preOrder(root->right);
}

//中序遍历
void inOrder(TreeNode* root) {
    if(root == nullptr) return;
    inOrder(root->left);
    res.push_back(root->val);
    inOrder(root->right);
}

//后序遍历
void postOrder(TreeNode* root) {
    if(root == nullptr) return;
    postOrder(root->left);
    postOrder(root->right);
    res.push_back(root->val);
}

int main() {   
    //创建树
    TreeNode* n1 = new TreeNode(1);
    TreeNode* n2 = new TreeNode(2);
    TreeNode* n3 = new TreeNode(3);
    TreeNode* n4 = new TreeNode(4);
    TreeNode* n5 = new TreeNode(5);
    n1->left = n5;
    n1->right = n3;
    n5->left = n4;
    n3->left = n2;

    // vector<int> result = levelOrder(n1);
    inOrder(n1);
    vector<int> result = res;
    for(int i = 0; i < result.size(); i++) 
        cout << result[i] << " ";

}