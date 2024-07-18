/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        // Map to hold nodes organized by their horizontal (x) and vertical (y) distances.
        map<int, map<int, multiset<int>>> nodes;
        
        // Queue to facilitate BFS traversal; stores pairs of (node, (x, y))
        queue<pair<TreeNode*, pair<int, int>>> todo;
        todo.push({root, {0, 0}});
        
        while (!todo.empty()) {
            auto p = todo.front();
            todo.pop();
            TreeNode* node = p.first;
            int x = p.second.first;
            int y = p.second.second;
            
            // Insert the node's value into the appropriate position in the nodes map
            nodes[x][y].insert(node->val);
            
            // If the node has a left child, push it to the queue with updated coordinates
            if (node->left) {
                todo.push({node->left, {x-1, y+1}});
            }
            
            // If the node has a right child, push it to the queue with updated coordinates
            if (node->right) {
                todo.push({node->right, {x+1, y+1}});
            }
        }
        
        vector<vector<int>> ans;
        
        // Iterate over the nodes map to construct the result
        for (auto p : nodes) {
            vector<int> col;
            
            // Merge all values in the multiset for each vertical level
            for (auto q : p.second) {
                col.insert(col.end(), q.second.begin(), q.second.end());
            }
            
            // Add the column to the final answer
            ans.push_back(col);
        }
        
        return ans;
    }
};
