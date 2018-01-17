#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
		val(x), left(NULL), right(NULL) {
	}
};

class Solution {
public:
	vector<int> PrintFromTopToBottom(TreeNode* root) {
		queue<TreeNode*> q;
		vector<int> result;
		if (root == nullptr) return result;
		q.push(root);
		while (q.size())
		{
			TreeNode* cur=q.front();
			q.pop();
			result.push_back(cur->val);
			if (cur->left)
				q.push(cur->left);
			if (cur->right)
				q.push(cur->right);
		}
		return result;
	}
};

int main(void) {

	system("pause");
}