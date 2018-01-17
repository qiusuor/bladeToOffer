#include <iostream>
#include <vector>
#include <stack>

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
	bool judgeSame(TreeNode* pRoot1, TreeNode* pRoot2) {
		if (pRoot1 == nullptr) return false;
		if (pRoot1->val == pRoot2->val) {
			if (pRoot2->left && pRoot2->right) return judgeSame(pRoot1->left, pRoot2->left) && judgeSame(pRoot1->right, pRoot2->right);
			else if (pRoot2->left) return judgeSame(pRoot1->left, pRoot2->left);
			else if (pRoot2->right) return judgeSame(pRoot1->right, pRoot2->right);
			else return true;
		}
		else return false;
	}
	bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
	{
		if (pRoot1 == nullptr || pRoot2 == nullptr) return false;
		if (pRoot1->val == pRoot2->val && judgeSame(pRoot1, pRoot2))
			return true;
		else {
			return HasSubtree(pRoot1->left, pRoot2)||HasSubtree(pRoot1->right,pRoot2);
		}
	}
};
int main(void) {
	Solution s;
	s.HasSubtree(nullptr, nullptr);

	system("pause");
}