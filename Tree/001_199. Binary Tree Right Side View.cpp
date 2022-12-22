Given the root of a binary tree, imagine yourself standing on the right side of it, return the values of the nodes you can see ordered from top to bottom.

 

Example 1:

Input: root = [1,2,3,null,5,null,4]
Output: [1,3,4]

Example 2:

Input: root = [1,null,3]
Output: [1,3]


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
    vector<int> rightSideView(TreeNode* root) {
        TreeNode* node = root;
        vector<int> l;
        if(root == NULL) return l;
        l.push_back(node->val);
        vector<int> leftres, rightres;
        if(node->left){
        	leftres = rightSideView(node->left);
        }
        if(node->right){
        	rightres =rightSideView(node->right);
        }
        int m = leftres.size();
        int n = rightres.size();
        for(int i=0;i<n;i++){
        	l.push_back(rightres[i]);
        }
        if(m>n){
        	for(int i=n;i<m;i++){
        		l.push_back(leftres[i]);
        	}
        }
        return l;
    }
};





class Solution {
public:
	void rs(TreeNode *root,vector &a,int l,int *m)
	{
		if(root==NULL)
		return;
		if(*m<l)
		{
			a.push_back(root->val);
			m=l;
		}
		rs(root->right,a,l+1,m);
		rs(root->left,a,l+1,m);
	}
	vector rightSideView(TreeNode root) {
		vector a;
		if(root==NULL)
		return a;
		int m=0;
		rs(root,a,1,&m);
		return a;
	}
};