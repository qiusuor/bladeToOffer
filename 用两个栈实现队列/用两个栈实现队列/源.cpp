#include <iostream>
#include <vector>
#include <stack>

using namespace std;


class Solution
{
public:
	void push(int node) {
		stack1.push(node);
	}

	int pop() {
		while (stack1.size()) {
			int tmp = stack1.top();
			stack1.pop();
			stack2.push(tmp);
		}
		int result = stack2.top();
		stack2.pop();
		while (stack2.size()) {
			int tmp = stack2.top();
			stack2.pop();
			stack1.push(tmp);
		}
		return result;
	}

private:
	stack<int> stack1;
	stack<int> stack2;
};
int main(void) {
	Solution s;
	s.push(1);
	cout << s.pop();
	system("pause");
}