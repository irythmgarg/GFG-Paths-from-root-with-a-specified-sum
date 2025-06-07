// Global container to store all valid paths
vector<vector<int>> ans;

/**
 * Helper function to explore all paths and check for target sum.
 * 
 * @param root Current node being visited.
 * @param small Current path being tracked.
 * @param sum Target sum to be matched.
 * @param tillnow Accumulated sum along the current path.
 */
void takesum(Node* root, vector<int>& small, int sum, int tillnow) {
    if (!root)
        return;

    // Include current node in the path
    small.push_back(root->key);
    tillnow += root->key;

    // If current sum matches target, add path to answer
    if (tillnow == sum) {
        ans.push_back(small);
    }

    // Recur to left and right children
    takesum(root->left, small, sum, tillnow);
    takesum(root->right, small, sum, tillnow);

    // Backtrack to explore other paths
    small.pop_back();
}

/**
 * Function to return all paths in the binary tree where the sum
 * of the nodes equals the given target sum.
 * 
 * @param root Pointer to the root node of the tree.
 * @param sum Target sum to be matched.
 * @return A vector of paths (each path is a vector of integers).
 */
vector<vector<int>> printPaths(Node* root, int sum) {
    ans.clear();                 // Ensure no leftover data from previous runs
    vector<int> small;           // Temporary vector to store current path
    takesum(root, small, sum, 0);
    return ans;
}
