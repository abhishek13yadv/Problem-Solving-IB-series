# Postorder Traversal


```
vector<int> sol;

void helper(TreeNode* A){
    if(A == NULL)
        return;
    helper(A->left);
    helper(A->right);
    sol.push_back(A->val);
}

vector<int> Solution::postorderTraversal(TreeNode* A) {
    sol.clear();
    helper(A);
    return sol;
}

```
