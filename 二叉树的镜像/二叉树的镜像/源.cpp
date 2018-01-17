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
	void Mirror(TreeNode *pRoot) {
		if (pRoot) {
			TreeNode *tmp = pRoot->left;
			pRoot->left = pRoot->right;
			pRoot->right = tmp;
			Mirror(pRoot->left);
			Mirror(pRoot->right);
		}
		
	}
};
int main(void) {
	Solution s;
	
	system("pause");
}