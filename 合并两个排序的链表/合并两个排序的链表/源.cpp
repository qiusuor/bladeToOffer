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
	ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
	{
		ListNode *p1 = pHead1;
		ListNode *p2 = pHead2;
		if (!p1 && !p2) return nullptr;
		ListNode *result ;
		ListNode *pre=nullptr;
		ListNode* cur ;
		bool f = true;
		while (p1 || p2)
		{
			ListNode* cur = new ListNode(0);

			if (f) {
				result = cur;
				f = false;
			}
			else {
				pre->next = cur;
			}

			pre = cur;
			
			if (p1 && !p2) {
				cur->val = p1->val;
				p1 = p1->next;
			}
			else if (!p1 &&p2) {
				cur->val = p2->val;
				p2 = p2->next;
			}
			else {
				if (p1->val > p2->val) {
					cur->val = p2->val;
					p2 = p2->next;
				}
				else {
					cur->val = p1->val;
					p1 = p1->next;
				}
			}
		}
		return result;
	}
};
int main(void) {
	Solution s;
	ListNode * p = new ListNode(3);
	p->next = new struct ListNode(4);
	s.Merge(p, nullptr);

	system("pause");
}