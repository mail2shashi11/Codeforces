#include<bits/stdc++.h>
using namespace std;

class BSTNode{
public:
    int val;
    BSTNode* left;
    BSTNode* right;
    BSTNode() : val(0), left(NULL), right(NULL){}
    BSTNode(int x) : val(x), left(NULL), right(NULL){}
    BSTNode(int x, BSTNode *left, BSTNode *right) : val(x), left(left), right(right){}
};
class Solution{
public:
    BSTNode* insert(BSTNode* root, int x){
        if(root == NULL) return new BSTNode(x);
        if(x < root->val) root->left = insert(root->left, x);
        else root->right = insert(root->right, x);
        return root;
    }
    void preOrder(BSTNode* root){
        if(!root) return;
        cout<<root->val<<" ";
        preOrder(root->left);
        preOrder(root->right);
    }
    void inOrder(BSTNode* root){
        if(!root) return;
        inOrder(root->left);
        cout<<root->val<<" ";
        inOrder(root->right);
    }
    void postOrder(BSTNode* root){
        if(!root) return;
        postOrder(root->left);
        postOrder(root->right);
        cout<<root->val<<" ";
    }
    void reversePreOrder(BSTNode* root){
        if(!root) return;
        cout<<root->val<<" ";
        reversePreOrder(root->right);
        reversePreOrder(root->left);
    }
};
int main(){
    BSTNode* root = NULL;
    Solution sol;
    int x;
    while(cin>>x){
        root = sol.insert(root, x);
    }
    cout<<"preOrder: ";
    sol.preOrder(root);
    cout<<endl;
    cout<<"inOrder: ";
    sol.inOrder(root);
    cout<<endl;
    cout<<"postOrder: ";
    sol.postOrder(root);
    cout<<endl;
    cout<<"reversePreOrder: ";
    sol.reversePreOrder(root);
    return 0;
}