#include <bits/stdc++.h>;
using namespace std;

stuct TreeNode {
    int priority;
    string task;
    TreeNode*right=null;
    TreeNode*left=null;

    Treenode(int priority,string task,) : priority(priority), task(task), right(nullptr), left(nullptr){}

};


addTask(int priority,string task){
    TreeNode* newNode = new TreeNode;
    if(!root){
        root=newNode;
        return;
    }
    int queue<TreeNode*>q;
    queue.push(newNode);
    while(!queue.empty()){
        TreeNode* temp = q.front();
        q.pop();
        if(temp->left==nullptr){
            temp->left=newNode;
            newNode->parent=temp;
            return;
         }
         else
         q.push(temp->left);
        if(temp->right==nullptr){
            temp->right=newNode;
            newNode->parent=temp;
            return;
        }
        else
        q.push(temp->right);
    }
    cout<<nodeInserted with Priority:<< newNode->priority<<Task: <<newNode->task;


}


int main(){
    
}