#include <iostream>
#include <vector>
#include <stack>

using namespace std;




class Solution {
public:
	void push(int value) {
		if (stk.size() == 0) {
			stk.push_back(value);
			min_pos.push_back(0);
			mini = value;
		}
		else {
			stk.push_back(value);
			if (mini >= value) {
				min_pos.push_back(stk.size() - 1);
				mini = value;
			}
		}
	}
	void pop() {
		if (stk[stk.size() - 1] == mini) {
			min_pos.pop_back();
		}
		stk.pop_back();
	}
	int top() {
		return stk[stk.size() - 1];
	}
	int min() {
		return stk[min_pos[min_pos.size() - 1]];
	}
	vector<int> stk;
	vector<int> min_pos;
	int mini;
	Solution() {
		
	}

};
int main(void) {
	Solution s;
	vector<vector<int> > m;
	vector<int> l1;
	vector<int> l2;
	vector<int> l3;
	vector<int> l4;
	vector<int> l5;
	int t = 1;
	for (int i = 0; i < 5; i++)
	{
		l1.push_back(t++);
	}
	for (int i = 0; i < 5; i++)
	{
		l2.push_back(t++);
	}
	for (int i = 0; i < 5; i++)
	{
		l3.push_back(t++);
	}
	for (int i = 0; i < 5; i++)
	{
		l4.push_back(t++);
	}
	for (int i = 0; i < 5; i++)
	{
		l5.push_back(t++);
	}
	m.push_back(l1);
	m.push_back(l2);
	m.push_back(l3);
	m.push_back(l4);
	m.push_back(l5);
	//s.printMatrix(m);
	system("pause");
}