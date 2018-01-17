#include <iostream>
#include <vector>
#include <algorithm>

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
	vector<int> printListFromTailToHead(ListNode* head) {
		vector<int>result;
		ListNode* cur = head;
		while (cur) {
			result.push_back(cur->val);
			cur = cur->next;
		}
		reverse(result.begin(),result.end());
		return result;
	}
};