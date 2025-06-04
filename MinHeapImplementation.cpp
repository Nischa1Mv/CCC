#include <iostream>
#include <queue>
#include <string>
using namespace std;

struct TreeNode {
    int priority;
    string task;
    TreeNode* right;
    TreeNode* left;
    TreeNode* parent;

    TreeNode(int priority, string task) : priority(priority), task(task), right(nullptr), left(nullptr) {}
};

TreeNode* root = nullptr;

void addTask(int priority, string task) {
    TreeNode* newNode = new TreeNode(priority, task);
    if (!root) {
        root = newNode;
        cout << " nodeInserted with Priority: " << newNode->priority << " Task: " << newNode->task << endl;
        return;
    }
    queue<TreeNode*> q;
    q.push(root);
    while (!q.empty()) {
        TreeNode* temp = q.front();
        q.pop();
        if (temp->left == nullptr) {
            temp->left = newNode;
            newNode->parent = temp;
            cout << " nodeInserted with Priority: " << newNode->priority << " Task: " << newNode->task << endl;
            return;
        }
        else
            q.push(temp->left);
        if (temp->right == nullptr) {
            temp->right = newNode;
            newNode->parent = temp;
            cout << "nodeInserted with Priority:" << newNode->priority << " Task: " << newNode->task << endl;
            return;
        }
        else
            q.push(temp->right);
    }
   }

int main() {
    // Example usage
    addTask(5, "Task 1");
    addTask(3, "Task 2");
    addTask(8, "Task 3");


    return 0;
}