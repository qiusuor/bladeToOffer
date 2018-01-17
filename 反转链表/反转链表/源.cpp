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
	ListNode* ReverseList(ListNode* pHead) {
		ListNode* cur = pHead;
		ListNode* p1 = nullptr;
		ListNode*p2 = nullptr;
		if (cur)
			p1 = cur->next;
		if (p1)
			p2 = p1->next;
		if (pHead == nullptr || p1 == nullptr)
			return pHead;
		cur->next = nullptr;
		while (p2)
		{
			p1->next = cur;
			cur = p1;
			p1 = p2;
			p2 = p2->next;
		}
		p1->next = cur;
		return p1;
	}
};
int main(void) {
	Solution s;
	ListNode * p = new ListNode(3);
	p->next = new struct ListNode(4);


	system("pause");
}