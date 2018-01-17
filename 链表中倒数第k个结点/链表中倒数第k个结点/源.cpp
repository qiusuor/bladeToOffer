#include <iostream>
#include <vector>
#include <stack>

using namespace std;

struct ListNode {
int val;
struct ListNode *next;
ListNode(int x) :
val(x), next(NULL) {
}
};

class Solution {
public:
	ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
		if (pListHead == NULL) return nullptr;
		ListNode * cur = pListHead;
		vector<ListNode *> l;
		while (cur)
		{
			l.push_back(cur);
			cur = cur->next;
		}
		if (k <= l.size())
			return l[l.size() - k];
		else
			return nullptr;
	}
};
int main(void) {
	Solution s;
	ListNode * p = new ListNode(3);
	p->next = new struct ListNode(4);

	cout << s.FindKthToTail(p, 2)->val;
	system("pause");
}