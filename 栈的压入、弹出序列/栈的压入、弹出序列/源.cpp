#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
	bool IsPopOrder(vector<int> pushV, vector<int> popV) {
		vector<int> stk;
		int i = 0;
		int j = 0;
		for (;i<pushV.size();)
		{
			if (pushV[i] == popV[j]) {
				i++;
				j++;
			}
			else
				stk.push_back(pushV[i++]);
		}
		for (; j < popV.size();) {
			if (stk[stk.size() - 1] == popV[j]) {
				stk.pop_back();
				j++;
			}
			else
				break;
		}
		return !stk.size();
	}
};

int main(void) {
	vector<int> a;
	a.push_back(1);
	a.push_back(2);
	a.push_back(3);
	a.push_back(4);
	a.push_back(5);
	vector<int> b;
	b.push_back(4);
	b.push_back(5);
	b.push_back(3);
	b.push_back(2);
	b.push_back(1);

	Solution s;
	cout<<s.IsPopOrder(a, b);
	system("pause");
}