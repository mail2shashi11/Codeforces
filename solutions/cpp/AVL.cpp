#include<bits/stdc++.h>
using namespace std;

class AVLNode{
public:
    int val;
    int h;
    AVLNode* left;
    AVLNode* right;
    AVLNode() : val(0), h(1), left(NULL), right(NULL){}
    AVLNode(int x) : val(x), h(1), left(NULL), right(NULL){}
    AVLNode(int x, AVLNode *left, AVLNode *right) : val(x), h(1), left(left), right(right){}
};
class Solution{
public:
    AVLNode* insert(AVLNode* root, int x){
        if(root == NULL) return new AVLNode(x);
        if(x < root->val) root->left = insert(root->left, x);
        else root->right = insert(root->right, x);
        updateHeight(root);

        if(getBF(root) ==2){
            if(getBF(root->left) == 1){
                return rightRotate(root);
            }
            else if(getBF(root->left) == -1){
                root->left = leftRotate(root->left);
                return rightRotate(root);
            }
        }
        else if(getBF(root) == -2){
            if(getBF(root->right) == -1){
                return leftRotate(root);
            }
            else if(getBF(root->right) == 1){
                root->right = rightRotate(root->right);
                return leftRotate(root);
            }
        }

        return root;
    }
    AVLNode* rightRotate(AVLNode* root){
        AVLNode* newRoot = root->left;
        root->left = newRoot->right;
        newRoot->right = root;
        updateHeight(root);
        updateHeight(newRoot);
        return newRoot;
    }
    AVLNode* leftRotate(AVLNode* root){
        AVLNode* newRoot = root->right;
        root->right = newRoot->left;
        newRoot->left = root;
        updateHeight(root);
        updateHeight(newRoot);
        return newRoot;
    }
    int getBF(AVLNode* root){
        return (root->left == NULL ? 0 : root->left->h) - (root->right == NULL ? 0 : root->right->h);
    }
    void updateHeight(AVLNode* root){
        root->h = 1 + max(root->left == NULL ? 0 : root->left->h, root->right == NULL ? 0 : root->right->h);
    }
    void preOrder(AVLNode* root){
        if(!root) return;
        cout<<root->val<<" ";
        preOrder(root->left);
        preOrder(root->right);
    }
    void inOrder(AVLNode* root){
        if(!root) return;
        inOrder(root->left);
        cout<<root->val<<" ";
        inOrder(root->right);
    }
    void postOrder(AVLNode* root){
        if(!root) return;
        postOrder(root->left);
        postOrder(root->right);
        cout<<root->val<<" ";
    }
    void reversePreOrder(AVLNode* root){
        if(!root) return;
        cout<<root->val<<" ";
        reversePreOrder(root->right);
        reversePreOrder(root->left);
    }
    void printTree(AVLNode* root){
        if(!root){
            cout<<"(empty)\n";
            return;
        }
        vector<AVLNode*> nodes;
        nodes.push_back(root);
        printTreeInternal(nodes, 1, root->h);
    }
private:
    void printSpaces(int n){
        for(int i=0;i<n;i++) cout<<" ";
    }
    bool allNull(const vector<AVLNode*>& nodes){
        for(auto node: nodes){
            if(node) return false;
        }
        return true;
    }
    void printTreeInternal(vector<AVLNode*> nodes, int level, int maxLevel){
        if(nodes.empty() || allNull(nodes)) return;

        int floor = maxLevel - level;
        int edgeLines = (int)pow(2, max(floor - 1, 0));
        int firstSpaces = (int)pow(2, floor) - 1;
        int betweenSpaces = (int)pow(2, floor + 1) - 1;

        printSpaces(firstSpaces);
        vector<AVLNode*> next;
        for(auto node: nodes){
            if(node){
                cout<<node->val;
                next.push_back(node->left);
                next.push_back(node->right);
            }
            else{
                cout<<" ";
                next.push_back(NULL);
                next.push_back(NULL);
            }
            printSpaces(betweenSpaces);
        }
        cout<<"\n";

        for(int i=1;i<=edgeLines;i++){
            for(auto node: nodes){
                printSpaces(firstSpaces - i);
                if(!node){
                    printSpaces(edgeLines + edgeLines + i + 1);
                    continue;
                }
                if(node->left) cout<<"/";
                else printSpaces(1);

                printSpaces(i + i - 1);

                if(node->right) cout<<"\\";
                else printSpaces(1);

                printSpaces(edgeLines + edgeLines - i);
            }
            cout<<"\n";
        }
        printTreeInternal(next, level + 1, maxLevel);
    }
};
int main(){
    AVLNode* root = NULL;
    Solution sol;
    int x;
    int step = 1;
    while(cin>>x){
        root = sol.insert(root, x);
        cout<<"After insertion "<<step<<" (value "<<x<<"):\n";
        sol.printTree(root);
        cout<<"\n";
        step++;
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
